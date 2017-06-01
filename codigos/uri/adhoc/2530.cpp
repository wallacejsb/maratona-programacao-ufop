#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n,m;
  while (cin >> n >> m) {
    vector<int> v1(n);
    vector<int> v2(m);
    for (size_t i = 0; i < n; i++) {
      cin >> v1[i];
    }
    for (size_t i = 0; i < m; i++) {
      cin >> v2[i];
    }

    int pos = 0;
    int casou = 0;
    for (size_t i = 0; i < m; i++) {
      for (size_t j = pos; j < n; j++) {
        if(v1[j] == v2[i]){
          pos = j+1;
          casou++;
          break;
        }
      }
    }
    cout << ((casou == m) ? "sim" : "nao") << endl;
  }
  return 0;
}
