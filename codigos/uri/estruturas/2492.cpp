#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;

  while ( (scanf("%d",&n) !=EOF ) && n ) {
    map<string,string> func,invert;
    string s1,nada,s2;

    bool efuncao = true, einvertivel=true;
    for (size_t i = 0; i < n; i++) {
      cin>>s1>>nada>>s2;

      if(invert.find(s2)==invert.end())
        invert.insert(pair<string,string>(s2,s1));
      else{
        if(invert[s2]!=s1){
          einvertivel = false;
        }
      }

      if(func.find(s1)==func.end())
        func.insert(pair<string,string>(s1,s2));
      else{
        if(func[s1]!=s2){
          efuncao = false;
          einvertivel = false;
        }
      }
    }

    if(efuncao){
      if(einvertivel){
        printf("Invertible.\n");
      }else{
        printf("Not invertible.\n");
      }
    }else{
        printf("Not a function.\n");
    }

  }
  return 0;
}
