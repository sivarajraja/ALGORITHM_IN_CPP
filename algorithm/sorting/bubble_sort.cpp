#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size)
{
    int i,j;
    bool is_swapped;

    for(i=0; i<size; i++)
    {
        is_swapped = false;
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                is_swapped = true;
            }
        }

        if(is_swapped == false)
           break;

    }
}

void print(int arr[], int size)
{
    int i;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;

    int arr[] = {9,2,6,1,3,8,5,4,7};
    size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);
    print(arr, size);

    return 0;
}