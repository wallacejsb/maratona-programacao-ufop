#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while (scanf("%d",&N )!=EOF) {
    vector<int> v(N,0);
    int aux;
    for (int i = 0; i < count; i++) {
      scanf("%d",&aux);
      if(i==0)
        v[i] = aux;
      else
        v[i] = aux + v[i-1];
    }
    int valor = v[N-1]/2;



  }
  return 0;
}
