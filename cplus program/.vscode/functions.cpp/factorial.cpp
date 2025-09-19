// #include<iostream>
// using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i=2;i<=n;i++){
//         fact *= i;
//     }
//     return fact;

// }
// int main(){
//     int n;
//     cout<<"enter a number :-";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<fact(i)<<endl;
//        // int fact = 1;
//         // for(int j=2;j<=i;j++){
//         //     fact*=j;
//        // }
//         //cout<<fact<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:-"; 
    cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=i;j++){
             fact *= i;
             cout<<fact<<endl;
        //}
    }
}
