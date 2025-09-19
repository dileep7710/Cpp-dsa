// #include<iostream>
// using namespace std;
// int main(){
//     int n,r,result;
//     cout<<"Enter the n"<<endl;
//     cin>>n;
//     cout<<"Enter the r"<<endl;
//     cin>>r;
//     int nfact = 1; // n!
//     for(int i=2;i<=n;i++){
//         nfact *= i;
//     }
//     int rfact = 1; // r!
//     for(int i=2;i<=r;i++){
//         rfact *=i;
//     }
//     int nrfact = 1;
//     for(int i=2;i<=n-r;i++){
//         nrfact *= i;
//     }
//     result = (nfact/(rfact*nrfact));
//     cout<<result<<endl; 

// }
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i=2;i<=x;i++){
//         f *= i; 
//     }
//     return f;
// }
// int main(){
//     int n;
//     cout<<"enter n : "; 
//     cin>>n;
//     int r;
//     cout<<"enter r : ";
//     cin>>r;
//     int nfact  = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     int ncr = nfact/(rfact*nrfact);
//     cout<<ncr;

// }
// #include<iostream>
// using namespace std;
// int fact(int x){
//     int f = 1;
//     for(int i=2;i<=x;i++){
//         f *= i;
//     }
//     return f;
// }
// int combination(int n, int r){
//     int ncr = fact(n)/(fact(r)*fact(n-r));
//     return ncr;
// }
// int permutation(int n,int r){
//     int npr = fact(n)/fact(n-r);
//     return npr;
// }
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int r;
//     cout<<"enter r : ";
//     cin>>r;
//     int ncr = combination(n,r);
//     int npr = permutation(n,r);
//     cout<<ncr<<endl<<npr;
// }
#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

 

    int ncr = fact(n) / (fact(r) * fact(n - r));
    cout << "nCr = " << ncr << endl;

    return 0;
}