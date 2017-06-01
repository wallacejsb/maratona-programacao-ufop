#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(scanf("%d",&N)!=EOF){
    vector<int> vetor(N,0);

    for (size_t i = 0; i < N; i++) {
        scanf("%d",&vetor[i]);
    }

    bool jolly = true;
    vector<bool> seq(N,false);

    if(N==1){ printf("Jolly\n" ); continue; }

    for (size_t i = 0; i < N-1; i++){
        seq[abs (vetor[i]-vetor[i+1]) ] = true;
    }

    for (size_t i = 1; i < N; i++){
        if( !seq[i] ){
          jolly = false;
          break;
        }
    }

    if(jolly){
      printf("Jolly\n");
    }else{
      printf("Not jolly\n");
    }

  }
  return 0;
}
