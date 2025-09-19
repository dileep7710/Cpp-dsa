#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // cout<<"Good Morning"<<endl;
    // cout<<"Have a niceday"<<endl;
}
int main(){
//    Dileep(); // function calling
//    Dileep();
//    Dileep();
    starTriangle(4);
    starTriangle(5);
    starTriangle(6);
}