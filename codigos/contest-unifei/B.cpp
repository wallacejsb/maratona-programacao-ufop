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

 int main(int argc, char const *argv[]) {
   int N;
   cin>>N;
   multiset<int> seta;
   int aux;
   for (int i = 0; i < N; i++) {
     cin>>aux;
     seta.insert(aux);
   }
   int result = 0;
   for (int i = 0; i < N; i++) {
     if(seta.count(i+1)>=i){
       result += (i+1)*(seta.count(i+1)/(i+1));
     }
   }
   cout<<result<<endl;

  return 0;
}
