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
   scanf("%d",&N);

   int nota25=0,nota50=0,nota100=0;

   int aux;
   bool err= false;
   for (int i = 0; i < N; i++) {
     scanf("%d",&aux);
     switch (aux) {
       case 25:
        nota25++;
       break;
       case 50:
          if(nota25>0){  nota25--; nota50++;}else{
            err = true;
          }
        break;
        case 100:
          if(nota50>0 && nota25>0){
            nota50--; nota25--;
            nota100++;
          }else if(nota25>=3){
            nota25-=3;
          }else{
            err = true;
          }
        break;

     }
   }

   if(err){
     printf("NAO\n");
   }else{
     printf("SIM\n");
   }


  return 0;
}
