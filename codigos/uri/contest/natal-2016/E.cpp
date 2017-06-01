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
   map<string,set<string> > mapa;

   int X;
   scanf("%d",&X);
   string name,s1,s2,s3;

   for (size_t i = 0; i < X; i++) {
     cin>>name>>s1>>s2>>s3;
     set<string> seta;
     seta.insert(s1);
     seta.insert(s2);
     seta.insert(s3);

     mapa.insert(pair<string,set<string> >(name,seta));
   }


   while(cin>>name>>s1){
      if(mapa[name].find(s1)!=mapa[name].end()){
        printf("Uhul! Seu amigo secreto vai adorar o/\n" );
      }else{
        printf("Tente Novamente!\n" );
      }
   }

  return 0;
}
