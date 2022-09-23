#include "Array.h"
#include <array>
#include <iostream>
#include "Exceptions.cpp"

Array::Array()
{
    index = 0;
    array = new int[sizeArray];
    array_temp = nullptr;
}

Array::~Array()
{
    delete[]array;
}

void Array::clear()
{
    for (int i = 0; i < sizeArray; i++) {
        array[i] = 0; // czy mozna ustawic na nic?? 
    }      
}

void Array::push_back(int item) {

    if (index < sizeArray - 1) {
        array[index] = item;
        index++;
    }
    else {
        array_temp = new int[sizeArray * 2];

        for (int i = 0; i < sizeArray; i++) {
            array_temp[i] = array[i];
        }
        sizeArray = sizeArray * 2;
        delete[]array;
        array = array_temp;
        array[index] = item;
        index++;
        std::cout << "New alocation\n";
    }
}

int Array::get(int ind) {

    if (ind >= 0 && ind < sizeArray) {
        return array[ind];
    }
    else {
        try {
            throw ExceptionOfindex();
        }
        catch (ExceptionOfindex& e) {
            std::cout << "MyException caught" << std::endl;
            std::cout << e.what()  << ind << "index =" << index << std::endl;
        }
        return 0;
    }
}

void Array::set(int ind, int value) {

    if (ind >= 0 && ind < sizeArray) {
        array[ind] = value;
    }
    else {
        try {
            throw ExceptionOfind();
        }
        catch (ExceptionOfind& e) {
            std::cout << "MyException caught" << std::endl;
            std::cout << e.what() << sizeArray << "ind: " << ind << std::endl;
        }
    }
}

int Array::operator[](int i)
{    
    if (i >= sizeArray ) {
        std::cout << "Array index out of bound, exiting";
        exit(0);
    }
    return this->array[i];
}
