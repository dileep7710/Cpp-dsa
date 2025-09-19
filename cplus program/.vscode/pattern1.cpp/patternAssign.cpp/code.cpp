// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             for(int j=1;j<=i;j++){
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=1;j<=i;j++){
//                 cout<<char(j+64)<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0)cout<<j<<" ";
//             else cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     //upper triangle
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     // for lower triangle
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=n-i;j++)cout<<"* ";
//         cout<<endl;
//     }
// }  

#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=m;i++)cout<<"* ";
cout<<endl;

for(int i=2;i<=n-1;i++){
    cout<<"* ";
    // for spaces
    for(int j=1;j<=m-2;j++)cout<<" ";
    cout<<"* ";
    cout<<endl;
}
 for(int i=1;i<=m;i++)cout<<"* ";
}