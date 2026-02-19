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
#include<iostream>
using namespace std;
void sum1toN(int sum, int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n,n-1);

}
int main(){
    sum1toN(0,5);
}