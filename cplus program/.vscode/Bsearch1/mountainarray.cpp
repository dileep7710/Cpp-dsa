#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,0};
    int lo = 0;
    int hi = sizeof(arr) / sizeof(arr[0]);
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                flag = true;
                cout<<mid;

                break;
            }
            else if(arr[mid]<arr[mid+1])
            lo = mid+1;
            else hi = mid-1;
        }
        if(flag==false)
        cout<<"not valid";
}