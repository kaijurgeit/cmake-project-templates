/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibC/LibC.h"

int main()
{
    std::cout << "[C++.ExeH] main.cpp" << "\n";
    std::cout << "[C++.ExeH] " << name() << "\n";
    std::cout << "[C++.ExeH] " << LibC::name() << "\n";
    std::cout << "[C++.ExeH] " << LibC::dependencies() << "\n";
}