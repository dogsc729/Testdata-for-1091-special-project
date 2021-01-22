// **************************************************************************
//  File       [main.cpp]
//  Author     [Shu-Yu Lin]
//  Synopsis   [The main program of 2020 fall Algorithm PA3]
// **************************************************************************

#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <new>
#include <ctime>
#include <map>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    fstream fout1, fout2, fout3;
    string weighttype;
    string kerneltype;
    cin >> weighttype >> kerneltype;
    fout1.open(argv[0], ios::out);
    fout2.open(argv[1], ios::out);
    fout3.open(argv[2], ios::out);
    if (weighttype == "INT8")
    {
    }
    if (weighttype == "INT4")
    {
    }
    if (kerneltype == "FD4")
    {
    }
    if (kerneltype == "INT4")
    {
    }
    fout1.close();
    fout2.close();
    fout3.close();
    return 0;
}