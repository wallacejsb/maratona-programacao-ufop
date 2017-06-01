#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;


int main(int argc, char const *argv[]) {
  char cadeia[1100];

  fgets(cadeia,1010,stdin);
  cadeia[strlen(cadeia)-1] = '\0';

  bool espaco = false;
  for (char *c = strtok(cadeia," "); c!=NULL; c = strtok(NULL," ")){
      if(espaco){
        espaco = false;
        printf(" ");
      }
      for(int i=0;i<strlen(c);i++){
          if(i%2!=0)
            printf("%c",c[i]);
      }
      espaco = true;
  }
  printf("\n");
  return 0;
}
