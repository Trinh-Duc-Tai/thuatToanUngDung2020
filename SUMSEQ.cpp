#include<iostream>
using namespace std;
//SUMSEQ
//test
//3
//18663 2391 9035

int a[1000001];
int n;
long sum = 0;
long to = 1000000007;
int main(){
	cin>>n;
	sum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		sum=sum%to;
	}
	
	cout<<sum;
	return 0;
}
