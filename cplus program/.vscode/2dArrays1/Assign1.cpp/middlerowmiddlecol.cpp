#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of row/col:-";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //cout<<a[i][j];
            if(i == n/2 or j == n/2)
                cout<<a[i][j]<<" ";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
}