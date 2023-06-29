#include <iostream>
#include "Array.h"

int main()
{
    int size; 
    std::cout << "Size = ";
    std::cin >> size;
    Array arr1;
    Array arr2(size);
    arr1.rand_init();
    arr2.rand_init();
    std::cout << "\nArr1 = ";
    for (int i = 0; i < arr1.get_size(); i++)
    {
        std::cout << arr1.get_element(i) << "\t";
    }
    std::cout << "\nArr2 = ";
    for (int i = 0; i < arr2.get_size(); i++)
    {
        std::cout << arr2.get_element(i) << "\t";
    }
    std::cout << std::endl;
    
    for (int i = 0; i < arr1.get_size(); i++)
    {
        arr1[i] = i;
    }
    for (int i = 0; i < arr2.get_size(); i++)
    {
        arr2[i] = i;
    }

    std::cout << "\nArr1 = ";
    for (int i = 0; i < arr1.get_size(); i++)
    {
        std::cout << arr1[i] << "\t";
    }
    std::cout << "\nArr2 = ";
    for (int i = 0; i < arr2.get_size(); i++)
    {
        std::cout << arr2.at(i) << "\t";
    }
    std::cout << std::endl;


    return 0;
}
