#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low - 1;
    int piv = high;
    
    for(int j=low; j<=high-1; j++)
    {
        if(arr[j] < arr[piv])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[high]);
    return i;
}

void quicksort(int arr[], int low, int high)
{

    if(low<high)
    {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);
    }
}

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "before Sorted array: \n"; 
    print(arr, size); 

    quicksort(arr, 0, size - 1); 

    cout << "\nafter Sorted array: \n"; 
    print(arr, size); 

    return 0;
}