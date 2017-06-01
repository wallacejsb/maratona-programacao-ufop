#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {
  int a,b,c,d;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  int numerador = a*d + c*b;
  int denominador = b*d;
  int menor = (numerador > denominador) ? denominador : numerador;
  for (int i = menor; i > 1; i--) {
      if(numerador%i == 0 && denominador%i==0){
        numerador /= i;
        denominador /= i;
      }
  }
  printf("%d %d\n",numerador,denominador);
  return 0;
}
