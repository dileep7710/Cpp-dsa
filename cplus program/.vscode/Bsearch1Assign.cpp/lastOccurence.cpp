#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4,4,5,9};
    int n = 9;
    int x =3;
    int lo = 0;
    int hi = n-1;
    bool flag = false;  // element is not in array
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(mid==n-1){
               flag = true;
                cout<<mid;
                break;
            }
             else if(arr[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{ // arr[mid+1] ==   x;
                lo = mid+1;
            }
        }
        else if(arr[mid]<x) lo =  mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<-1;
}