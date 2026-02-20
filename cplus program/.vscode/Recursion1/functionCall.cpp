// #include<iostream>
// using namespace  std;
// void fun(int n){
//     if(n==0) return;
//     cout<<"Hello pw"<<endl;
//     fun(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     fun(n);
// }

// #include<iostream>
// using namespace std;
// void gun(int n){
//     if(n==0) return;
//     cout<<"Raghav Sir"<<endl;
//     gun(n-1);
// }
// int main(){
//     gun(3);
// }

//

// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return; // base case
//     cout<<n<<endl; // kaam
//     fun(n-1); // call
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     fun(n);
// }

// #include<iostream>
// using namespace std;
// void saca (int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     saca(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
//     saca(1,n);
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
//     // base case
//     if(n==1 || n==0) return 1;
//     // kaam and call
//     int ans = n*fact(n-1);
//     // return
//     return ans;
// }
// int main(){
//     cout<<fact(5);

// }
// #include<iostream>
// using namespace std;
// void sum1toN(int sum, int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum+n,n-1);

// }
// int main(){
//     sum1toN(0,5);
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
// int power(int a , int b){
//     if(a==0 && b==0){
//         cout<<"0 raised to the power 0 is not defined";
//         return -100;
//     }
//     if(a==0) return 0;
//      int p = 1;
//     for(int i=1;i<=b;i++){
//         p*=a;
//     }
//     return p;
    
// }

int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"enter base: ";
    cin>>a;

    int b;
    cout<<"enter exponent :";
    cin>>b;


    cout<<a<<" raised to the power "<<b<< " is "<<pow(a,b);
}