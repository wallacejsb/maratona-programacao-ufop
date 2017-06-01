#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

  vector<int> aposta(6);
  for (size_t i = 0; i < 6; i++) {
    scanf("%d",&aposta[i]);
  }

  vector<bool> sorteado(100,false);
  int number;
  for (size_t i = 0; i < 6; i++) {
    scanf("%d",&number);
    sorteado[number] = true;
  }

  int pontuacao = 0;
  for (size_t i = 0; i < 6; i++) {
    if(sorteado[aposta[i]]){
      pontuacao++;
    }
  }

  switch (pontuacao) {
    case 3:
      printf("terno\n");
    break;

    case 4:
      printf("quadra\n");
    break;

    case 5:
      printf("quina\n");
    break;

    case 6:
      printf("sena\n");
    break;

    default:
      printf("azar\n");
    break;

  }
  return 0;
}
