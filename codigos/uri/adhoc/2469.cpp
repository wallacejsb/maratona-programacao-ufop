#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int N,aux;
  set<int> seta;
  multiset<int> seta2;
  cin >> N;
  for (size_t i = 0; i < N; i++) {
    cin>> aux;
    seta.insert(aux);
    seta2.insert(aux);
  }
  int result = 0;
  int maior = 0;
  for (set<int>::iterator it = seta.begin(); it!= seta.end(); it++) {
    if(seta2.count(*it) > maior) {
      result = *it;
      maior = seta2.count(*it);
    }else if(seta2.count(*it) == maior){
      result = max(result,*it);
    }
  }
  cout << result << endl;
  return 0;
}
