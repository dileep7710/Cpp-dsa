#include<iostream>
#include<algorithm>
using namespace std;
int pow(int x ,int n){
    if(n==1) return x;
    if(n%2==0){
        int ans = pow(x,n/2);
        return ans*ans;
    }
    // else (n%2!=0);
    else{
         int ans = pow(x,n/2)*x; 
        return ans*ans;
    }
       
}
int main(){
    cout<<pow(3,4);
}