        cout<<ele<<" ";
    }
    cout<<endl;
    // selection sort
    for(int i=1;i<n-1;i++){
        int min = INT_MAX;
        midx = -1;
    // minimum element in Box
        for(int j=0;j<n;i++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }

        }
        swap(arr[i],arr[mindx]);
    }