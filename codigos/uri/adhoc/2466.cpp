#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

bool M[65][65];

bool constroi(int N){
  if(N==0){
    return M[1][0];
  } else {
    for (size_t i = 0; i < N; i++)
      M[N][i] = (M[N+1][i]==M[N+1][i+1]) ? true : false;   //RESTRIÇÃO DO PROBLEMA
    return  constroi(N-1);
  }
}


int main(int argc, char const *argv[]) {
  int N,number;

  scanf("%d",&N);
  for (size_t i = 0; i < N; i++) {
    scanf("%d",&number);
    if(number==1){
      M[N][i] = true;
    } else {
      M[N][i] = false;
    }
  }

  if(constroi(N-1)){
    printf("preta\n");
  }else{
    printf("branca\n");
  }
  return 0;
}
