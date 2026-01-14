#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;

    string t = s;
    reverse(t.begin(),t.end());
    if(t==s) cout<<"Yes";
    else cout<<"No"; 
}