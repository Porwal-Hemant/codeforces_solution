#include<iostream>
#include<unordered_map>
#include<list>

using namespace std ; 

class graph 
{
  public:

   unordered_map<int , list<int> >adj ; 

  void addedge(int u , int v , bool direction )  
  {
          adj[u].push_back(v) ;
// isko aise samjho ke u index saare vertices dheekha raha hai jo add kiye huye hai 
// direction 0 means edge of directed graph and this means we have to account the possibility of having edges from both sides 

          if ( direction == 0 ) 
          {
          
          adj[v].push_back(u) ;

          }
   }

  // now writing print function for the graph

    void printadjlist()
    {
         for ( auto i : adj ) 
         {
             cout << i.first << "->"  ;
             // cout << i.second kar sakte the agar mera i.second list or vector nahi hota toh 
             // i.first directly unordered map ke first element seah map ho jayga hence 2 and 3 daalne par 2 print hoga idhar  
             // i.second contains all the vertices connected to i.first
          for ( auto j : i.second )  
          {
             cout << j << " " ;
             
          } 
             cout << endl ;
         }
    }

};

int main()
{ 
      int n ;
      cout << " enter number of nodes - " << endl ; 
      cin>> n ;
      int m ;
      cout << " enter number of edges - " << endl ; 
      cin>> m ;
    // now taking all the edges 

    graph g ; 

    for ( int i = 0 ; i <  m ; i++  )
    {     
          int u ; 
          int v ; 
    // what is this u and v 
    // u is phele edge and v is dusre edge 
    // creating an undirected graph 
        cin >> u >> v ;
        g.addedge(u , v , 0 ) ;           

    }

 g.printadjlist() ;
 return  0 ; 
}


