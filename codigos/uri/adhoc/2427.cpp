#include <bits/stdc++.h>

using namespace std;

int recursive( double n,int prof){
  if(n>=2){
    return recursive(n/2,prof+1)*4;
  }else{
    return 1;
  }
}


int main(int argc, char const *argv[]) {
  double N;
    cin>>N;
    cout << recursive(N,1) << endl;
  return 0;
}
