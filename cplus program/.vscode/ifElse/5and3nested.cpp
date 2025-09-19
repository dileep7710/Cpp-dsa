#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"Number is divisible by 5 and 3 both";
        }
        else{
            cout<<"Not maching condition ";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}