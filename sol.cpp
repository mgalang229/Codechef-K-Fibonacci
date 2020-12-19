#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	int md=1000000007;
	n%=md;
	vector<int> v(n+1);
	if(n<=k) {
		cout << 1 << "\n";
		return 0;
	}
	for(int i=0; i<=k; ++i)
		v[i]=1;
	int res=k;
	for(int i=k+1; i<=n; ++i) {
		v[i]=res;
		res=(((res-v[i-k])%md)+v[i])%md;
	}
	cout << v[n] << "\n";
}
