/*
 Austin Bergum
 C++ Fall 2022
 Due: September 14, 2022
 Lab Name: Lab 2 Exploring Output
 Description: This lab is designed to get you familiar with output to the command prompt using C++
 */

#include <string>
#include <iostream>
using namespace std;
int main ()
{
    const string m = "Monday          ";
    const string tues = "Tuesday         ";
    const string w = "Wednesday       ";
    const string thur = "Thursday        ";
    const string f = "Friday          ";
    const string art = "8:00 - 9:20 am        Photography";
    const string mat = "8:20 - 9:20 am        Engineering Problems 1";
    const string cis = "10:00 - 11:00 am      C++";
    const string phy = "2:30 - 3:30 pm        Classical Physics 1";
    const string phyl = "2:30 - 4:30 pm        Classical Physics 1 Lab";
    
    cout << m << art;
    cout << endl << m << cis;
    cout << endl << m << phy;
    cout << endl << endl << tues << mat;
    cout << endl << tues << cis;
    cout << endl << tues << phy;
    cout << endl << endl << w << art;
    cout << endl << w << cis;
    cout << endl << w << phyl;
    cout << endl << endl << thur << mat;
    cout << endl << thur << cis;
    cout << endl << thur << phy;
    cout << endl << endl << f << art;
    cout << endl << f << cis;
    cout << endl << f << phy << endl << endl;

}

