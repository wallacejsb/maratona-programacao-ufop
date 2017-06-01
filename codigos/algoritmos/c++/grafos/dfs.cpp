#include<iostream>
#include <list>
 
using namespace std;
 
// Classe que representa um grafo direcionado
class Grafo
{
    int V;    				// Numero de vertices
    list<int> *adj;    // Ponteiro para um vetor com as listas de adjacencias
    bool *visitado;
public:
    Grafo(int V);  		// Construtor
    void adicionaArestaDirecionada(int v, int w); // metodo para adicionar uma aresta direcionada ao grafo
    void adicionaArestaNaoDirecionada(int v, int w); // metodo para adicionar uma aresta nao direcionada ao grafo
    void DFS(int s);  				// imprime os vertices visitados pela BFS
    int proximoNaoVisitado();
};
 
Grafo::Grafo(int V)
{
    this->V = V;
    adj = new list<int>[V];

    // marca todos os vertices como nao visitados
    visitado = new bool[V];
    for(int i = 0; i < V; i++)
        visitado[i] = false;

}

int Grafo::proximoNaoVisitado()
{
    for(int i = 0; i < V; i++)
    	if(visitado[i] == false)
    		return i;

    return -1;
}

 
void Grafo::adicionaArestaDirecionada(int v, int w)
{
    adj[v].push_back(w); // adiciona w na lista do v
}

void Grafo::adicionaArestaNaoDirecionada(int v, int w)
{
    adj[v].push_back(w); // adiciona w na lista do v
    adj[w].push_back(v); // e vice-versa
}

 
void Grafo::DFS(int s)
{ 
    // 'i' sera utilizado para obtermos todos os vizinhos de um vertice
    list<int>::iterator i;
 
    visitado[s] = true;
    // desempilha um vertice e imprime
    cout << s << " ";
 
    // Obtem todo so vizinhos do vertice s
    // Se um vizinho ainda nao foi visitado, entao marca como visitado
    // e empilha
    for(i = adj[s].begin(); i != adj[s].end(); ++i)
    {
        if(!visitado[*i])
        {
            visitado[*i] = true;
            DFS(*i);
        }
    }
}
 
// Driver para testes 
int main()
{
    // Cria um grafo de exemplo
    Grafo g(7);

    g.adicionaArestaNaoDirecionada(0, 1);
    g.adicionaArestaNaoDirecionada(0, 2);
    g.adicionaArestaNaoDirecionada(1, 2);
    g.adicionaArestaNaoDirecionada(2, 3);
    g.adicionaArestaNaoDirecionada(2, 4);
    g.adicionaArestaNaoDirecionada(2, 5);
    g.adicionaArestaNaoDirecionada(2, 6);
    g.adicionaArestaNaoDirecionada(3, 4);

    cout << "Começando pelo vertice 0 no grafo não direcionado\n";
    g.DFS(0);
 

    // Cria um grafo de exemplo
    Grafo h(6);

    h.adicionaArestaDirecionada(0, 1);
    h.adicionaArestaDirecionada(0, 2);
    h.adicionaArestaDirecionada(1, 2);
    h.adicionaArestaDirecionada(2, 5);
    h.adicionaArestaDirecionada(3, 2);
    h.adicionaArestaDirecionada(3, 4);
    h.adicionaArestaDirecionada(4, 2);
    h.adicionaArestaDirecionada(5, 1);

    cout << "\nComeçando pelo vertice 0 no grafo direcionado\n";
    int inicio = h.proximoNaoVisitado();
    while(inicio>=0)
    {
    	h.DFS(inicio);
    	inicio = h.proximoNaoVisitado();
    }

    return 0;
}
