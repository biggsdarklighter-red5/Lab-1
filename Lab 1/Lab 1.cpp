// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>


using namespace std; 


int main()
{
    std::string name = "Timothy Joseph Downes";
    std::cout << "The string is: " << name << "\n";

    std::transform(name.begin(), name.end(), name.begin(), ::toupper);
    std::cout << "The new string is: " << name << "\n";
}

