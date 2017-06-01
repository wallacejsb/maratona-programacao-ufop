#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

int calcula(string str){
  int soma = 0;
  for (size_t i = 0; i < str.length(); i++) if(isalpha(str[i])) soma += (tolower(str[i])-'a')%9 +1;

  char s[100];
  sprintf(s,"%d",soma);
  while(strlen(s) > 1){
    int nova = 0;
    for(int i=0;i<strlen(s);i++) nova +=  (s[i]-'0');
    soma = nova;
    sprintf(s,"%d",soma);
  }
  return soma;
}


int main(int argc, char const *argv[]) {
  string str;
  while (getline(cin,str)) {
    printf("%d\n",calcula(str));
  }
  return 0;
}
