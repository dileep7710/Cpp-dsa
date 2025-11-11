#include<iostream>
using namespace std;
int main(){ 
    int m;
    cout<<"rows:-";
    cin>>m;
    
    int n;
    cout<<"coloumns:-";
    cin>>n;
    int a[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int b[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
           a[i][j] = a[i][j]+b[i][j];
        }
    }
    // the resultant matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}