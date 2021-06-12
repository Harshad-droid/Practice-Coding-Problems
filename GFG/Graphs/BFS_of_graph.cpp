///BFS of graph
///https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/?category[]=Graph&category[]=Graph&problemStatus=solved&page=1&query=category[]GraphproblemStatussolvedpage1category[]Graph

Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.


Example 1:

Input:

Output: 0 1 2 3 4
Explanation: 
0 is connected to 1 , 2 , 3.
2 is connected to 4.
so starting from 0, it will go to 1 then 2
then 3.After this 2 to 4, thus bfs will be
0 1 2 3 4.


Code:

vector<int>bfsOfGraph(int v, vector<int> adj[])
	{   vector<int> z;
	    bool visited[v];int s=0;
	    //memset(visited,-1,sizeof(visited));
	    for(int i=0;i<v;i++)
	       visited[i]=false;
	    queue<int> q;
	    visited[s]=true;
	    q.push(s);
	    while(q.empty()==false){
	        int u=q.front();
	        q.pop();
	        z.push_back(u);
	        for(int v: adj[u]){
	            if(visited[v]==false){
	                visited[v]=true;
	                q.push(v);
	            }
	        }
	    }
	    return z;// Code here
	}




