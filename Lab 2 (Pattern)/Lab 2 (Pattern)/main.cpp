/*
 Austin Bergum
 C++ Fall 2022
 Due: September 14, 2022
 Lab Name: Lab 2 Exploring Output
 Description: This lab is designed to get you familiar with output to the command prompt using C++
 */

#include <string>
#include <iostream>

int main ()
{
    const std:: string space = "    *   *   *   *";
    const std:: string star = "  *   *   *   *   ";
    
    std:: cout << space;
    std:: cout << std:: endl << star;
    std:: cout << std:: endl << space;
    std:: cout << std:: endl << star;
    std:: cout << std:: endl << space;
    std:: cout << std:: endl << star;
    std:: cout << std:: endl << space;
    std:: cout << std:: endl << star << std:: endl << std:: endl;
}

