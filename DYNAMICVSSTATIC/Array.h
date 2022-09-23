#pragma once
class Array
{
private:

    int index = 0;
    int sizeArray = 20;
    int* array;
    int* array_temp ;

public:
    Array();
    ~Array();
    void clear();
    void push_back(int item);
    int get(int index);
    void set(int index, int value);
    int operator[](int i);
};
