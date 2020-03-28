#include<iostream>
using namespace std;
//chuong trinh doi so nguyen sang so la ma
int main(){
	int n,dv,ch,tr;
	cout<<"Nhap so nguyen duong nho hon 1000 :\n";cin>>n;
	cout<<"So "<<n<<" doi sang so La Ma la:\n";
	tr = n/100;n = n%100;ch = n/10;dv = n%10;
	switch(tr){
		case 1:cout<<"C";break;
		case 2:cout<<"CC";break;
		case 3:cout<<"XXX";break;
		case 4:cout<<"XL";break;
		case 5:cout<<"L";break;
		case 6:cout<<"LX";break;
		case 7:cout<<"LXX";break;
		case 8:cout<<"LXXX";break;
		case 9:cout<<"XC";break;
	}
	switch(ch){
		case 1:cout<<"X";break;
		case 2:cout<<"XX";break;
		case 3:cout<<"XXX";break;
		case 4:cout<<"XL";break;
		case 5:cout<<"L";break;
		case 6:cout<<"LX";break;
		case 7:cout<<"LXX";break;
		case 8:cout<<"LXXX";break;
		case 9:cout<<"XC";break;
	}
	switch(dv){
		case 1:cout<<"I";break;
		case 2:cout<<"II";break;
		case 3:cout<<"III";break;
		case 4:cout<<"IV";break;
		case 5:cout<<"V";break;
		case 6:cout<<"VI";break;
		case 7:cout<<"VII";break;
		case 8:cout<<"VIII";break;
		case 9:cout<<"IX";break;
	}
	
	return 0;	
}
