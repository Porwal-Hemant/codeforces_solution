#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve(){
	int n;
	cin>>n;
 
	int a=1;
	for(ll i=2; i*i<=n; i++){
		if(n%i==0){
			a = n/i;
            // n will be equal to greater than ( )
			break;
		}
	}
	cout<<a<<" "<<n-a<<endl ; 
}
 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}


