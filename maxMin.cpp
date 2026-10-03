/*
Lab #2: max and min values in an array
author: Bryan Tejeda
version: 0.1 10/03/2026
*/

#include <iostream>
using namespace std;

int main()
{
    // Array with 5 float numbers
    float MyArray[5] = {12.5, 7.3, 25.8, 3.6, 18.2};

    // Start max and min with the first number
    float maxNumber = MyArray[0];
    float minNumber = MyArray[0];

    // Find max and min using only ONE for loop
    for (int i = 1; i < 5; i++)
    {
        if (MyArray[i] > maxNumber)
        {
            maxNumber = MyArray[i];
        }
        else if (MyArray[i] < minNumber)
        {
            minNumber = MyArray[i];
        }
    }

    char choice;

    cout << "The array contains 5 float numbers." << endl;
    cout << "Type 9 to display the maximum number." << endl;
    cout << "Type 0 to display the minimum number." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == '9')
    {
        cout << "The maximum number is: " << maxNumber << endl;
    }
    else if (choice == '0')
    {
        cout << "The minimum number is: " << minNumber << endl;
    }
    else
    {
        cout << "Warning: Invalid input!" << endl;
    }

    return 0;
}