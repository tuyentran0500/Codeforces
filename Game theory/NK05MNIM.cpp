/*input

*/
#include <bits/stdc++.h>
#define up(i,a,b) for(int (i) = (a);(i)<=(b);++(i))
#define down(i,b,a) for(int (i) = (b);i>=(a);--i)
#define debug(x) cerr << (x) << '\n';
#define bits(x,i) ((x >> i) & 1)
#define mid ((l+r)/2)
#define pr pair<int,int>
using namespace std;
const int N = 105;
int a[N];
int n,t;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--){
		cin >> n;
		int xorSum = 0, check = 0;
		for(int i=1;i<=n;++i){
			cin >> a[i];
			if (a[i] != 1) check = 1;
			xorSum ^= a[i];
		}
		// if (!check) cout << (n % 2 ? -1 : 1) << '\n';
		cout << (xorSum == 1 ? 1 : -1) << '\n';
	}
}