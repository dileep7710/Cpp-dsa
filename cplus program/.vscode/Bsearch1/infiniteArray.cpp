#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,7,10,12,15,18};
    int target = 15;
    int lo = 0;
    int hi = 1;
    while(arr[hi]<target){
        lo = hi;
        hi = 2*hi;
    }
    cout<<lo<<" "<<hi<<endl;
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        }
        else if(arr[mid]<target){
             lo = mid+1;
        }
        else hi = mid-1;
    }
    if(flag=true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}