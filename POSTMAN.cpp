#include <iostream>
#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
 
 int n,k,x,m;
 int lenA = 0,lenB=0;
vector< pair<int,int> > A(MAX),B(MAX);

bool compareA(const pair<int,int>&i,const pair<int,int>&j){
  return i.first > j.first;
}
bool compareB(const pair<int,int>&i,const pair<int,int>&j){
  return i.first < j.first;
}

void cbi() {
  cin >> n >> k;
  for(int i=0;i<n;i++) {
    cin >> x >> m;
    if(x > 0) A.at(lenA++) = make_pair(x, m);
    else B.at(lenB++) = make_pair(x, m);
  }
  sort(A.begin(),A.end(),compareA);
  sort(B.begin(),B.end(),compareB);
}

long long xuly(vector< pair<int,int> > C,int len,int k) {
    long long res = 0;
    int cur = 0;
    for(int i =0;i< len;i++){
      if(C.at(i).second > 0) {
        if(cur >= C.at(i).second){
          cur -= C.at(i).second;
        }else {
          C.at(i).second -= cur;
          int t = (C.at(i).second -1)/k +1;
          res += 2ll*abs(C.at(i).first)*t;
          cur = t*k - C.at(i).second;
        }
      }
    }
    return res;
}
 
int main()
{
  cbi();
  cout << xuly(A, lenA,k) + xuly(B,lenB,k);
}
