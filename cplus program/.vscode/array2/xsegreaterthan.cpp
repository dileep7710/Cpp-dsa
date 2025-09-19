#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
}  
 cout<<endl;
}
int main(){
    int x;
    cout<<"Enter x value";
    cin>>x;
    vector<int>v;
    // int n;
    // cout<<"element size";
    // cin>>n;
   // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[n];
    
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    display(v);

    // count the number of elements strictly greater than x in the given array. 

    int count = 0;
    for(int i=0;i<v.size();i++){
        if(x<v[i])
        count ++;
    }
    cout<<count;
}