#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

char matriz[550][550];
int visitados[550][550];

int marcacao = 1;

void busca_celulas(int i,int j,int N){
    if(i>=0 && i<N && j>=0 && j<N && visitados[i][j]==0){
      visitados[i][j] = marcacao;

      if(matriz[i][j]=='A'){ busca_celulas(i-1,j,N);}
        else
        if(matriz[i][j]=='V'){ busca_celulas(i+1,j,N);}
        else
        if(matriz[i][j]=='<'){ busca_celulas(i,j-1,N);}
        else
        if(matriz[i][j]=='>') { busca_celulas(i,j+1,N);}
    } else {
      if((i<0 || i>=N || j<0 || j>=N) ||  visitados[i][j]==-1){
        marcacao = -1;
      }
      return;
    }
    visitados[i][j] = marcacao;
}



int main(int argc, char const *argv[]) {
  int N;
  scanf("%d ",&N);
  for (size_t i = 0; i < N; i++){
    for (size_t j = 0; j < N; j++) {
      cin>>matriz[i][j];
    }
  }

  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      visitados[i][j] = 0;
    }
  }


  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      if(visitados[i][j]==0){
        marcacao = 1;
        busca_celulas(i,j,N);
      }
    }
  }

  int errados = 0;

  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      if(visitados[i][j]==-1) errados++;
    }
  }
  printf("%d\n",(N*N)-errados);

  return 0;
}
