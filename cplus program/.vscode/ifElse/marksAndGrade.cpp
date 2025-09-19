#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"Excellent";
    // }
    // if(n>=81 && n<=90){
    //     cout<<"Very good";
    // } 
    // if(n>=71 && n<=80){
    //     cout<<"Good";
    // }
    // if(n>=61 && n<=70){
    //     cout<<"Can do beter";
    // }
    // if(n>=40 && n<=50){
    //     cout<<"Below Average";
    // }
    // if(n<40){
    //     cout<<"Fails";
    // }
    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"Very good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"can do better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Fail";
    }
}