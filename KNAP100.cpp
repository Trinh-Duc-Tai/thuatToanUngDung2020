#include<iostream>

using namespace std;
int soDoVat, trongLuongTui;
int main(){
	cin>>soDoVat;
	cin>>trongLuongTui;
	int kg[32];
	int price[32];
	for(int i = 1;i<= soDoVat;i++){
		cin>>kg[i];
		cin>>price[i];
	}
	int b[32][32];
	for(int i = 0;i<32;i++){
		for(int j = 0;j<32;j++){
			b[i][j] = 0;
		}
	}
	for(int i = 1;i<=soDoVat;i++){
		for(int j = 0;j<=trongLuongTui;j++){
			b[i][j] = b[i-1][j];
			if (j >= kg[i] && b[i][j] < (b[i - 1][j - kg[i]] + price[i])) {
				b[i][j] = b[i - 1][j - kg[i]] + price[i];
			}
		}
	}
	cout<<b[soDoVat][trongLuongTui]<<endl;
	return 0;
}