#include <iostream>
using namespace std;

int array_minimum(int arr[], int size);
int array_maximum(int arr[], int size);

int main()
{
    // initializing the array
    int size, minimum, maximum;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // swapping maximum and minimum and print the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == array_maximum(arr, size))
        {
            cout << array_minimum(arr, size) << " ";
        }
        else if (arr[i] == array_minimum(arr, size))
        {
            cout << array_maximum(arr, size) << " ";
        }
        else
            cout << arr[i] << " ";
    }

    return 0;
}

int array_minimum(int arr[], int size)
{
    int minimum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}
int array_maximum(int arr[], int size)
{
    int maximum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}