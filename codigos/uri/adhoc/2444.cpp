#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int vi,n;
  cin >> vi >> n;
  int aux;
  for (size_t i = 0; i < n ;i++) {
    cin >> aux;
    vi += aux;
    vi = (vi > 100) ? 100 : vi;
    vi = (vi < 0) ? 0 : vi;
  }
  printf("%d\n",vi);
  return 0;
}
