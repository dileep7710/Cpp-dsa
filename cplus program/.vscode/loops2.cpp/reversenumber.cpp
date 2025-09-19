#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int lastDigits = 0;
    int r = 0;
    while(n>0){
        lastDigits = n%10;
        r = r*10;
        r = r+lastDigits;
        n = n/10;
    }
    cout<<r;
}