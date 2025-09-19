#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size: ";
    cin>>n;
    int arr[n];

    // input
    for(int i=0;i<n-1 ;i++){
        cin>>arr[i];
    }
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1])
        break;
    }
    if(i == n-1)cout<<"the array is sorted.";
    else cout<<"The array is unsorted.";
}