#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size)
{
    int i,j;

    for(i=1; i<size; i++)
    {
        for(j=i; j>=0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;

            }

            else
              break;
        }
    }
}

void print(int arr[], int size)
{
    int i;

    cout<<"the value after sorted "<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,3,4,3,1,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);
    print(arr, size);

    return 0;
}