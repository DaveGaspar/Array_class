#include "Array.h"

Array::Array(){
    m_arr = new int[m_size];
}

Array::Array(int const size){
    if (size < 1){
        std::cerr << "Size can't be lower than 1" << std::endl;
        abort();
    }
    this->m_size = size;
    m_arr = new int[this->m_size];
}

Array::~Array(){
    delete[] m_arr;
    m_arr = nullptr;
}

Array::Array(const Array& obj)
    : m_size(obj.m_size)
{
    this->m_arr = new int[m_size];
    for (int i = 0; i < m_size; i++){
        this->m_arr[i] = obj.m_arr[i];
    }
}

Array& Array::operator = (const Array& obj){
    if (this != &obj){
        delete[] this->m_arr;
        this->m_arr = nullptr;
        this->m_size = obj.m_size;
        this->m_arr = new int[m_size];
        for (int i = 0; i < m_size; i++){
            this->m_arr[i] = obj.m_arr[i];
        }
    }
    return *this;
}

Array::Array(Array&& obj)
    : m_size(obj.m_size), m_arr(obj.m_arr)
{
    obj.m_size = 0;
    obj.m_arr = nullptr;
}

Array& Array::operator=(Array&& obj){
    if (this != &obj){
        delete[] this->m_arr;
        this->m_size = obj.m_size;
        this->m_arr = obj.m_arr;
        obj.m_size = 0;
        obj.m_arr = nullptr;
    }
    return *this;
}


int Array::get_element(int const i){
    return m_arr[i];
}

void Array::rand_init(){
    for (int i = 0; i < m_size; i++)
    {
        m_arr[i] = rand() % 90 + 10;
    }
}

int Array::get_size(){
    return m_size;
}

int& Array::operator [] (int const i){
    return m_arr[i];
}

int& Array::at(int i){
    if (i < 0 || i > m_size){
        std::cerr << "\nIndex is not in range" << std::endl;
        abort();
    }
    return m_arr[i];
}