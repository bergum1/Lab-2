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
    const std:: string m = "Monday          ";
    const std:: string tues = "Tuesday         ";
    const std:: string w = "Wednesday       ";
    const std:: string thur = "Thursday        ";
    const std:: string f = "Friday          ";
    const std:: string art = "8:00 - 9:20 am        Photography";
    const std:: string mat = "8:20 - 9:20 am        Engineering Problems 1";
    const std:: string cis = "10:00 - 11:00 am      C++";
    const std:: string phy = "2:30 - 3:30 pm        Classical Physics 1";
    const std:: string phyl = "2:30 - 4:30 pm        Classical Physics 1 Lab";
    
    std:: cout << m << art;
    std:: cout << std:: endl << m << cis;
    std:: cout << std:: endl << m << phy;
    std:: cout << std:: endl << std:: endl << tues << mat;
    std:: cout << std:: endl << tues << cis;
    std:: cout << std:: endl << tues << phy;
    std:: cout << std:: endl << std:: endl << w << art;
    std:: cout << std:: endl << w << cis;
    std:: cout << std:: endl << w << phyl;
    std:: cout << std:: endl << std:: endl << thur << mat;
    std:: cout << std:: endl << thur << cis;
    std:: cout << std:: endl << thur << phy;
    std:: cout << std:: endl << std:: endl << f << art;
    std:: cout << std:: endl << f << cis;
    std:: cout << std:: endl << f << phy << std:: endl << std:: endl;
}

