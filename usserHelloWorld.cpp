/*
Lab #1: hello world user input times
author: Bryan Tejeda
version: 0.1 9/25/2026
*/


#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter the number of times to display Hello World: ";
    cin >> number;

    cout << "\nDisplaying Hello World " << number << " times:" << endl;

    for (int i = 0; i < number; i++)
    {
        cout << "Hello World!" << endl;
    }

    return 0;
}