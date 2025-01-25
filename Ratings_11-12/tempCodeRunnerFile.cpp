hile(low<high){
            int mid=(low+high)/2;
            if(check(mid,prefix,arr)){
                low=mid;