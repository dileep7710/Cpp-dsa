#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXBYDXJK";
    string str = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    for(int i=0;i<str.length()-1;i++){
        // traverse
        for(int j=0;j<str.length()-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
     reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }

}