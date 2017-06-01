#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int distancias[10001000];
int C;
vector<int> circulos;

int calcula(double distancia){
    if((int) ceil(distancia) > circulos[C-1]) return 0;

    return distancias[(int) ceil(distancia) ];
}

int main(int argc, char const *argv[]) {
  int T;
  scanf("%d %d",&C,&T);

  int anterior=0,j=0;
  int cont=0;
  for (size_t i = 0; i < C; i++){
    scanf("%d",&circulos[i]);
    while(j<=circulos[i]){
      //printf("%d <= %d\n",j,circulos[i] );
      distancias[j] = C -cont;
      //printf("%d <= %d\n",j,circulos[i] );
      j++;
    }
    anterior = circulos[i];
    j = anterior+1;
    cont++;
  }

  int pontuacao = 0,x,y;
  for (size_t i = 0; i < T; i++) {
    scanf("%d %d",&x,&y);
    double distancia = sqrt(pow(x,2.)+pow(y,2.));
    pontuacao += calcula(distancia);
  }

  printf("%d\n",pontuacao);

  return 0;
}
