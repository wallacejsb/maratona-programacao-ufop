#include<iostream>
#include <list>
 
using namespace std;
 
// Classe que representa um grafo direcionado
class Grafo
{
    int V;    				// Numero de vertices
    list<int> *adj;    // Ponteiro para um vetor com as listas de adjacencias
public:
    Grafo(int V);  		// Construtor
    void adicionaArestaDirecionada(int v, int w); // metodo para adicionar uma aresta direcionada ao grafo
    void adicionaArestaNaoDirecionada(int v, int w); // metodo para adicionar uma aresta nao direcionada ao grafo
    void BFS(int s);  				// imprime os vertices visitados pela BFS
};
 
Grafo::Grafo(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Grafo::adicionaArestaDirecionada(int v, int w)
{
    adj[v].push_back(w); // adiciona w na lista do v
}

void Grafo::adicionaArestaNaoDirecionada(int v, int w)
{
    adj[v].push_back(w); // adiciona w na lista do v
    adj[w].push_back(v); // e vicev-versa
}

 
void Grafo::BFS(int s)
{
    // marca todos os vertices como nao visitados
    bool *visitado = new bool[V];
    for(int i = 0; i < V; i++)
        visitado[i] = false;
 
    // Cria uma fila para a BFS
    list<int> fila;
 
    // marca o vertice atual como visitado e enfileira
    visitado[s] = true;
    fila.push_back(s);
 
    // 'i' sera utilizado para obtermos todos os vizinhos de um vertice
    list<int>::iterator i;
 
    while(!fila.empty())
    {
        // Desenfileira um vertice e imprime
        s = fila.front();
        cout << s << " ";
        fila.pop_front();
 
        // Obtem todo so vizinhos do vertice s
        // Se um vizinho ainda nao foi visitado, entao marca como visitado
        // e enfileira
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visitado[*i])
            {
                visitado[*i] = true;
                fila.push_back(*i);
            }
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

    cout << "Começando pelo vertice 1\n";
    g.BFS(0);
 
    return 0;
}
