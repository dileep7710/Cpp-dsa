#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,4,3,2,5};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=n-1;j>=1+i;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
}
