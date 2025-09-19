#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"Enter a  1st number ";
    cin>>a;
    cout<<"Enter a 2nd number ";
    cin>>b;
    cout<<"Enter a 3rd number ";
    cin>>c;
    if(a>b){
        if(a>c){
             cout<<a<<" is greatest";
        }
        else{ // c > a , a > b ->c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{ // b > a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{ //c > b > a
            cout<<c<<" is greatest";
        }
    }
}