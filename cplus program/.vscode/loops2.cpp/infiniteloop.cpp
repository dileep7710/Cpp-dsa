// #include<iostream>
// using namespace std;
// int main(){
//     while('a'<'b'){
//         cout<<"malayalam is a palidrone"<<endl; //segmentation fault, infinite loop
//         //break;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y){
//             continue;
//         }
//         else{
//             cout<< x <<" "<< y <<endl;
//         }

//     }
// } 
// #include<iostream>
// using namespace std;
// int main(){
//     int x=4,y=0,z=0;
//     while(x>=0){
//         if(x==y)
//         break;
//         else
//         cout<<x<<" "<<y<<endl;
//         x--;
//         y++;
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
   int t = 10;
    while(t/=2){
        cout<<"Hello"<<endl;
    }
}