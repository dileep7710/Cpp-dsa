#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no oh the row / columns";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in the same matrix
    for(int i=0;i<m;i++){ // rows
        for(int j=i+1;j<m;j++){ // col
            // swapping of i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp; 
        }
    }
    // printing matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}