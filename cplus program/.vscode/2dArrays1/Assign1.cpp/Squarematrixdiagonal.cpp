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
    cout<<endl;
    // print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
         }
         cout<<endl; 
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if((i==j) or (i+j==n-1))
          cout<<a[i][j]<<" ";
          else cout<<" ";
        }
         cout<<endl;
    }
    

}