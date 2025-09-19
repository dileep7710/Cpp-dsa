// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i,int j, vector<int> &v){
//     while(i<=j){
//         int temp =v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return;
// }

// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(4);
//     v.push_back(8);
//     display(v);
//     int k=20;
//     //rotate
//     int n = v.size(); // n = 7
//     if(k>n) k = k%n;
//     reversePart(0,n-k-1,v);
//     reversePart(n-k,n-1,v);
//     reversePart(0,n-1,v);
//     display(v);

// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:-";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    cout<<"Maximum value: ";
    for(int i=0;i<=n-1;i++){
        if(max < arr[i]) max = arr[i];
    }
    cout<<max;
}