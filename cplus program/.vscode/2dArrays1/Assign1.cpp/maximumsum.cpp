#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of row :-";
    cin>>m;
    int n;
    cout<<"Enter the number of coloumn:-";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
    int maximum = INT_MIN;
    int index = -1;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        if(maximum <= sum){
            maximum = sum;
            index = i;
        }
    }
    cout<<"maximum row:-"<<index+1<<endl;
}