/*
Lab #4a: Dynamic Array of Floats
author: Bryan Tejeda
version: 0.1 10/23/2026
*/
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

float FindAverage(const float nums[], int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) sum += nums[i];
    return sum / size;
}
float FindMax(const float nums[], int size) {
    float result = nums[0];
    for (int i = 1; i < size; ++i) if (nums[i] > result) result = nums[i];
    return result;
}
float FindMin(const float nums[], int size) {
    float result = nums[0];
    for (int i = 1; i < size; ++i) if (nums[i] < result) result = nums[i];
    return result;
}
int main() {
    vector<float> input;
    float number;
    cout << "Enter float numbers (9999999 to finish):\n";
    while (true) {
        cout << "Number " << input.size() + 1 << ": ";
        if (!(cin >> number)) {
            cout << "Invalid input. Please enter a number.\n";
            return 1;
        }
        if (number == 9999999.0f) break;
        input.push_back(number);
    }
    const int count = static_cast<int>(input.size());
    cout << "\nValid numbers entered: " << count << '\n';
    if (count == 0) {
        cout << "No numbers to process.\n";
        return 0;
    }
    // Allocate a dynamic array and copy the collected values.
    float* NumStartPtr = new float[count];
    for (int i = 0; i < count; ++i) NumStartPtr[i] = input[i];
    cout << "Entered numbers and memory addresses:\n";
    for (int i = 0; i < count; ++i)
        cout << NumStartPtr[i] << " at " << static_cast<void*>(NumStartPtr + i) << '\n';
    cout << "Average: " << FindAverage(NumStartPtr, count) << '\n';
    cout << "Maximum: " << FindMax(NumStartPtr, count) << '\n';
    cout << "Minimum: " << FindMin(NumStartPtr, count) << '\n';
    delete[] NumStartPtr;
    return 0;
}
