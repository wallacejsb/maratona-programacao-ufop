#include<bits/stdc++.h>
using namespace std;


int DP[10100][10100];

bool compare(int i, int j){
  return i>j;
}


int main(){
  int T,N;
  double R;
  scanf("%d",&T );

  for (register int i = 0; i < T; i++) {
    scanf("%d %lf",&N,&R);
    vector<int> items;
    double aux;
    for(register int j = 0; j < N; j++) {
      scanf("%lf", &aux);
      aux*=100;
      items.push_back((int)aux);
    }

    int W = (int)R*100;
    for(int l=0;l<=N;l++)
      memset(DP[i],0,sizeof(int)*W);

    sort(items.begin(),items.end(),compare);

    for (register int w = 1; w <= W; w++) {
      for (register int k = 1; k <= N; k++) {
        DP[k][w] = DP[k-1][w];
        if(w>=items[k-1]){
          DP[k][w] = max(DP[k-1][w], DP[k-1][w-items[k-1]] + 1 );
        }
      }
    }
    /*
    for (register int k = 1; k <= N; k++) {
    for (register int w = 1; w <= W; w++) {
        printf("%d ",DP[k][w] );
      }
      printf("\n" );
    }
*/
    int quantidade = DP[N][W];
    int qtde = quantidade;

    int indx  = N, indy = W;
    double sum=0;
    //printf("okok\n" );
    while(indx>=0 && indy>=0 && DP[indx][indy]!=0){
      sum+=(items[indx-1]/100.0);
      //printf("pegou %d %d\n", indx,items[indx-1]);
      indx--;
      indy-=items[indx-1];
    }
    printf("Caso %d: %d %.2lf\n",i+1,qtde,sum );
  }

 return 0;
}
