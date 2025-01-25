<int>>>> dp(n,vector<vector<vector<int>>>(m,vector<vector<int>>(p,vector<int>(q,-1))));
    cout<< f(n-1,m-1,p-1,q-1,a,b,c,d,dp)<<endl;