#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

 int main(int argc, char const *argv[]) {
   map<string,string> idiomas;

   int N;
   scanf("%d",&N);
   getchar();

   string idioma,frase;
   for (size_t i = 0; i < N; i++) {
     cin>>idioma;
     getline(cin,frase);
     idiomas.insert(pair<string,string>(idioma,frase));
   }

   int M;
   scanf("%d",&M);
   getchar();
   string nome;
   for (size_t i = 0; i < M; i++) {
     getline(cin,nome);
     cin>>idioma;
     cout<<nome<<endl;
     cout<<idiomas[idioma]<<endl;
   }

  return 0;
}
