    unordered_map<pair<int,int>,vector<int>> mp;
        unordered_map<int,int> ct;
        for(int j=0;j<n-2;j++){
            mp[{arr[j],arr[j+1]}].push_back(arr[j+2]);
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            int n=(it->second).size();
            int curr=0;
            for(auto j:it->second){
                ct[j]++;
            }
            for(auto j:it->second){
                curr+=(it->second.size())-ct[j];
            }
            ans+=curr/2;
        }

