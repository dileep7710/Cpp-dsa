// #include<iostream>
// using namespace std;
// void sum1toN(int sum, int n){
//     if(n==0) {
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum+n,n-1);
// }
// int main(){
//     sum1toN(0,10);
// }

// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }

// int main(){
//     cout<<sum(5);
// }

#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;
    cout<<a<< "raised to the power"<<b<<" is"<<power(a,b);
}