#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1st number ";
    int a;
    cin>>a;

    cout<<"Enter 2nd number ";
    int b;
    cin>>b;

    cout<<"Enter 3rd number ";
    int c;
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is largest";
    }

    if(b>a && b>c){
        cout<<b<<" is largest";
    }

    if(c>a && c>b){
        cout<<c<<" is largest";
    }

}