#include "Array.h"

Array::Array(){
    arr = new int[size];
}

Array::Array(int const size){
    if (size < 1){
        std::cerr << "Size can't be lower than 1" << std::endl;
        abort();
    }
    this->size = size;
    arr = new int[this->size];
}

Array::~Array(){
    delete[] arr;
    arr = nullptr;
}

Array::Array(const Array& obj):size(obj.size){
    this->arr = new int[size];
    for (int i = 0; i < size; i++){
        this->arr[i] = obj.arr[i];
    }
}

Array& Array::operator = (const Array& obj){
    if (this != &obj){
        delete[] this->arr;
        this->arr = nullptr;
        this->size = obj.size;
        this->arr = new int[size];
        for (int i = 0; i < size; i++){
            this->arr[i] = obj.arr[i];
        }
    }
    return *this;
}

int Array::get_element(int const i){
    return arr[i];
}

void Array::rand_init(){
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 90 + 10;
    }
}

int Array::get_size(){
    return size;
}

int& Array::operator [] (int i){
    return arr[i];
}