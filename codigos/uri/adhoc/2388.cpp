#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[]) {
  int n;
  int a,b;
  double res = 0;

  cin>>n;
  for (size_t i = 0; i < n; i++) {
    cin >> a >> b;
    res += a*b;
  }
  printf("%.0lf\n",res);
  return 0;
}
