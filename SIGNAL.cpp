#include<iostream>
using namespace std;
//SIGNAL
//test
//10 5
//3 5 4 7 2 5 4 6 9 8
using namespace std;

int n,b;
int timMax(int start, int end, int mang[]){
	int ok = 0;
	for(int i = start;i<=end;i++){
		if(ok<mang[i]){
			ok = mang[i];
		}
	}
	return ok;
}

int main(){
	cin>>n;
	cin>>b;
	int a[n];
	for(int i = 0;i<n;i++){cin>>a[i];}
	int maxTrai,maxPhai;
	bool catDuoc = false;
	int res = 0;
	if(n<=1){
		cout<<-1;
	}else{
		for(int viTriCat = 1;viTriCat<n-1;viTriCat++){ 
		maxTrai = timMax(0,viTriCat,a);// tu 0 den = vi tri cat
		maxPhai = timMax(viTriCat+1,n-1,a); //tu vi tri cat+1 den phan tu cuoi
//		cout<<maxTrai<<" "<<maxPhai<<endl;
		if(maxPhai>=b&&maxTrai>=b){
			int vcl = maxPhai-a[viTriCat+1]+maxTrai-a[viTriCat+1];
			if(res<vcl){
				res = vcl;
			}
			catDuoc = true;
		}
	}
	if(catDuoc){
		cout<<res;
	}else{
		cout<<-1;
	}
	}
	
	
	return 0;
}

