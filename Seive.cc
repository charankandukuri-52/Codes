#include<bits/stdc++.h>
using namespace std;
inline void debugMode() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

freopen("Error.txt", "w", stderr);

#endif
}

int main() {
	debugMode();
	int n; cin>>n;
	cout << n << endl;
	vector<bool> primes(n+1,true);
	primes[0] = false;
	primes[1] = false;
	for(int i=2;i*i<=n; i++) {
		if(primes[i]) {
			for(int j=i*i;j<=n;j+=i) {
				primes[j] = false;
			}
		}
	}
	vector<int>v;
	for(int i=0;i<size(primes);i++) {
		if(primes[i]) {
			cout << i << " ";
		}
	}
	for(auto &it:v) {
		cout << &it << " ";
	}
	cout << endl;
}