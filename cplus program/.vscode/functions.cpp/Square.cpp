#include<iostream>
using namespace std;
void square(int n){
     for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
     }
}
int main(){
    int n;
    cin>>n;
    square(n);
}
// int squares(int i){
//     return i*i;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<squares(i)<<" ";
//     }
// }