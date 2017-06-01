#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int M,N;
  scanf("%d %d",&M,&N);
  int matriz[M+10][N+10];
  int x,y;
  scanf("%d %d",&x,&y);
  for (size_t i = 0; i < M; i++) {
    for (size_t j = 0; j < N; j++) {
      scanf("%d",&matriz[i][j]);
    }
  }
  pair<int,int> result = process(x,y,M,N,&matriz);
  printf("%d %d\n",result.first,result.second);
  return 0;
}
