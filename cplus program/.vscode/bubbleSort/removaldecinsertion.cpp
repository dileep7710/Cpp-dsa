#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "AZYZXBYDXJK";
    string str= " ";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<endl;
    for(int i=1;i<str.size();i++){
        int j=i;
        while(j>=1 && str[j]<str[j-1]){
            swap(str[j],str[j-1]);
            j--;
        }
    }
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}