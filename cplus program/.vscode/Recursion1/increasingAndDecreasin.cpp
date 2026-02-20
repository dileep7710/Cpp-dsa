#include<iostream>
using namespace std;
void printIncDec(int i, int n){
    if(i>n) return;
    // print(n-1);
    cout<<i<<endl;
    printIncDec(i+1,n);
    if(i>1) cout<<i-1<<endl;
    
}
int main(){
    printIncDec(1, 5);
}
