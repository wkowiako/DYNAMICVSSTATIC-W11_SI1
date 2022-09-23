#include <iostream>
#include "Array.h"
#include "Exceptions.cpp"

int main()
{
   /*  {
        Array a;
        //  a.set(2, 2);
         // if (a.get(2) == 2) { std::cout << "Test 1 ok\n"; }else {std::cout << "Test 1 Error\n";}

         // a.push_back(4);
         // if (a.get(0) == 4) { std::cout << "Test 2 ok\n"; }else { std::cout << "Test 2 Error\n"; }

        for (int i = 0; i < 25; i++) {
            a.push_back(i);
            if (a.get(i) == i) { std::cout << "Test pushback ok\n"; }
            else { std::cout << "Test pushback Error\n"; }
        }
        a.set(39, 130);
        if (a.get(39) == 130) { std::cout << "Test get3 ok\n"; }
        else { std::cout << "Test get3 Error\n"; }
    }

    {
        Array a;

        a.set(2, 2);
        if (a.get(2) == 2) { std::cout << "Test get1 ok\n"; }
        else { std::cout << "Test get1 Error\n"; }
        a.set(5, 55);
        if (a.get(1) == 55) { std::cout << "Test get2 Error\n"; }
        else { std::cout << "Test get2 Ok\n"; }
        a.set(39, 130);
        if (a.get(39) == 130) { std::cout << "Test get3 Error\n"; }
        else { std::cout << "Test get3 Ok\n"; }
    }
    {
        Array a;
        a.set(0, 2);
        std::cout << a[0];
    } 
    */ //Testy
    Array a;
    a.push_back(4);
    a.push_back(3);
    a.push_back(5);
    a.push_back(9);
    std::cout<< a.get(1)<<std::endl;
    a.set(1,8);
    std::cout << a.get(1) << std::endl;
    std::cout << a.get(22) << std::endl;
}