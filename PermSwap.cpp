#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve(){
    
	int n;
	cin>>n;
 
	vector<int> arr(n+1);
	for(int i=1; i<=n; i++)
		cin>>arr[i];
 
	int ans = 0;
	for(int i=1; i<=n; i++)
		ans = __gcd(abs(arr[i]-i), ans);
	cout<<ans<<endl;
 
}

int32_t main() 
{

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

