#include<iostream>
#include<string>
#include<algorithm>
// #include<vector>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X')
        str.push_back(s[i]);
    }
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length()-1+i;j++){
            if(str[j]<str[j+1])
            swap(str[j],str[j+1]);
        }
    }
    // cout<<str;

    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }

}