#include <iostream>

using namespace std;

// Given an array of n integers. Find the minimum distance between any two occurrences of the minimum integer in the array.
// Input: Array A[0..n -1] of numbers.
// Output: Minimum distance between two of its elements.
// Reference(s): https://www.geeksforgeeks.org/distance-two-closest-minimum/
int main()
{
    int arrayOfNumbers[] = { 5, 1, 2, 3, 4, 1, 2, 1 };
    int totalNumberOfElements = sizeof(arrayOfNumbers) / sizeof(arrayOfNumbers[0]);
    int minimumDistance = INT_MAX;

    for (int i = 0; i < totalNumberOfElements; i++)
    {
        if (arrayOfNumbers[i] == *min_element(arrayOfNumbers, arrayOfNumbers + totalNumberOfElements))
        {
            for (int j = i + 1; j < totalNumberOfElements; j++)
            {
                if (arrayOfNumbers[j] == *min_element(arrayOfNumbers, arrayOfNumbers + totalNumberOfElements))
                {
                    minimumDistance = min(minimumDistance, j - i);
                }
            }
        }
    }

    cout << minimumDistance << endl;
}