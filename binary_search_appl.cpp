//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int findClosest( int n, int k,int arr[]) 
    {   
        if ( k < 0 )  { return arr[0] ;  } 
        
        int start_index = 0 ; 
        int end_index  = n - 1 ; 
        
        while( start_index <=  end_index ) 
        {   
            
            int mid = start_index + end_index / 2  ; 
            
            if ( start_index  == end_index ) { return arr[mid] ; }
            // 
        
            
            if( ( mid != 0 && ( abs(arr[mid] - k) <= abs( arr[mid-1] - k  )) ) && ( mid != n - 1 && ( abs( arr[mid] - k ) < abs( arr[mid + 1] - k  )))  ) 
            {
                 return arr[mid] ; 
            } 
            
            else if( mid != n - 1 && ( abs( arr[mid] - k ) >= abs( arr[mid+1] - k ) ) ) 
            {
                start_index =  mid+1  ;  // ageah vale hee possibility honge 
            }    
            
            else if( mid != 0 && ( abs( arr[mid-1] - k ) == abs( arr[mid] - k ) ) )
            {
                start_index  = mid  ; //  possibility hai ke ageah useah bara element ho jo yeah difference bana raha ho
            }
            
            else if ( (abs(arr[mid] - k) > abs( arr[mid-1] - k  )) ) 
            {
                end_index = mid - 1 ; 
            }
            
            else if ( abs( arr[mid] - k ) > abs( arr[mid + 1] - k  ) ) 
            {
                start_index =  mid + 1 ; 
            } 
            
        }
        
        return -1 ; 
    } 
};


//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends