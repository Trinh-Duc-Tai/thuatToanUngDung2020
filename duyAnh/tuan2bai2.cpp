#include<iostream>
using namespace std;

int main(){
	int t,t100,t20,t5;
	cout<<"Nhap vao so tien t = ";
	cin>>t;
	t100 = t/100;
	t-=100*t100;
	t20=t/20;
	t-=t20*20;
	t5=t/5;
	t-=5*t5;
	cout<<"So to cac loai menh gia la:\n";
	cout<<"Loai 100 : "<<t100<<" to\n";
	cout<<"Loai 20 : "<<t20<<" to\n";
	cout<<"Loai 5 : "<<t5<<" to\n";
	cout<<"Loai 1 : "<<t<<" to\n";
	cout<<"Tong so to cac loai la: "<<t+t100+t20+t5<<" to";
	
	return 0;
}
