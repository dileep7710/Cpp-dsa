// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array:-";
//     cin>>n;
//     int arr[n];

//     //input
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int min=arr[0];
//     for(int i=0;i<=n-1;i++){
//         if(min>arr[i]) 
//         min = arr[i];
//     }
//     cout<<min;
// }   

#include<iostream>
#include<climits>
using namespace std; 
int minimum(int a, int b){
    if(a<b)return a;
    return b;
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
     int mini = INT_MAX;
     for(int i=0;i<=n-1;i++){
        mini = min(arr[i],mini);
     }
     cout<<"The minimum number is : "<<mini;
}