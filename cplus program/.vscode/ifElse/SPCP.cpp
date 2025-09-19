#include<iostream>
using namespace std;
int maina(){
    cout<<"Enter a Cost price";
    int cp;
    cin>>cp;
    cout<<"Enter a Selling prince";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp; 
    }
    if(cp>sp){
        cout<<"Loss="<<cp-sp;
    }
    if(sp==cp){
        cout<<"NO profit No loss";
    }
}