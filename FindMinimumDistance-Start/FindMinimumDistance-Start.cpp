#include <iostream>

using namespace std;

// Given an array of n integers, find the minimum distance between any two occurrences of the minimum integer in the array.
// Input: Array A[0..n -1] of numbers.
// Output: Minimum distance between two of its elements.
// Reference(s): https://www.geeksforgeeks.org/distance-two-closest-minimum/
int main()
{
    int arrayOfNumbers[] = { 5, 1, 2, 3, 4, 1, 2, 1 };

    // Get the size of the array. The sizeof() operator returns the size of a type in bytes. To find out how many
    // elements an array has, divide the size of the array by the size of the data type it.
    int totalNumberOfElements = sizeof(arrayOfNumbers) / sizeof(int);
    int minimumDistance = INT_MAX;

    for (int i = 0; i < totalNumberOfElements ; i++)
    {
        for (int j = 0; j < totalNumberOfElements ; j++)
        {
            if ((i != j) and ((arrayOfNumbers[i] - arrayOfNumbers[j]) < minimumDistance))
            {
                cout << "Current minimum distance is: " << minimumDistance << endl;
                cout << "arrayOfNumbers[i]: " << arrayOfNumbers[i] << " arrayOfNumbers[j]: " << arrayOfNumbers[j] << endl;
                minimumDistance = arrayOfNumbers[i] - arrayOfNumbers[j];
                cout << "New minimum distance is: " << minimumDistance << endl;
            }
        }
    }

    cout << "Minimum distance: " << minimumDistance << endl;
}