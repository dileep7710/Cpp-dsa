#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :-";
    cin>>n;
    int lastDigits = 0;
    int sum = 0;
    while(n>0){
        lastDigits = n%10;
        sum = sum + lastDigits;
        n/=10;
    }
    cout<<sum;
}