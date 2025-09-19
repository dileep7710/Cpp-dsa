#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"The number is divisible by 3 and 5";
    }
    else{
        cout<<"The number is Not divisible by 3 and 5";
    }
}