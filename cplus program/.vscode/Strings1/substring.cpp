#include<iostream>
#include<iostream>
using namespace std;
int main(){
    // string s = "Dileep";
    // if()
    // // s.substr(idx,len)
    // cout<<s.substr(2,3); // lee

    string str;
    cout<<"Enter a string :";
    cin>>str;
    //abcdefgh -> n=8
    int n = str.length();
    cout<<str.substr(n/2);
}