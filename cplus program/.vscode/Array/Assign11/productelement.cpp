// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter size of element:-";
//     cin>>n;
//     int arr[n];

//     //input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int product = 1;
//     for(int i=0;i<=n-1;i++){
//         product*=arr[i];
//     }
//     cout<<product;
// }

#include<iostream>
using namespace std;
int productofArray(int arr[], int n){
    int product =1;
    for(int i=0;i<=n-1;i++){
        product *=arr[i];
    } 
    return product;
}
int main(){
    int n;
    cout<<"enter size of element:-";
    cin>>n;
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<productofArray(arr,n);
}