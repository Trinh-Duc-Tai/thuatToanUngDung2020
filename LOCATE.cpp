#include <iostream>
#include<vector>
using namespace std;
#define NUMBER 1000
#define MAXD 2001

typedef struct ToaDo {
    int x;
    int y;
}ToaDo;

int xuly(int L, int C ) {
    int temp=0;
    int count = 0;
    int D[MAXD][MAXD];
    vector<ToaDo> A;
     vector<ToaDo> B;
    for(int i = 0;i<MAXD;i++) {
        for(int j=0;j<MAXD;j++){
            D[i][j] = 0;
        }
    }
          for(int i= 0;i<L;i++) {
              for(int j = 0;j<C;j++) {
                  cin >> temp;
                  ToaDo d1;
                   d1.x = i;
                   d1.y = j;
                  if(temp == 1) {
                      A.push_back(d1);
                  }
              }
          }
          for(int i= 0;i<L;i++) {
                 for(int j = 0;j<C;j++) {
                   cin >> temp;
                     ToaDo d2;
                      d2.x = i;
                      d2.y = j;
                      if(temp == 1) {
                          B.push_back(d2);
                      }
                 }
             }
          for(int i= 0;i< A.size();i++) {
              for(int j = 0;j<B.size();j++) {
                  int tmp = ++D[B[j].y - A[i].y + NUMBER][B[j].x - A[i].x + NUMBER];
                  count = max(tmp,count);
              }
           }
    return count;
}
 
int main() {
    int n; // s? b? test
    cin >> n;
    int ketQua[n]; // m?ng lýu k?t qu?
    int index=0;
    for(int i = 0;i < n ; i++){
        int L,C;
        cin >> L >> C;
        ketQua[index] = xuly(L,C);
        index++;
    }
    for(int i=0;i<index;i++){
        cout << ketQua[i] << endl;
    }
}

