#include<iostream>
using namespace std;

template<typename T>
void sort_fun(T arr[], T n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<typename T>
void parray(T arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << "\t";
    }
}

int main()
{
    int arr[] = {19, 15, 27, 95, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting array=";
    parray(arr, size);

    sort_fun(arr, size);

    cout << "\nAfter sorting array=";
    parray(arr, size);

   
}
