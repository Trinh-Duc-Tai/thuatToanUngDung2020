#include<iostream>
using namespace std;
//bai 1: nhap vao 3 so a, b, c roi in ra theo thu tu tang dan
int main(){
	int a,b,c;
	cout<<"Nhap vao 3 so a, b,c\n";
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	int t[3];
	t[0] = a;
	t[1] = b;
	t[2] = c;
	for(int i=2;i>0;i--){
		for(int j = 0;j<i;j++){
			if(t[i]<t[j]){
				int temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
	cout<<"Sap xep "<<a<<" "<<b<<" "<<c<<" theo thu tu tang dan la:\n";
	cout<<t[0]<<" "<<t[1]<<" "<<t[2];
	return 0;
}
