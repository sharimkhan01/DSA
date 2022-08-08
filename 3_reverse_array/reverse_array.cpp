#include <iostream>
using namespace std;

// Problem : reverse all the elements of a given array
void reverseArray(int arr[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 45, 60, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    // Printing the output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}