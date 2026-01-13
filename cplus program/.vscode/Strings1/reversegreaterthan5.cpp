#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Dileep";
    cout<<s<<endl;
    int n = s.length();
    //reverse position 2 to 5
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
}