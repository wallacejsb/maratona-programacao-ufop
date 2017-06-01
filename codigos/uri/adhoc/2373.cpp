#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d\n",&n);
  int a,b,res = 0;
  for (size_t i = 0; i < n; i++) {
    cin>>a>>b;
    if(a>b){
      res+=b;
    }
  }
  cout<< res<<endl;
  return 0;
}
