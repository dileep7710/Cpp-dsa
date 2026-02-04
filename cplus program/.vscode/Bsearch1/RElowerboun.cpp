#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,5,6,8,9};
    int n = 7;
    int x = 9;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
         else if(arr[mid]<x)
            lo = mid+1;
            else // arr[mid]>x
            hi = mid-1;
    }
    if(flag==false)
    cout<<arr[hi];
}