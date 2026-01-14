#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // for(int i=0;i<=n;i++){
    //     if(i%2!=0)
    //     s[i] ='#'; 
    // }
    //  cout<<s;
    for(int i=0;i<=n;i+=2)
    s[i]='#';
    cout<<s;
}
