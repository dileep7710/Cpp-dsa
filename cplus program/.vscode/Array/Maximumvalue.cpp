#include<iostream>
//#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of element :-";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // maximum value
    int max = arr[0];5
      //int max = INT_MIN;
    cout<<"maximum value:-";
    for(int i=0; i<=n-1;i++){
        if(max <arr[i])
            max = arr[i];
    }
    cout<<max;
}