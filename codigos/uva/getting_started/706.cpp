#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {

  int S;
  string N;
  while ((scanf("%d ",&S)!=EOF ) && S) {
    cin>>N;

    for (size_t i = 0; i < 2*S+3; i++) {
      if(i==0){
            for (size_t k = 0; k < N.length(); k++) {
              printf(" ");
              if(N[k]=='1'|| N[k]=='4'){
                for (size_t j = 0; j < S; j++) { printf(" "); }
              }else{
                for (size_t j = 0; j < S; j++) { printf("-"); }
              }
              printf(" ");
              if(k!=N.length()-1) printf(" ");
            }
      }else if(i==S+1){
          //printf(" ");
            for (size_t k = 0; k < N.length(); k++) {
              printf(" ");
              if(N[k]=='0'|| N[k]=='1'||N[k]=='7'){
                for (size_t j = 0; j < S; j++) { printf(" "); }
              }else{
                for (size_t j = 0; j < S; j++) { printf("-"); }
              }
              printf(" ");
              if(k!=N.length()-1) printf(" ");
            }
      } else if(i==2*S+3-1){
            //printf(" ");
            for (size_t k = 0; k < N.length(); k++) {
              printf(" ");
              if(N[k]=='1'|| N[k]=='4'||N[k]=='7'){
                for (size_t j = 0; j < S; j++) { printf(" "); }
              }else{
                for (size_t j = 0; j < S; j++) { printf("-"); }
              }
              printf(" ");
              if(k!=N.length()-1) printf(" ");
            }
      }else {

        for (size_t k = 0; k < N.length(); k++) {
          if(i>S+1){
            for (size_t j = 0; j < S+2; j++) {
              if(N[k]=='0' || N[k]=='8' || N[k]=='6'){
                  if(j==0 || j==S+2-1) printf("|");
                    else printf(" ");
              }else if( N[k]=='2'){
                if(j==0) printf("|");
                else printf(" ");
              }else {
                if(j==S+2-1) printf("|");
                   else printf(" ");
              }
            }

          }else{
            for (size_t j = 0; j < S+2; j++) {
              if(N[k]=='0'||N[k]=='8'||N[k]=='9'||N[k]=='4'){
                  if(j==0 || j==S+2-1) printf("|");
                    else printf(" ");
              }else if(N[k]=='1'|| N[k]=='2' || N[k]=='3' ||N[k]=='7'){
                if(j==S+2-1) printf("|");
                else printf(" ");
              }else {
                if(j==0) printf("|");
                else printf(" ");
              }
            }
          }
          if(k!=N.length()-1){
            printf(" ");
          }

        }
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
