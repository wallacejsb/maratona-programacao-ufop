#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  int casos = 1;
  while (scanf("%d",&n) && n) {
    int aux;
    int achou = false;
    int res;
    for (size_t i = 1; i <= n; i++) {
      cin>>aux;
      if(aux==i && !achou){
        achou = true;
        res = aux;
      }
    }
    printf("Teste %d\n",casos++ );
    printf("%d\n",res );
    printf("\n");
  }

  return 0;
}
