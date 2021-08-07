/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibA/LibA.h"

int main()
{
    std::cout << "[C++.ExeC] main.cpp" << "\n";
    std::cout << "[C++.ExeC] " << name() << "\n";
    std::cout << "[C++.ExeC] " << LibA::name() << "\n";
}