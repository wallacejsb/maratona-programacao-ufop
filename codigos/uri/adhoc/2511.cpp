#include <iostream>
#include <cstdio>
#include <cmath>
#include <set>

using namespace std;

#define MAX 1001000

int vetor[MAX];
bool is_prime[MAX];

void pre_process(){
  for(int i=0;i<=1000100;i++){
    vetor[i] = i;
    is_prime[i] = false;
  }

  int limite = (int) sqrt(1000100);

  for (int i = 2; i <= limite; i++) {
    if(vetor[i]==i){
      is_prime[i] = true;
      for(int j= i+i; j<=limite;j+=i)
        vetor[j] = 0;
    }
  }
}


int main(int argc, char const *argv[]) {
  int N;
  pre_process();
  while (scanf("%d",&N)!=EOF) {
    int aux;
    bool imprimiu=false;
    for (int i = 0; i < N; i++) {
      scanf("%d",&aux);
      if(is_prime[aux]){
        //if(imprimiu){
          printf("%d ",aux);
        //}else{
          imprimiu = true;
//          printf("%d",aux);
        //}
      }
    }
    if(!imprimiu){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
