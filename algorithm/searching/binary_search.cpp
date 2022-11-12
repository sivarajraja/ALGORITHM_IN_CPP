#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int l, int r, int n)
{
    int mid = (l - r)/2;

    if(arr[mid] == n)
      return mid;

    if(arr[mid] < n)
      return binary_search(arr, mid+1, r, n);

    if(arr[mid] > n)
      return binary_search(arr, l, mid-1, n);

    
    return -1;
}

int main()
{
    int arr[] = {'2','6','8','7','9','4','3'};
    int r = sizeof(arr);
    int l = 0;
    int n = 9;

    int result = binary_search(arr, l, r, n);

    (result == -1)? cout<<"the value is not present!!!" : cout<<"the value is present in "<<result;

    return 0;
}