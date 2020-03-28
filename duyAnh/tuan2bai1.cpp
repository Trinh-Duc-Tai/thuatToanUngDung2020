#include<iostream>
using namespace std;
//bai 1: thuc hien phep nhan 2 so nguyen  duong co 3 chu so tu ban phim
int main(){
	int a,b;
	cout<<"Nhap vao so bi nhan co 3 chu so a = ";
	cin>>a;
	cout<<"Nhap vao so nhan co 3 chu so b = ";
	cin>>b;
	int dv = b%10;
	int chuc = b%100/10;
	int tram = b/100;
	cout<<"\nMo phong phep nhan tay\n\n";
	cout<<"\t      "<<a<<"\n";
	cout<<"\t  x   "<<b<<"\n";
	cout<<"\t  ---------\n";
	cout<<"\t      "<<a*dv<<"\n";
	cout<<"\t     "<<a*chuc<<"\n";
	cout<<"\t    "<<a*tram<<"\n";
	cout<<"\t  ---------\n";
	cout<<"\t    "<<a*b;
	
	return 0;
}
