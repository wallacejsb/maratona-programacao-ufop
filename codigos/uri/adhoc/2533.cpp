#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int M;
  while (cin>>M) {
      double num = 0;
      double dem = 0;
      double c,n;
      for (size_t i = 0; i < M; i++) {
          cin>> n >> c;
          num +=  n*c;
          dem += c;
      }
      printf("%.4lf\n", num/(dem*100));
  }
  return 0;
}
