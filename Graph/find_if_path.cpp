
    unordered_map <int,vector<int>> adjlist;
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) 
    {
        add(edges);
        vector <bool> visited(n,false);
        
        dfs(adjlist,visited,start);
        return visited[end]==true?true:false;
        
        
        
    }
    void add(vector <vector <int>> & edges)
    {
        for(auto &i:edges)
        {
            adjlist[i[0]].push_back(i[1]);
            adjlist[i[1]].push_back(i[0]);
        }
    }
    
    void dfs(unordered_map<int, vector<int> > &adj,vector<bool> &visited,int v)
    {
        
        visited[v]=true;
        for(auto i:adj[v])
        {
            if(!visited[i])
            {
                dfs(adj,visited,i);
            }
        }
    }
