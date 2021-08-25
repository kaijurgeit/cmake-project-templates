/*
* Single File Application
*/
#include <iostream>
#include "FunA.h"
#include "LibB/LibB.h"

int main()
{
    std::cout << "[C++.ExeG] main.cpp" << "\n";
    std::cout << "[C++.ExeG] " << name() << "\n";
    std::cout << "[C++.ExeG] " << LibB::name() << "\n";
}