#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  int N,C,V,notas, primeira=0;
  scanf("%d",&T );
  for (register int i = 0; i < T; i++) {
    scanf("%d %d %d", &N,&C,&V);
    priority_queue<int,vector<int>, greater<int> > heap;

    for (register int j = 0; j < N; j++) {
      scanf("%d",&notas );
      if(notas>=C) primeira++;
      if(heap.size()<V){
        heap.push(notas);
        //printf("inseriu %d\n", notas);
        //printf("%d\n", heap.top());
      }else{
        //printf("%d \n",  heap.top());
        if(heap.top()<notas){
          heap.pop();
          heap.push(notas);
        }
      }
    }
    printf("Caso %d: %d %d\n",i+1,primeira, heap.top() );
    primeira=0;
  }

 return 0;
}
