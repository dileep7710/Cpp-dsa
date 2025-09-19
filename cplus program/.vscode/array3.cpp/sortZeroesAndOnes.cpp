#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int> &v){
    int n = v.size();
    int no0 = 0;
    int noz = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else no0++;

    }
    // filling elements
    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
void sort01m2(vector<int>&v){
    int n = v.size();
     int i=0;
     int j =n-1;
     while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(v[i]==1 && v[j]==0)
        // int temp = v[i];
        // v[i] = v[j];
        // v[j] = temp;
        v[i]=0;
        v[j]=1;
        i++;
        j--;
     }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0); 
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // kaam
    sort01m2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);

//     display(v);
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//      }
//      cout<<endl; 
// }