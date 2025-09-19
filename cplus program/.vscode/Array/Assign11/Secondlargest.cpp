 #include<iostream>
 #include<climits>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter size of array :-";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max1<arr[i]) max1 = arr[i]; 
    }
    int max2 =INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max1 && max2<arr[i])max2=arr[i];
    }
    cout<<max1<<endl;
    cout<<max2;
 }