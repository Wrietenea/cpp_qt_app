#pragma once
class Surface
{
protected:

    double m_h;

public:
    // конструкторы и деструктор
    Surface();
    Surface(double h);
    virtual ~Surface();

    // установить диаметр детали
    void Set_H(double h);
    // получить диаметр детали
    double Get_H() const;
    

};