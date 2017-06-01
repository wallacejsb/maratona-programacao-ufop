#include <iostream>

using namespace std;

int exponencial(int a,int n){
  if(n==1)
  return a;
  else{
   if(n%2==0)
  return  exponencial(a,n/2) * exponencial(a,n/2);
    else
    return a*exponencial(a,n/2) * exponencial(a , n/2);
  }
}

int maior_elemento(int v[],int maior,int menor){
  if(maior - menor <= 1){
    return (maior>menor) ? v[maior] :  v[menor];
  }else{
    int medio = (maior+menor)/2;
    int valor1 = maior_elemento(v,medio,menor);
    int valor2 = maior_elemento(v,maior,medio+1);
    return (valor1>valor2) ? valor1 : valor2;
  }
}

int busca_binaria(int v[],int menor,int maior,int elemento){
  if(menor>maior) return -1;
    int media = (menor+maior)/2;
    if(v[media] > elemento){
        busca_binaria(v,media+1,maior,elemento);
    }else if(v[media] < elemento){
        busca_binaria(v,menor,media,elemento);
    }else{
      return v[media];
    }
  }

int main(int argc, char const *argv[]) {
  cout <<exponencial(3,2)<<endl;
  cout <<exponencial(2,6)<<endl;
  int v[6] = {0,1,2,3,4,5};
  cout<<maior_elemento(v ,4,1)<<endl;

  cout<<busca_binaria(v ,1,5,4)<<endl;
  return 0;
}
