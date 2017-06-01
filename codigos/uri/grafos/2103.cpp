#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <set>

using namespace std;

long long grafo[10100][10100];

int main(int argc, char const *argv[]) {
  int casos;
  scanf("%d",&casos );

  for (size_t i = 0; i < casos; i++) {
    int n;
    scanf("%d",&n );
    for (size_t j = 0; j < n; j++)
      memset(grafo[j],0,sizeof(int)*n);

    int v1,v2;
    long long peso;

    vector<set<int> > vetor(n+1,set<int>());

    for (size_t j = 0; j < n-1; j++){
      scanf("%d %d %Ld",&v1,&v2,&peso);
      grafo[v1][v2] = peso;
      //vetor[v2].insert(v1);
      vetor[v1].insert(v2);

      for(set<int>::iterator it = vetor[v1].begin(); it!=vetor[v1].end();it++){
         grafo[*it][v2] = grafo[v1][*it] + grafo[v1][v2];
      }

    }

    long long total = 0;
    for (size_t k = 1; k <= n; k++) {
      for (size_t l = k + 1; l <= n; l++) {
        total += grafo[k][l];
      }
    }
    printf("%Ld\n", total%1300031);
  }

  return 0;
}
