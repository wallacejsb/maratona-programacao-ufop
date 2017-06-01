#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
  char alfabeto[27];
  char texto[10100];
  scanf("%s\n",alfabeto);
  scanf("%s",texto);

  for (size_t i = 0; i < (int) strlen(texto); i++)
    printf("%c",alfabeto[ texto[i]-'a' ]);
  printf("\n");
  return 0;
}
