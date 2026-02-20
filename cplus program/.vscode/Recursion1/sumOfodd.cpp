#include<iostream>
using namespace std;
void sumOfOdd(int a, int b , int &sum){
    if(a > b) return;

    if(a == b){
        if(a%2 != 0) sum += a;
        return ;

    }
    if(a%2!=0){
     sum+=a;
     sumOfOdd(a + 2, b , sum);

    }
    else {
        sumOfOdd(a + 1, b , sum);
    }
    
}
int main(){
    int a,b;
    cin>>a>>b;

    if(a>b) swap(a,b);
    int sum = 0; 
    sumOfOdd(a,b,sum);
    cout<<sum<<endl;

}