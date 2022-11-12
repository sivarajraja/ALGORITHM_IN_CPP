#include<bits/stdc++.h>
using namespace std;

int jump_search(int arr[], int n, int x)
{
    // to find the square root for jumping 
    int step = sqrt(n);
    int i,j,last;

    for(i=0; i<n; i+=step)
    {
        if(arr[i]==x)
          return i;

        else
        {
            if(arr[i]<x){
              last = i;
              cout<<last;
            }

            else
              goto shiva;
        }

    }
    shiva:

     for(j=last; j<n; j++)
     {
        if(arr[j]==x)
        return j;
     }
}

int main()
{
    int arr[] = {'1','2','4','6','8','5','7','3'};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;

    int index = jump_search(arr, n, x);

    (index == -1)? 
    cout<<"element is not present in array\n" :
    cout<<"the element "<<x<<" at position "<<index;

    return 0;
}