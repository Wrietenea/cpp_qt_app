#pragma once
class Surface
{
protected:

    double m_h;

public:
    // ������������ � ����������
    Surface();
    Surface(double h);
    virtual ~Surface();

    // ���������� ������� ������
    void Set_H(double h);
    // �������� ������� ������
    double Get_H() const;
    

};