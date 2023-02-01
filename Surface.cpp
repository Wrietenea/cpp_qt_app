#include <iostream>
using namespace std;

#include "Surface.h"

// конструктор 
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
// деструктор
Surface::~Surface()
{
   // cout << "destructor Surface" << endl;
}
