#pragma once

#include "Surface.h"
#include "boost\numeric\ublas\matrix.hpp"
#include "boost\numeric\ublas\vector.hpp"

class SphericalSurface : public Surface
{
private:

    double m_r;

public:
    // конструкторы и деструктор
    SphericalSurface();
    SphericalSurface(double r);
    ~SphericalSurface();

    
    void Set_r(double r);
    
    double Get_r() const;
    void GetTransformMatrix(boost::numeric::ublas::matrix<double>*ptr_transform, double n, double n_);

};

inline void SphericalSurface::Set_r(double r)
{
    m_r = r;
}

inline double SphericalSurface::Get_r() const
{
    return m_r;
}

