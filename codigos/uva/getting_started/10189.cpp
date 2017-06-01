#include <bits/stdc++.h>

using namespace std;

int M[100][100];
int cord[8][2] = { {-1,-1},{-1,0},{-1,1},{1,0},{1,1},{0,1},{1,-1},{0,-1} };

int main(int argc, char const *argv[]) {
  int r,c;
  int field = 1;
  while ((scanf("%d %d",&r,&c)!=EOF) && r && c) {
      cin.ignore();

      if(field>1) printf("\n");
      vector<pair<int,int> > mines;
      for (size_t i = 0; i < r; i++) {
        for (size_t j = 0; j < c; j++) {
            char c;
            scanf("%c", &c);
            if (c=='*') {
              mines.push_back(pair<int,int>(i,j));
              M[i][j] = -1;
            }else{
              M[i][j] = 0;
            }
        }
        getchar();
      }

      while (!mines.empty()){
        pair<int,int> coords = mines.back();
        for (size_t i = 0; i < 8; i++) {
          int x = cord[i][0] + coords.first;
          int y = cord[i][1] + coords.second;
          if(x>=0 && x<r && y>=0 && y<c && M[x][y]!=-1)
            M[x][y]++;
        }
        mines.pop_back();
      }
      printf("Field #%d:\n",field++);
      for (size_t i = 0; i < r; i++) {
        for (size_t j = 0; j < c; j++) {
            if(M[i][j]==-1){
              printf("*");
            }else{
              printf("%d",M[i][j]);
            }
        }
        printf("\n");
      }
  }


  return 0;
}
