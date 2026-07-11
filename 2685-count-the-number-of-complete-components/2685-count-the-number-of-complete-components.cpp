class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> temp(n);
        for(const auto& edge: edges)
        {
            temp[edge[0]].push_back(edge[1]);
            temp[edge[1]].push_back(edge[0]);
        }
        vector<bool> node(n, false);
        int Count = 0;

        for(int i = 0 ;i < n; i++)
        {
            if(!node[i])
            {
                vector<int> comp;
                queue<int> q;

                q.push(i);
                node[i] = true;

                while(!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    comp.push_back(u);

                    for(auto x : temp[u])
                    {
                        if(!node[x])
                        {
                            node[x] = true;
                            q.push(x);
                        }
                    }
                }
                int NumVertices = comp.size();
                bool bComplete = true;
                for(int y : comp)
                {
                    if(temp[y].size() != NumVertices -1){
                        bComplete = false;
                        break;
                    }
                }
                if(bComplete)
                    Count++;
            } 
        }
        return Count;
    }
};