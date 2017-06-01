#include <stdio.h>

int PD[1100][1100];
int peso[1100];
int valores[1100];
int N,W;

int mochila(){
  int i,j;
  for (i = 1; i <= N; i++) {
    for (j = 1; j <= W; j++) {
        PD[i][j] = PD[i-1][j];
        if(j>=peso[i])
          PD[i][j] = (PD[i][j] > PD[i-1][j-peso[i]] +valores[i]) ? PD[i][j] : PD[i-1][j-peso[i]]+valores[i];
    }
  }
  return PD[N][W];
}

int main(int argc, char const *argv[]) {
  int K=1;
  while (scanf("%d %d",&N,&W)!=EOF) {
    if(N==0 && W==0) break;
    int i;
    for (i = 0; i <= N; i++) PD[i][0] = 0;
    for (i = 0; i <= W; i++)  PD[0][i] = 0;
    for (i = 0; i < N; i++) scanf("%d %d",&peso[i+1],&valores[i+1]);

    printf("Caso %d: %d\n",K++,mochila());
  }

  return 0;
}
