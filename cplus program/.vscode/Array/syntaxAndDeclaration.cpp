// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7] = {1,5,9,4,6,3,1};
//     cout<<arr[6];
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7] = {1,5,9,4,6,3,0};
//     for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[7];
    // input
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }

    // output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" "; 
    }
}