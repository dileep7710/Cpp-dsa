#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "raghav";
    cout<<str<<endl;
    //getline(cin,str);
   reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}

