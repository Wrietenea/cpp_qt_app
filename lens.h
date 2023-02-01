#pragma once
// �������� �� ��������� ����������� �����
#if !defined LENS_H
#define LENS_H 

#include <iostream>
#include "paraxial.h"
#include "SphericalSurface.h"
/////////////////////////////////////////////////////////////////////////////
// ����� �����
class Lens
{
private:
    // �����������
    SphericalSurface m_surface1;
    SphericalSurface m_surface2;
        
    double m_d;
    
    double m_n;
    
    //Paraxial m_paraxial;

public:
    // ����������� � ����������
    Lens(SphericalSurface surface1, SphericalSurface surface2, double d, double n);
    ~Lens();
    

    // ��������� ���������� ����������� 
    void Set_n(double n);
    // ��������� ���������� ����������� 
    double Get_n() const;
    // ��������� ������� ���������� 
    void Set_d(double d);
    // ��������� ������� ����������
    double Get_d() const;
    // ...




    // ���������� ������������� �������������
    void CalculateParaxial(Paraxial* ptr_paraxial);
};


// ��������� ���������� ����������� 
inline void Lens::Set_n(double n)
{
    m_n = n;
}
/////////////////////////////////////////////////////////////////////////////
// ��������� ���������� �����������
inline double Lens::Get_n() const
{
    return m_n;
}
/////////////////////////////////////////////////////////////////////////////
// ��������� ������� ����������
inline void Lens::Set_d(double d)
{
    m_d = d;
}
/////////////////////////////////////////////////////////////////////////////
// ��������� ������� ����������
inline double Lens::Get_d() const
{
    return m_d;
}

/////////////////////////////////////////////////////////////////////////////
#endif //defined LENS_H