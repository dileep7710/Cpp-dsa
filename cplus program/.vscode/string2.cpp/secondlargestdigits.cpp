#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
   char max1 = '!', max2 = '!';
   for(int i=0;i<str.size();i++){
        if(max1 < str[i]){
            max2 = max1;
             max1 = str[i]; 
        }
        else if(max2 < str[i] and max1 != str[i]) max2 = str[i];
   }
   if(max2 == '!') cout<<"No 2nd largest number";
   else cout <<max2<<endl;

}