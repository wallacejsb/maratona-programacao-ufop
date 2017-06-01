#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,s;
  cin >> n >> s;
  int saldo = s;
  int aux;
  int menor = saldo;
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    saldo += aux;
    menor = min(menor,saldo);
  }
  printf("%d\n",menor );
  return 0;
}
