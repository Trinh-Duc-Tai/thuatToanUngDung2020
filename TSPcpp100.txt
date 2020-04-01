#include <iostream>
 
using namespace std;
 
#define MAX 21
int minC,n,m,best,visited[MAX],x[MAX],c[MAX][MAX];
 
void  backtrack(int i,int sum){
	if (i==n+1 && c[x[n]][1]>=0){
		if (sum+c[x[n]][1] < best)
			best=sum+c[x[n]][1];
			return;
	}
	for (int j=2;j<=n;j++){
		if (!visited[j]&&c[x[i-1]][j]>=0){
			if (sum+c[x[i -1]][j]+minC*(n-i)<best){
				visited[j]=1;
				x[i]=j;
				backtrack(i+1,sum+c[x[i-1]][j]);
				visited[j]=0;
			}
		}
	}
}
 
 
int main(){
	minC=10000000;
	cin>>n>>m;
	for(int i=0;i<21;i++){
		for(int j=0;j<21;j++){
			c[i][j]=-1;
		}
	}
	for(int v=0;v<m;v++){
		int i,j;	cin>>i>>j; cin>>c[i][j];
		if(minC>c[i][j]) minC=c[i][j];
	}
	x[1]=1;
	for(int k=0;k<21;k++){
		visited[k]=0;
	}
	best=10000000;
	backtrack(2,0);
	cout<<best;
	return 0;
}