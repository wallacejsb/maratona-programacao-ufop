#include<bits/stdc++.h>
using namespace std;

int main(){
  int T,N;
  scanf("%d",&T );
  for (register int i = 0; i < T; i++) {
    scanf("%d", &N );
    set<double> conjunto;
    double aux;
    for (register int j = 0; j < N; j++) {
      scanf("%lf", &aux);
      conjunto.insert(aux);
    }
    printf("Caso %d: %d\n",i+1,conjunto.size());

  }

 return 0;
}
