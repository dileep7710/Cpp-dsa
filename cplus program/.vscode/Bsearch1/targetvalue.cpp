#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,7,6,4,2,1};
    int n = 6;
    int target = 5;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        } // decreasing order
        else if(arr[mid]>target)
            lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<"Element does not exist"<<endl;
    else  cout<<"Element exits"<<endl;
    
}