//wap to find the largest three elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"element of size";
    cin>>n;
    int arr[n];

    // input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    for(int i=0;i<n;i++){
        if(max1<arr[i]) max1=arr[i];
    }
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max1 && max2 < arr[i])max2 = arr[i];
    }
    int max3 = INT_MIN;
    for(int i=0;i<n;i++){
       if( arr[i]!=max1 && arr[i]!=max2 && max3 < arr[i])max3 = arr[i];
    }
    cout<<max1<<" ";
    cout<<max2<<" ";
    cout<<max3;
}
