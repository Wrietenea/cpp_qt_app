#include <iostream>
using namespace std;

#include "Surface.h"

// ����������� 
Surface::Surface()
    : m_h(0)
{
    //cout << "constructor Surface()" << endl;
}
Surface::Surface(double h)
    : m_h(h)
{
   // cout << "constructor Surface()" << endl;
}
// ����������
Surface::~Surface()
{
   // cout << "destructor Surface" << endl;
}
