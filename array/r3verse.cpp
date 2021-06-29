#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //lets reverse it without using space;
    int start=0;
    int end=9;
    int mid=(start+end)/2;
    while(mid>0)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        mid--;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}

