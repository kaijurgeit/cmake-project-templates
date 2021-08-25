/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibA/LibA.h"

int main()
{
    std::cout << "[C++.ExeF] main.cpp" << "\n";
    std::cout << "[C++.ExeF] " << name() << "\n";
    std::cout << "[C++.ExeF] " << LibA::name() << "\n";
}