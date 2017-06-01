#include <cstdio>

using namespace std;
int DP[100100][1100];

int main(int argc, char const *argv[]) {
  int K, n;
  scanf("%d %d",&K,&n);
  for (size_t i = 0; i <= n; i++)  DP[0][i] = 0;
  for (size_t j = 0; j <= K; j++)  DP[j][0] = 0;

  int element[1010];
  for (size_t i = 0; i < n; i++)
    scanf("%d",&element[i] );

  for (size_t j = 1; j <= K; j++) {
    for (size_t i = 1; i <= n; i++) {
      DP[j][i] = DP[j][i-1];
      if(j >= element[i-1])
        DP[j][i] = (DP[j][i] > DP[j-element[i-1]][i-1] +element[i-1]) ? DP[j][i] : DP[j-element[i-1]][i-1] + element[i-1];
    }
  }

  if(DP[K][n]==K){
    printf("S\n");
  }else{
    printf("N\n");
  }

  return 0;
}
