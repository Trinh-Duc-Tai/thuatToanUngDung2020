#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
long long xuly(int n) {
		vector<long long> a(n),L(n),R(n);
		stack<int> s;
		for (int i = 0;i < n;++i) {
			cin >> a[i];
		}
		for (int i = 0;i < n;i++) {
		    while(!s.empty() && a[s.top()] >= a[i]) {
		    	R[s.top()] = i;
		    	s.pop();
			} 
			L[i] = s.empty() ? -1 : s.top();
			s.push(i);
		}
		while(!s.empty()) {
			R[s.top()] = n;
			s.pop();
		}
		long long result = 0;
		long long temp = 0;
		for(int i=0;i<n;++i){
			temp = (R[i] - L[i] - 1)*a[i];
			result = max(result,temp);
		}
		return result;
}
 
int main()
{
	vector<long long> kq;
	while (true) {
		int n;
		cin >> n;
		if(n == 0) break;
		cout << xuly(n) << endl;
	}
}
