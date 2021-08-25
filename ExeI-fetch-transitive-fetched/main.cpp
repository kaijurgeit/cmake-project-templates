/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibD/LibD.h"

int main()
{
    std::cout << "[C++.ExeJ] main.cpp" << "\n";
    std::cout << "[C++.ExeJ] " << name() << "\n";
    std::cout << "[C++.ExeJ] " << LibD::name() << "\n";
    std::cout << "[C++.ExeJ] " << LibD::dependencies() << "\n";
}