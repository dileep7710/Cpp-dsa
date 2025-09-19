// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter a 1st side: ";
//     cin>>a;
//     cout<<"Enter a 2nd side: ";
//     cin>>b;
//     cout<<"Enter a 3rd side: ";
//     cin>>c;
//     if((a+b>c) && (b+c>a) && (c+a>b)){
//         cout<<a<<","<<b<<","<<c<<" can be the sides of a triangle";
//     }
//     else{
//         cout<<"Invalid Triangle";
//     }
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter a 1st number : ";
//     cin>>x;

//     cout<<"Enter a 2nd number : ";
//     cin>>y;
//     if(x>y){
//         cout<<x <<" "<<"is greatest";
//     }
//     else{
//         cout<<y<<" "<<"is greatest";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter a radius : ";
//     cin>>r;
    
//     float area = 3.14*r*r;
//     float circumferrence = 2*3.14*r;

//     if(area>circumferrence){
//         cout<<"Area is greatest : ";
//     }
//     else{
//         cout<<"Circumferrence is greatest or equal to the area :";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter a year : ";
//     cin>>year;

//     if(year % 400 == 0){
//         cout<<"yes a leap year";
//     }
//     else if(year % 100==0){
//         cout<<"No";
//     }
//     else if (year %4==0){
//         cout<<"yes";
//     }
//     else {
//         cout<<"No";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int l,b;
//     cout<<"Enter a length : ";
//     cin>>l;
//     cout<<"Enter a breath : ";
//     cin>>b;
//     int area  = l*b;
//     int perimeter = 2*(l*b);
//     if(area>perimeter){
//         cout<<"area is greater than perimeter";
//     }
//     else if( area == perimeter){
//         cout<<"area is equal to perimeter";
//     }
//     else{ 
//         cout<<"Perimeter is greater than area ";
//     }
// }
 

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a==b && a==c){
//         cout<<"Triangle is equilateral";
//     }
//     else if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
//         cout<<"Triangle is isosceles";
//     }
//     else {
//         cout<<"Triangle is scalene";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cout<<"Enter a 1st number : ";
//     cin>>a;

//     cout<<"Enter a 2nd number : ";
//     cin>>b;

//     cout<<"Enter a 3rd number : ";
//     cin>>c;

//     if(a<=b && a<=c){
//         cout<<" a is least marks";
//     }
//     else if(b<=a && b<=c){
//         cout<<" b is least marks";
//     }
//     else{  
//         cout<<" c is least marks";
//     }


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter number x and y";
//     cin>>x>>y;

//     if(x==0 && y==0){
//         cout<<"point is on  origin : ";
//     }
 //     else if(x==0){
//         cout<<"point is on y-axis";
//     }
//     else if(y==0){
//         cout<<"point is on x-axis";
//     }
//     else {
//         cout<<"point lines somewhere else";
//     }
// }

// 

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"Character is alphabet : ";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Character is digit : ";
    }
    else {
        cout<<"character is special character : ";
    }
}