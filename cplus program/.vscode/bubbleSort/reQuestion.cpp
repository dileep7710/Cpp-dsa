#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    bool flag = true; // sorted hai
    for(int i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            swap(arr[i],arr[i+1]);
            break;
        }
    } 
    if(flag==true)
    cout<<"sorted";
    else 
    cout<<not"sorted";
}