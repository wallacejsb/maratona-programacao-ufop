#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  scanf("%d",&T );
  for (int i = 0; i < T; i++) {
    double N,K;
    scanf("%lf %lf",&N,&K );
    K--;
    printf("Caso %d: %.0lf\n",i+1,ceil(N/K));
  }

 return 0;
}
