#include <bits/stdc++.h>

using namespace std;

int N,M;
int Mat[110][110];
typedef struct{
  int x,y;
}coord;

int main(int argc, char const *argv[]) {
  while (cin>>N>>M) {
    coord ini;
    for (size_t i = 0; i < N; i++) {
      for (size_t j = 0; j < M; j++) {
          cin>>Mat[i][j];
          if(Mat[i][j] == 1){
            ini.x = i;
            ini.y = j;
          }
      }
    }

  int result = 0;

  queue<pair<coord,int> > fila;
  fila.push(pair<coord,int>(ini,0));
  while (!fila.empty()) {
      pair<coord,int> p = fila.front();
      coord aux = p.first;
      fila.pop();
      if(aux.x < 0 || aux.x >=N  || aux.y < 0 || aux.y >=M) continue;

      if(Mat[aux.x][aux.y] == 2){
          result = p.second;
          break;
      }
      if(Mat[aux.x][aux.y] == -1) continue;
      Mat[aux.x][aux.y] = -1;
      aux.x++;
      fila.push(pair<coord,int>(aux,p.second+1));
      aux.x--; aux.x--;
      fila.push(pair<coord,int>(aux,p.second+1));
      aux.x++;
      aux.y++;
      fila.push(pair<coord,int>(aux,p.second+1));
      aux.y--;aux.y--;
      fila.push(pair<coord,int>(aux,p.second+1));
  }
  printf("%d\n",result);
}

  return 0;
}
