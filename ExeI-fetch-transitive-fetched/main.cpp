/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibD/LibD.h"

int main()
{
    std::cout << "[C++.ExeI] main.cpp" << "\n";
    std::cout << "[C++.ExeI] " << name() << "\n";
    std::cout << "[C++.ExeI] " << LibD::name() << "\n";
    std::cout << "[C++.ExeI] " << LibD::dependencies() << "\n";
}