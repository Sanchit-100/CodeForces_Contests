sort(arr.begin(), arr.end());
        int ct_taken=0;
        int zero_slots=0;
        int sum = 0;

        for(auto it: arr) sum+=it;
        
        for(int i=0;i<n;i++){
            if(arr.size()*(arr[i]-ct_taken)>=k) break;
            else{
                k-=arr.size()*(arr[i]-ct_taken);
                zero_slots+=1;