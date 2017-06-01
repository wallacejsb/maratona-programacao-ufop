#include <stdio.h>
#include <string.h>

char palavra[1010000];
int tamanho;


void shiftstr(char c, int pos){
  register int r;
  for (r = tamanho; r>= pos; r--) {
     palavra[r+1] = palavra[r];
  }
  palavra[pos] =  c;
  palavra[tamanho+1] = '\0';
  tamanho++;
}

void inverte(int a ,int b){
  char aux;
	while(a<=b){
		aux = palavra[a];	
		palavra[a] = palavra[b];
		palavra[b] = aux;
		a++;
		b--;
	}
}

int main() {
  int l,n;
  scanf("%d %d",&l,&n);
	getchar();
	fgets(palavra,l+2,stdin);
	palavra[strlen(palavra)-1] = '\0';
	tamanho = strlen(palavra);

  int a4;
  char c4,c;
  int a3,b3;
  int a,b;
  int j = 0;
  for (j = 0; j < n; j++) {
    int op;
    scanf("%d",&op);
    if(op == 4) {
      scanf("%d %c",&a4,&c4);
      shiftstr(c4,a4-1);
    }else
    if(op==3){
      scanf("%d %d",&a3,&b3);
      inverte(a3-1, b3-1);
    }else{
      scanf("%d %d %c",&a,&b,&c);
      if(op==1){
        int ocorrencias = 0;
				register int i = a-1;
        for ( ; i < b; i++) {
          if(c == palavra[i])
            ocorrencias++;
        }
        printf("%d\n",ocorrencias);
      } else {
          int primeira = -1;
          int ultima = -1;
	  register int i = a-1;
          for (; i < b; i++) {
            if(c == palavra[i]){
              primeira = i+1;
              break;
            }
          }
          if(primeira!=-1){
						i = b-1;
		        for (; i > a-1; i--) {
		          if(c == palavra[i]){
		            ultima = i+1;
		            break;
		          }
		        }
					}
          if(primeira == -1)
            printf("-1\n");
            else
            printf("%d %d\n",primeira,ultima );
      }

    }
  }
  printf("%s\n",palavra);

  return 0;
}

