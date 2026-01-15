#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "Dileep is a student";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}