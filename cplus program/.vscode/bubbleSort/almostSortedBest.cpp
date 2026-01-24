#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    } // 2 4 7 9 8 - modified array
    // check if modified array is sorted or not
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag =  false;
            break;
        }
    } 
    if(flag==true) cout<<"Almost Sorted";
    else cout<<"Not almost sorted";
}