#include<iostream>
#include<unordered_map>
#include<list>
#include<vector> 
#include<queue>
#include<set>


void prepareAdjList( unordered_map<int , list<int>>&adjList , vector<pair<int, int>> edges)
{
   for ( int i = 0  ; i < edges.size() ; i++ ) 
   {
      int u = edges[i].first ; 
      int v  = edges[i].second  ; 

      adjList[u].push_back(v) ; 
      adjList[v].push_back(u) ;
   }
}



vector<int>BFS(int NoOfNodes , vector<pair<int, int>> edges ) 
{
    unordered_map<int , list<int> >adjList ;
    vector<int>ans  ; 
    unordered_map<int , bool>visited  ; 
    

    prepareAdjList( adjList , edges ) ;
}






int main()
{   


     



    return  0 ; 
}