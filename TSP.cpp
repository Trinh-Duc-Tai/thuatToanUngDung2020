#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
#define MAX 100
 
int n; //So thanh pho
int c[MAX][MAX]; //Ma tran trong so giua cac thanh pho
int f; //Do dai quang duong tich luy trong qua trinh duyet
int f_best; //Quang duong ngan nhat tim thay
int x_best[MAX]; // luu hanh trinh ngan nhat
 
int x[MAX]; //luu cac thanh pho da di qua
int appear[MAX]; // 0 co nghia la thanh pho chua xuat hien
                 // 1 co nghia la thanh pho da xuat hien
 
int cmin = 100000000;
 
void input(){
	cin >> n;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			cin >> c[i][j];
			if(i !=j && cmin > c[i][j]) cmin = c[i][j];
		}
	}
} 
 
int check(int v, int k){
	if(appear[v] ==1) return 0;
	return 1;
}
 
void solution(){
	if((f + c[x[n]][0]) < f_best){
		f_best = f + c[x[n]][0];
		for(int i = 0; i <= n; i++){
		x_best[i] = x[i];
		}
	}
}
 
int TRY(int k){
	for(int v =1 ; v <=n; v++){
		if(check(v, k)){
			x[k] = v;
			f += c[x[k-1]][x[k]];
			appear[v] = 1; //danh dau v da xuat hien
			if(k == n) solution();
			else{
				if((f + cmin*(n-k+1)) < f_best)
				TRY(k+1);
			}
			f -= c[x[k-1]][x[k]];
			appear[v] = 0;
		}
	}
}
 
void solve(){
	f = 0;
	f_best = 10000000;
	for(int i = 0; i <= n; i++) appear[i] = 0;
	x[0] = 0;
	TRY(1);
	cout << f_best;
}
 
void printRoute(){
	for(int i = 0; i <= n; i++)
		cout << x_best[i];
}
 
int main(){
	input();
	solve();
}
