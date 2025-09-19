#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target:";
    cin>>x;
    vector<int>v;
    int n; 
    cout<<"Enter array size :";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            
        }
       
    }
    
}