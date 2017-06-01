#include<bits/stdc++.h>
using namespace std;

#define P1 0
#define P2 1
#define R1 3
#define R2 4

int main(){
  int T;
  scanf("%d",&T );
  getchar();
  for (int i = 0; i < T; i++) {
    string str,s="  ";
    cin>>str;
    stack<int> pilha;
    for (int j = 0; j < str.length(); j++) {
      s[j%2]=str[j];
      if(j%2!=0){

        if(s=="P1"){
          pilha.push(P1);
        }else if(s=="P2"){
          pilha.push(P2);
        }else if(s=="R1"){
          if(!pilha.empty() && pilha.top()==P2){
            pilha.pop();
          }else{
            pilha.push(R1);
          }
        }else if(s=="R2"){
          if(!pilha.empty() && pilha.top()==P1){
            pilha.pop();
          }else{
            pilha.push(R2);
          }
        }
      }
    }
    if(pilha.size()==0){
      printf("Caso %d: Sim\n",i+1);
    }else{
      printf("Caso %d: Nao\n",i+1);
    }
  }

 return 0;
}
