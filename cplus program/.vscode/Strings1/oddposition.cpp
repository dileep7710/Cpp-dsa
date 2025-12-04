#include<iostream>
#include<string>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter size";
    // cin>>n;
     
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(i%2!=0)
        s[i]='#';
    }
    cout<<s<<" ";

}