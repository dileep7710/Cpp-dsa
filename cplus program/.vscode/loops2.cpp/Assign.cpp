#include<iostream>
using namespace std;
int main(){
    // while('1'<'2')
    // cout<<"In while loop"<<endl;
    // int t=10;
    // while(t/=2){
    //     cout<<"hello"<<endl;
    // }

    // int x = 10,y = 0;
    // while(x>=y){
    //     x--;
    //     y++;
    //     cout<<x<<" "<<y<<endl;
    // }
//     int n;
//     cin>>n;
//     // int Digits = 0;
//    int sum = 0;
//    while(n>0){
//      int digits = n % 10;
//      if( digits%2 == 0)
//     sum = sum+digits;
//     n = n/10; 
//    }
//    cout<<sum;


    // int n;
    // cout<<"Enter a number";
    // cin>>n;
    // int totalnumber = 0;
    // int sum = 0;
    // while(n>0){
    //     n=n%10;
    //     sum = totalnumber + n;
    //     n/10;
    // }
    //  cout<<sum;
    // }
    // int r = 0;
    // int sum = 0;
    // while(n>0){
    //     n= n%10;
    //     sum = sum+n;
    //     n = n/10;
    // }
    // cout<<sum;
 //}  

 int n;
 cin>>n;
 int r = 0;
 while(n>0){
    r = r*10;
    r +=(n%10)
    n/=10;
 }
 cout<<r+n;
}


