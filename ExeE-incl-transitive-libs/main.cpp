/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibC/LibC.h"

int main()
{
    std::cout << "[C++.ExeD] main.cpp" << "\n";
    std::cout << "[C++.ExeD] " << name() << "\n";
    std::cout << "[C++.ExeD] " << LibC::name() << "\n";
}