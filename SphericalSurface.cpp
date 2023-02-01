
#include "SphericalSurface.h"
using namespace std;
// конструктор 
SphericalSurface::SphericalSurface()
    : m_r(0)
{
    //cout << "constructor SphericalSurface()" << endl;
}
SphericalSurface::SphericalSurface(double r)
    : m_r(r)
{
     cout << "constructor SphericalSurface()" << endl;
}
// деструктор
SphericalSurface::~SphericalSurface()
{
    // cout << "destructor SphericalSurface" << endl;
}
void SphericalSurface::GetTransformMatrix(boost::numeric::ublas::matrix<double>*ptr_transform, double n, double n_)
{

    (*ptr_transform)(0, 0) = 1;
    (*ptr_transform)(0, 1) = 0;
    (*ptr_transform)(1, 0) = (n_-n)/m_r;
    (*ptr_transform)(1, 1) = 1;

}