// #include<iostream>
// using namespace std;
// int main(){
//     int marks[6];
//     // input
//     for(int i=0;i<=5;i++){
//         cin>>marks[i];
//     }

//     for(int i=0;i<=5;i++){
//         if(marks[i]<35)
//         cout<<i<<" ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    vector<int> marks(n);
    cout << "Enter marks for each student:\n";
    
    // input
    for(int i = 0; i < n; i++){
        cin >> marks[i];
    }
    cout << "Indices of students with marks less than 35: ";
    for(int i = 0; i < n; i++){
        if(marks[i] < 35)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}