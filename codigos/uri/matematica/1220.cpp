#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[]) {
  int N;
  while (cin>>N) {
    if(!N) break;
    vector<double> v(N);
    double value;
    double sum = 0;

    for (size_t i = 0; i < N; i++) {
      scanf("%lf",&v[i]);
      sum += v[i];
    }
    sum /=  N ;

    double difPos=0,difNeg=0;
    for (size_t i = 0; i  < N; i++) {
        if(v[i] > sum){
            difPos += (long) ((v[i] - sum)*100.0)/100.0;
        }else {
          difNeg += (long) ((v[i] - sum)*100.0)/100.0;
        }
    }
    difNeg = -difNeg;
    if(difNeg > difPos)
      printf("$%.2lf\n",difNeg);
      else
      printf("$%.2lf\n",difPos);
  }

   return 0;
 }
