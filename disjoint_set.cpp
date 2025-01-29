#include <bits/stdc++.h>
using namespace std;

class DisjointSet 
{
vector<int> rank, parent, size; 
public: 
// constructor 
// In C++, a constructor is a special member function that has the same name as the class. Its purpose is to initialize objects of that class. If you change the constructor name to something different from the class name, the compiler will not recognize it as a constructor. As a result, you will encounter a compilation error because the compiler will not find a valid constructor to call when you try to create an object of that class.
    DisjointSet(int n) 
    {
// 1 based or zero based dono cover
        rank.resize(n+1, 0); 
// Increase the size of the vector to 8, default initializing new elements to 0
        parent.resize(n+1);
        size.resize(n+1); 
        for(int i = 0;i<=n;i++) 
        {
            parent[i] = i; 
            size[i] = 1; 
        }
    }

// path compression for mapping parents ka parents to every node 
    int findUPar(int node) 
    {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]);   // parent[node] update ho jayga har vertex add hone par 
    }
// union by rank 
// kon kiseh attach hoga voh rank of parent of a component par depend karega
 
    void unionByRank(int u, int v) 
    {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 

        if(rank[ulp_u] < rank[ulp_v]) 
        {
            parent[ulp_u] = ulp_v; 
// smaller one attaching to the larger one will not lead to increment in size of anyone           
        }
        else if(rank[ulp_v] < rank[ulp_u]) 
        {
            parent[ulp_v] = ulp_u; 
        }
        else 
        {
// jab dono same hai tab kise ek ke toh height barege na 
// jispar tum attach kar rahe ho uske height bar jayenge           
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

// kon kiseh attach hoga voh component ke size par depend karega
    void unionBySize(int u, int v) 
    {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(size[ulp_u] < size[ulp_v]) 
        {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else 
        {  
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
        }
    }
}; 

int main() 
{   // yeah koe alag class hai jo initialise kiya gaya hai 
  // gfg , leetcode har jagah class DisjointSet ke jagah solution likha ja raha hai    
    DisjointSet ds(7);
    // ds.unionBySize(1, 2); 
    // ds.unionBySize(2, 3); 
    // ds.unionBySize(4, 5); 
    // ds.unionBySize(6, 7); 
    // ds.unionBySize(5, 6); 

//  UNION BY RANK 

    ds.unionByRank(1, 2); 
    ds.unionByRank(2, 3); 
    ds.unionByRank(4, 5); 
    ds.unionByRank(6, 7); 
    ds.unionByRank(5, 6); 

    // if 3 and 7 same or not 
    if(ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 

    ds.unionByRank(3, 7); 

    if(ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 
	return 0;
}











