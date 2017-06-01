#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string alfabeto;
  while (cin>>alfabeto) {
      int N;
      cin>>N;
      int aux;
      for (size_t i = 0; i < N; i++) {
          cin>>aux;
          cout<<alfabeto[aux-1];
      }
      cout<<endl;
  }
  return 0;
}
