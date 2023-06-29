#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array{
    private:
        int size = 5;
        int* arr = nullptr;
    public:
        Array();
        Array(int const);
        ~Array();
        Array(const Array&);
        Array& operator =(const Array&);
        int get_element(int const);
        int get_size();
        void rand_init();
        int& operator [](int);
        int& at(int);
};

#endif