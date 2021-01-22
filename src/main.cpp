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
    string imagetype;
    string kerneltype;
    vector<vector<int>> image(500);
    vector<vector<int>> kernel(500);
    vector<int> output = {};
    cin >> imagetype >> kerneltype;
    if (imagetype == "INT8")
    {
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                image[i].push_back(rand() % 256 - 128);
            }
        }
        fout1.open("outputs/mem_img_N_500.mem", ios::out);
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fout1 << image[i][j] << " ";
            }
            fout1 << endl;
        }
    }
    if (imagetype == "INT4")
    {
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int num = rand() % 16 - 8;
                image[i].push_back(num);
            }
        }
        fout1.open("outputs/mem_img_N_500.mem", ios::out);
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fout1 << image[i][j] << " ";
            }
            fout1 << endl;
        }
    }
    if (kerneltype == "FD4")
    {
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int num1 = rand() % 16;
                int num2;
                switch (num1)
                {
                case 0:
                    num2 = 1;
                    break;
                case 1:
                    num2 = 2;
                    break;
                case 2:
                    num2 = 4;
                    break;
                case 3:
                    num2 = 8;
                    break;
                case 4:
                    num2 = 16;
                    break;
                case 5:
                    num2 = 32;
                    break;
                case 6:
                    num2 = 64;
                    break;
                case 7:
                    num2 = 0;
                    break;
                case 8:
                    num2 = -1;
                    break;
                case 9:
                    num2 = -2;
                    break;
                case 10:
                    num2 = -4;
                    break;
                case 11:
                    num2 = -8;
                    break;
                case 12:
                    num2 = -16;
                    break;
                case 13:
                    num2 = -32;
                    break;
                case 14:
                    num2 = -64;
                    break;
                case 15:
                    num2 = 0;
                    break;
                }
                kernel[i].push_back(num2);
            }
        }
        fout2.open("outputs/mem_wgt_N_500.mem", ios::out);
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fout2 << kernel[i][j] << " ";
            }
            fout2 << endl;
        }
    }
    if (kerneltype == "INT4")
    {
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                kernel[i].push_back(rand() % 16 - 8);
            }
        }
        fout2.open("outputs/mem_wgt_N_500.mem", ios::out);
        for (int i = 0; i < 500; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                fout2 << kernel[i][j] << " ";
            }
            fout2 << endl;
        }
    }
    fout3.open("outputs/mem_out_N_500.mem", ios::out);
    for (int i = 0; i < 498; i++)
    {
        int rowindex = i + 3;
        int sum = 0;
        for (int j = 0; j < rowindex; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + kernel[j][k] * image[j][k];
            }
        }
        output.push_back(sum);
        fout3 << output[i] << endl;
    }
    fout1.close();
    fout2.close();
    fout3.close();
    return 0;
}