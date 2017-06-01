#include <iostream>
#include <queue>


using namespace std;
typedef struct {
  int h,m,c;
}tipo;


bool estado_critico(int h,int m, tipo aux){
    int h2 = aux.h;
    int m2 = aux.m + aux.c;
    if(m2>=60) {
      h2 += m2/60;
      m2 %=60;
    }

    if(h>h2){
      return true;
    }else if(h==h2){
        if(m>m2)
          return true;
    }
    return false;
}

int main(int argc, char const *argv[]) {
  int N;
  while (cin>>N) {
      queue<tipo> fila;
      tipo aux;
      for (size_t i = 0; i < N; i++) {
        cin>>aux.h>>aux.m>>aux.c;
        fila.push(aux);
      }

      int chegou_critico = 0;
      int h=7,m=0;
      tipo paciente_atual;
      bool beg = false;
      while(!fila.empty()){
        if(!beg){
            paciente_atual = fila.front();
            fila.pop();
            h = paciente_atual.h;
            m = paciente_atual.m+30;
            if(m>=60){ h+=m/60;  m%=60; }
            beg = true;
        }else{
            paciente_atual = fila.front();
            fila.pop();
            if(estado_critico(h,m,paciente_atual))  chegou_critico++;
            m += 30;
            if(m>=60){ h+=m/60;  m%=60; }
          }
      }
      cout<<chegou_critico<<endl;

  }
  return 0;
}
