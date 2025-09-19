#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(12);
    v.push_back(5);
    v.push_back(9);
    v.push_back(11);
    v.push_back(12);
    v.push_back(9);
    // 7 elements ->size = 7, 0-6;
    int x=12;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx = i;
    // }
    // cout<<idx;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        } 
    }
    cout<<idx;
}
