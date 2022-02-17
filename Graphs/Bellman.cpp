int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> dist(n,INT_MAX);
	    dist[0]=0;
	    for(int i=0;i<n-1;i++)
	    {   
	        for(auto e:edges)
	        {
	            int u=e[0];
	            int v=e[1];
	            int w=e[2];
	            if(dist[u]+w< dist[v] and dist[u]!=INT_MAX){
	            dist[v]=min(dist[v],w+dist[u]);}
	        }
	    }
	    for(auto it:edges)
	    {
	        if((dist[it[0]]+it[2]) < dist[it[1]])
	        {
	            return 1;
	        }
	    }
	    return 0;
	}
