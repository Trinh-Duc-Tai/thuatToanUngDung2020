#include<iostream>
using namespace std;
//EXPMOD

double a,b;
long to = 1000000007;
long long mu(int x, int soMu){
	long long t = 1;
	for(int k = 0;k<soMu;k++){
		t = t * x%to;
	}
	return t;
}
long res;
int main(){
	cin>>a;
	cin>>b;
	cout<<mu(a,b);
	return 0;
}      
