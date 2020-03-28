#include<iostream>
using namespace std;
//ADDMOD

int a,b;
long long res;
long to = 1000000007;

int main(){
	cin>>a;
	cin>>b;
	res = (a%to+b%to)%to;
	cout<<res;
	return 0;
}
