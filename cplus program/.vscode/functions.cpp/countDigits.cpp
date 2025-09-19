#include<iostream>
using namespace std;
int countDigitSquare(int n){
    int count = 0;
    while(n){
        count ++;
        n/=10;
    }
    return count*count;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigitSquare(n)<<endl;
}