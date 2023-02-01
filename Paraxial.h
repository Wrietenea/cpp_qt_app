#pragma once


#include <iostream>
/////////////////////////////////////////////////////////////////////////////
// структура параксиальных характеристик
struct Paraxial
{
    double F, F_;   // фокусные расстояния
    double SF, SF_; // фокальные отрезки
    double SH, SH_; // положения главных плоскостей

    Paraxial();
    void write(std::ostream& out) const;
};
/////////////////////////////////////////////////////////////////////////////
inline Paraxial::Paraxial()
    : F(0)
    , F_(0)
    , SF(0)
    , SF_(0)
    , SH(0)
    , SH_(0)
{
}
inline void Paraxial::write(std::ostream& out) const
{
    out << "f=" << F << " f\'=" << F_ << " Sf=" << SF << " Sf\'=" << SF_ << " SH=" << SH << " SH\'=" << SH_ << endl;
}

