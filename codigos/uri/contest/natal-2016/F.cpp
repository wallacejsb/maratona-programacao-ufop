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
   int N,nn;
   scanf("%d",&N);
   nn = N;

   char comportou;
   string nome;
   vector<string> nomes;

   int comportaram = 0;
   while (N--) {
     cin>>comportou>>nome;
     nomes.push_back(nome);
     if(comportou=='+'){
       comportaram++;
     }
   }

   sort(nomes.begin(),nomes.end());

  for(vector<string>::iterator it = nomes.begin(); it!= nomes.end();it++){
    cout<<*it<<endl;
  }
  cout<<"Se comportaram: "<<comportaram<<" | Nao se comportaram: "<<nn - comportaram<<endl;

  return 0;
}
