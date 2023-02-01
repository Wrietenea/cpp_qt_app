using namespace std;

// подключение описания класса
#include "lens.h"

/////////////////////////////////////////////////////////////////////////////
// полный конструктор
Lens::Lens(SphericalSurface surface1, SphericalSurface surface2, double d, double n)
    : m_surface1(surface1)
    , m_surface2(surface2)
    , m_d(d)
    , m_n(n)
{
    //    cout << "constructor Lens(r1,r2,d,n)" << endl;
}



// деструктор
Lens::~Lens()
{
}

// вычисление параксиальных характеристик
void Lens::CalculateParaxial(Paraxial *ptr_paraxial)
{
    boost::numeric::ublas::matrix<double> T(2, 2);
    T(0, 0) = 1;
    T(0, 1) = m_d / m_n;
    T(1, 0) = 0;
    T(1, 1) = 1;
    boost::numeric::ublas::matrix<double> R1(2, 2);
    m_surface1.GetTransformMatrix(&R1,m_n,1);
    cout << R1(0,0) <<" " << R1(0, 1) << " " << R1(1, 0) << " " << R1(1, 1) << endl;
    boost::numeric::ublas::matrix<double> R2(2, 2);
    m_surface2.GetTransformMatrix(&R2,1,m_n);
    cout << R2(0, 0) << " " << R2(0, 1) << " " << R2(1, 0) << " " << R2(1, 1) << endl;
    // Расчет матрицы преобразования G 
    boost::numeric::ublas::matrix<double> G(2, 2);
    boost::numeric::ublas::matrix<double> A(2, 2); 
    A = prod(R2, T);
    G = prod(A, R1);
    // вычисление параксиальных характеристик
    ptr_paraxial->F = G(0, 0) * G(1, 1) / G(1, 0) - G(0, 1);
    ptr_paraxial->F_ = -1 / G(1, 0);
    ptr_paraxial->SF = G(1, 1) / G(1, 0);
    ptr_paraxial->SF_ = -G(0, 0) / G(1, 0);
    ptr_paraxial->SH = ptr_paraxial->SF - ptr_paraxial->F;
    ptr_paraxial->SH_ = ptr_paraxial->SF_ - ptr_paraxial->F_;
 

}