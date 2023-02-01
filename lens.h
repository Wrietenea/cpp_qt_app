#pragma once
// проверка на повторное подключение файла
#if !defined LENS_H
#define LENS_H 

#include <iostream>
#include "paraxial.h"
#include "SphericalSurface.h"
/////////////////////////////////////////////////////////////////////////////
// класс ЛИНЗА
class Lens
{
private:
    // поверхности
    SphericalSurface m_surface1;
    SphericalSurface m_surface2;
        
    double m_d;
    
    double m_n;
    
    //Paraxial m_paraxial;

public:
    // конструктор и деструктор
    Lens(SphericalSurface surface1, SphericalSurface surface2, double d, double n);
    ~Lens();
    

    // установка показателя преломления 
    void Set_n(double n);
    // получение показателя преломления 
    double Get_n() const;
    // установка осевого расстояния 
    void Set_d(double d);
    // получение осевого расстояния
    double Get_d() const;
    // ...




    // вычисление параксиальных характеристик
    void CalculateParaxial(Paraxial* ptr_paraxial);
};


// установка показателя преломления 
inline void Lens::Set_n(double n)
{
    m_n = n;
}
/////////////////////////////////////////////////////////////////////////////
// получение показателя преломления
inline double Lens::Get_n() const
{
    return m_n;
}
/////////////////////////////////////////////////////////////////////////////
// установка осевого расстояния
inline void Lens::Set_d(double d)
{
    m_d = d;
}
/////////////////////////////////////////////////////////////////////////////
// получение осевого расстояния
inline double Lens::Get_d() const
{
    return m_d;
}

/////////////////////////////////////////////////////////////////////////////
#endif //defined LENS_H