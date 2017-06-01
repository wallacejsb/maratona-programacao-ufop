#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (scanf("%d",&n)!=EOF) {
    int num=1,dem=1;
    dem = pow(2,n);
    if(n==1){
      num = 1;
    }else{
      num = pow(2,n) - 2*(n-2)+1;
    }
    printf("%d\\%d\n",num,dem);
  }
  return 0;
}
