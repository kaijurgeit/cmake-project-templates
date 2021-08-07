/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibB/LibB.h"

int main()
{
    std::cout << "[C++.ExeD] main.cpp" << "\n";
    std::cout << "[C++.ExeD] " << name() << "\n";
    std::cout << "[C++.ExeD] " << LibB::name() << "\n";
}