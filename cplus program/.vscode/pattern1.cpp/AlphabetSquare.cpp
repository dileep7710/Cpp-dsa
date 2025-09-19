#include<iostream>
using namespace std;
int main(){
    int n;
    float ch;
    cout<<"No of rows : ";
    cin>>n;
    int Ascii = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}