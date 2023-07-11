#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array{
    private:
        int m_size = 5;
        int* m_arr = nullptr;
    public:
        Array();
        Array(int const);
        ~Array();
        Array(const Array&);
        Array& operator =(const Array&);
        Array(Array&&);
        Array& operator =(Array&&);
    public:
        int get_element(int const);
        int get_size();
        void rand_init();
        int& operator [](int);
        int& at(int);
};

#endif