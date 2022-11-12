#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int const left, int const mid, int const right)
{
    auto const array_one = mid - left + 1;      // max size of an array
    auto const array_two = right - mid;

    auto *left_array = new int[array_one];      // create duplicate array
    auto *right_array = new int[array_two];

    for(auto i=0; i<array_one; i++)                  // copy value from array
      left_array[i] = arr[left + i];

    for(auto j=0; j<array_two; j++)
      right_array[j] = arr[mid + 1 +j];

    auto index_left = 0;
    auto index_right = 0;
    int index_merge = 0;

    while(index_left < array_one || index_right < array_two)
    {
        if(left_array[index_left] <= right_array[index_right])
        {
            arr[index_merge] = left_array[index_left];
            index_left++;
            index_merge++;
        }

        else
        {
            arr[index_merge] = right_array[index_right];
            index_right++;
            index_merge++;
        }
    }

    while(index_left < array_one)
    {
        arr[index_merge] = left_array[index_left];
        index_left++;
        index_merge++;
    }

    while(index_right < array_two)
    {
        arr[index_merge] = right_array[index_right];
        index_right++;
        index_merge++;
    }

    delete[] left_array;
    delete[] right_array;
}

void merge_sort(int arr[], int const begin, int const end)
{
    if(begin >= end)
      return;

    auto mid = begin + end / 2;
    merge_sort(arr, begin, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void print(int arr[], int size)
{
    for(auto i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {12,11,13,5,6,7};
    auto size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    print(arr, size);

    merge_sort(arr, 0, size-1);

    cout << "\nSorted array is \n";
    print(arr, size);

    return 0;
}