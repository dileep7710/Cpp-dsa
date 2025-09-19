// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of Array:-";
//     cin>>n;
//     int arr[i];

//     //input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=n-1;I++){
//         for(int j=i+1;j<=n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<"Duplicate value found";
//                 int flag = true;
//                  break;
//             }
//             if(flag==false){
//                 cout<<"No duplicate found:-";
//             }
//         }
//     }
// }

#include<iostream>
using namespace std;
bool duplicates (int arr[] , int n){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of Array:-";
    cin>>n;
    int arr[n];

    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    if(duplicates(arr,n))cout<<"Yes,duplicates exist.";
    else cout<<"No, duplicate don't exist";
}