#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abdc";
    string t = "aydc";
    cout<<s.compare(t);

    // 0 if s==t
    // +ve if s>t
    // -ve if s<t
    // for(int i=0;i<s.size();i++){
    //     if(s==t){
    //         cout<<true;
    //     }
    //     else 
    //     cout<<false;
    //     break;
    // }
}