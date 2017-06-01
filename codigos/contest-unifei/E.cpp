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

int main (){
  long long X, Y;
  long long cont = 0;
  long long A, B;

  long long n;

  cin >> X >> Y;
  cin >> A >> B;

  n = X*Y;

  if(X==Y)
    n = X;

  while(A%n!=0){
    A++;
  }

  while(B%n!=0){
    B--;
  }

  cout << B/n - ((A/n) -1 ) <<endl;
  
  return 0;
}
