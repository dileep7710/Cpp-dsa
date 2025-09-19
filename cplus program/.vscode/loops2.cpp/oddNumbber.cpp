#include<iostream>
using namespace std;
int main(){
   // cout<<"Enter a number : ";
    int i;
    for(int i = 1;i<=10;i++){
         if(i%2==0) continue;
            cout<<i<<endl;
    }
}