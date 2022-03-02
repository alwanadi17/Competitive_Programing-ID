// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <sstream>

class X {
public:
    int m_a;
    int m_b;

    X(int a = 1, int b = 2) {
        this->m_a = a;
        this->m_b = b;
    }
  
    X operator ++ () {
        X ret = *this;
        ++m_a;
        ++m_b;
        return ret;
    }
  
    X operator ++ (int) {
        X ret(m_a++,m_b++);
        return ret;
    }
  
    X operator += (const X &obj)  {
        this->m_a += obj.m_a;
        this->m_b += obj.m_b;
        return *this;
    }
  
    X operator + (const X &obj) {
        return operator += (obj);
    }
  
    std::string print();
};

void operator << (std::ostream &os, const X &x) {
    os << "[" << x.m_a << "," << x.m_b << "]";
}

std::string X::print() {
    std::stringstream s;
    std::cout << X();
    s << "[" << m_a << "," << m_b << "]";
    return s.str();
} 
