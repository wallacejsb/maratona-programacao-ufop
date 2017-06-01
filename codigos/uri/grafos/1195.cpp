#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int numero;	
	struct n *esq;
	struct n *dir;
}No;

typedef struct a{
	No *raiz;
}TArvore;

void insere(TArvore *arv, int dado);
TArvore *cria_arvore();
void desaloca_no(No *no);
void desaloca_arvore(TArvore *arv);
No *raiz(TArvore *arv);
void pos_ordem(No *no);
void pre_ordem(No *no);
void central(No *no);

int casos,aux,pos,inf,pre;
int main(){
scanf("%d",&casos);
for(int i=0;i<casos;i++){
	int num; scanf("%d",&num);
	pos = inf = pre = num;
	TArvore *arv = cria_arvore();
	for(int j=0;j<num;j++){
		scanf("%d",&aux);
		insere(arv,aux);
	}
	printf("Case %d:\n",i+1);
	printf("Pre.: ");
	pre_ordem(arv->raiz);
	printf("\n");
	printf("In..: ");
	central(arv->raiz);
	printf("\n");
	printf("Post: ");
	pos_ordem(arv->raiz);
	printf("\n\n");
		
}
	
return 0;
}

TArvore *cria_arvore(){
	TArvore *arv = (TArvore*) malloc(sizeof(TArvore));
	return arv;
}


void insere(TArvore *arv, int dado){
	if(arv->raiz == NULL){
		arv->raiz = (No*) malloc(sizeof(No)); 
		arv->raiz->numero = dado;
		arv->raiz->esq = NULL;
		arv->raiz->dir = NULL;
	} else {
		No *no = arv->raiz;
		No *pai = arv->raiz;	
			bool flag =true;
		while(no!=NULL){
			 if(dado < no->numero){
				  pai = no;
				  flag=true;
				  no = no->esq;
			  }
			 else if(dado > no->numero){
				 pai=no;
				 flag=false;
				  no =no->dir;
			  }
		}
		no = (No*) malloc(sizeof(No)); 
		no->numero = dado;
		no->esq = NULL;
		no->dir = NULL;	
		if(flag)  pai->esq = no; else pai->dir= no;
	}
}


void central(No *no) {
    if (no != NULL) {
       central(no->esq);
       printf("%d",no->numero);
       if(inf!=1){ printf(" ");inf--;}
       central(no->dir); 
    }
}

void pre_ordem(No *no){
	if(no !=NULL){
		printf("%d",no->numero);
		if(pre!=1){ printf(" ");pre--;}
		pre_ordem(no->esq);
		pre_ordem(no->dir);
	}
}

void pos_ordem(No *no){
	if(no!=NULL){
		pos_ordem(no->esq);
		pos_ordem(no->dir);
		printf("%d",no->numero);
		if(pos!=1){ printf(" ");pos--;}
	}
}

No *raiz(TArvore *arv){
	return arv->raiz;
}

void desaloca_no(No *no){
	if(no !=NULL){
		desaloca_no(no->esq);
		desaloca_no(no->dir);
		if(no!=NULL) free(no);
	}
}

void desaloca_arvore(TArvore *arv){
	No *no=arv->raiz;
	desaloca_no(no);
	if(arv!=NULL) free(arv); 
}



