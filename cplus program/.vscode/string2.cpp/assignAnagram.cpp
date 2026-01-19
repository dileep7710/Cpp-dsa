#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"Enter a first string:-";
    getline(cin,str1);
    sort(str1.begin(),str1.end());

    string str2;
    cout<<"Enter a second string:-";
    getline(cin,str2);
    sort(str2.begin(),str2.end());
    if(str1==str2) cout<<"It is anagram";
    else cout<<"It is not anagram";
    

}