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

#include<iostream>
using namespace std;
void saca (int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    saca(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    saca(1,n);
}