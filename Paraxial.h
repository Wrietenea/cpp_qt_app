#pragma once


#include <iostream>
/////////////////////////////////////////////////////////////////////////////
// ��������� ������������� �������������
struct Paraxial
{
    double F, F_;   // �������� ����������
    double SF, SF_; // ��������� �������
    double SH, SH_; // ��������� ������� ����������

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

