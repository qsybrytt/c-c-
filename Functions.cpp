/*
Lab #3: Find Max and Min
author: Bryan Tejeda
version: 0.1 10/03/2026
*/

#include <iostream>
using namespace std;

// Function declarations
float FindMax(float InputNum[5]);
float FindMin(float InputNum[5]);
void DisplayResult(char CharCommand, float MyMax, float MyMin);

int main()
{
    float InputNum[5];
    float MyMax;
    float MyMin;
    char UserCommand;

    // Read 5 float numbers from the user
    cout << "Please enter 5 float numbers:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> InputNum[i];
    }

    // Call functions to find max and min
    MyMax = FindMax(InputNum);
    MyMin = FindMin(InputNum);

    // Ask user what result to display
    cout << endl;
    cout << "Enter 9 to display the maximum number." << endl;
    cout << "Enter 0 to display the minimum number." << endl;
    cout << "Enter your command: ";
    cin >> UserCommand;

    // Display result
    DisplayResult(UserCommand, MyMax, MyMin);

    return 0;
}

// Function to find maximum value
float FindMax(float InputNum[5])
{
    float Max = InputNum[0];

    for (int i = 1; i < 5; i++)
    {
        if (InputNum[i] > Max)
        {
            Max = InputNum[i];
        }
    }

    return Max;
}

// Function to find minimum value
float FindMin(float InputNum[5])
{
    float Min = InputNum[0];

    for (int i = 1; i < 5; i++)
    {
        if (InputNum[i] < Min)
        {
            Min = InputNum[i];
        }
    }

    return Min;
}

// Function to display the requested result
void DisplayResult(char CharCommand, float MyMax, float MyMin)
{
    switch (CharCommand)
    {
        case '0':
            cout << "The minimum number is: " << MyMin << endl;
            break;

        case '9':
            cout << "The maximum number is: " << MyMax << endl;
            break;

        default:
            cout << "Warning: Invalid command!" << endl;
    }
}