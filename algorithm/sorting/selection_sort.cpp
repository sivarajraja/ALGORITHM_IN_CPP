#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size)
{
    int i,j,min_index;

    for(i=0; i<size-1; i++)
    {
        min_index = i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    
    }

}

void print(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}


int main()
{
    int arr[] = {2,7,3,8,4,9,5,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    print(arr, n);

    return 0;
}