#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Three digit Number";
    }
    else{
        cout<<"Not a three digigt Number";
    }

}