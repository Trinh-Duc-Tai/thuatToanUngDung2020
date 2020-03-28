#include<iostream>
using namespace std;
//bai 3: cho 2 so nguyen cho truoc, tinh tong, hieu, tich, thuong cua 2 so do
int main(){
	int a,b;
	cout<<"Nhap vao so a = ";
	cin>>a;
	cout<<"Nhap vao so b = ";
	cin>>b;
	cout<<"Tong cua "<<a<<" va "<<b<<" la "<<a+b<<endl;
	cout<<"Hieu cua "<<a<<" va "<<b<<" la "<<a-b<<endl;
	cout<<"Tich cua "<<a<<" va "<<b<<" la "<<a*b<<endl;
	if(b==0){
		cout<<"Khong ton tai phep chia vi so chia = 0";
	}else{
		cout<<"Thuong cua "<<a<<" va "<<b<<" la "<<a/b<<endl;
	}
	return 0;
}
