#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,4,3};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag = false;
                swap(arr[j],arr[j+1]);
                
            }
        }
        if(flag==true)
        break;
    }
    cout<<endl;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}