// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str = "Raghav Garg";
//     string s = "";
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='a') s+= str[i];
//     }
//     cout<<s;
// }


#include<iostream>
#include<string>

using namespace std;
void removeChar(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='p') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);

}
int main(){
    string str = "physics wallah";
    removeChar("", str,0);
}