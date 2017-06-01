#include <bits/stdc++.h>

using namespace std;

int M[110][110];

int main(int argc, char const *argv[]) {
  int n,m,aux,result = -1;
  cin >> n >> m;
  int linha[110], coluna[110];
  for (size_t i = 0; i < 105; i++) {
    linha[i] = 0;
    coluna[i] = 0;
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < m; j++) {
      cin >> aux;
      linha[i]+=aux;
      coluna[j]+=aux;
      result = max(result,max(linha[i],coluna[j]));
    }
  }
  cout << result << endl;

  return 0;
}
