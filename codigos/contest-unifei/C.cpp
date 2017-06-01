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

typedef struct{
  int xi,yi;
}comida;

int main(int argc, char const *argv[]) {

   long long P,Q;
   cin>>P>>Q;

  int N;
  cin>>N;

  comida c;
  vector<comida> v(N);
  for (int i = 0; i < N; i++) {
    cin>>c.xi>>c.yi;
    v[i] = c;
  }

  int minimo = 9999999999;

  for (int i = 0; i < N; i++) {
    if(P% v[i].xi ==0 && Q% v[i].yi ==0 && Q/v[i].yi == P/v[i].xi) {
      int qtde = P/v[i].xi;
      minimo = min(minimo,qtde);
    }
  }

  if(minimo == 9999999999){
    cout << "GRR" << '\n';
  }else{
    cout<<minimo<<endl;
  }

  return 0;
}
