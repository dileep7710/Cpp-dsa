#include<iostream>
using namespace std;
float circle_area(int radius){
    float circle_area = 3.14 * radius * radius;
    return circle_area;
}
int main(){
    int radius;
    cout<<"Enter a number:-";
    cin>>radius;
    cout<<circle_area(radius)<<endl;
} 