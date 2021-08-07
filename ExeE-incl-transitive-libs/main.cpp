/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibC/LibC.h"

int main()
{
    std::cout << "[C++.ExeE] main.cpp" << "\n";
    std::cout << "[C++.ExeE] " << name() << "\n";
    std::cout << "[C++.ExeE] " << LibC::name() << "\n";
    std::cout << "[C++.ExeE] " << LibC::dependencies() << "\n";
}