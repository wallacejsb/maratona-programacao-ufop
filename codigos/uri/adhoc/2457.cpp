#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

bool contem(char letra,char* palavra){
  for(int i=0;i<strlen(palavra);i++){
    if(letra==palavra[i])
      return true;
  }
  return false;
}


int main(int argc, char const *argv[]) {
  char letra;
  char frase[1100];

  scanf("%c\n",&letra);
  fgets(frase,1010,stdin);

  frase[strlen(frase)-1] = '\0';

  double totalPalavras=0, letraFrase=0;
  for(char *c = strtok(frase," ");c!=NULL; c=strtok(NULL," ")){
    if(contem(letra,c)){
      letraFrase++;
    }
    totalPalavras++;
  }

  printf("%.1lf\n", (letraFrase/totalPalavras)*100.);

  return 0;
}
