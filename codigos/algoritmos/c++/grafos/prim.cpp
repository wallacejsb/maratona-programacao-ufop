#include <iostream>
#include <vector>
using namespace std;

class Grafo
{
public:
    Grafo();
    Grafo(int vertices);
  	 void adicionaArestaDirecionada(int v, int w, int p);
 	 void adicionaArestaNaoDirecionada(int v, int w, int p);
    vector< vector<int> > prim();
private:
    const int INF = 999;
    int V; //numero de vertices
    vector< vector<int> > adj; //matriz de adjacencias
};

Grafo::Grafo()
{
 
}
 
Grafo::Grafo(int vertices)
{
    this->V = vertices;
        this->adj = vector< vector<int> > (V);
 
        for(int i = 0; i < V; i++)
            adj[i] = vector<int> (V, INF);
}

void Grafo::adicionaArestaDirecionada(int v, int w, int p)
{
	adj[v][w] = p;
}

void Grafo::adicionaArestaNaoDirecionada(int v, int w, int p)
{
	adj[v][w] = p;
	adj[w][v] = p;
}

vector< vector<int> > Grafo :: prim(){
    vector< vector<int> > adj = this->adj;
    vector< vector<int> > arvore(V);
    vector<int> markedLines;
    vector<int> :: iterator itVec;
 
    for(int i = 0; i < V; i++)
        arvore[i] = vector<int> (V, INF);
 
    int pai = 0;
    int filho = 0;

    while(markedLines.size() + 1 < V){
        pai = filho;
        markedLines.push_back(pai);
        for(int i = 0; i < V; i++)
            adj[i][pai] = INF;
 
        int min = INF;
        for(itVec = markedLines.begin(); itVec != markedLines.end(); itVec++)
            for(int i = 0; i < V; i++)
                if(min > adj[*itVec][i]){
                    min = adj[*itVec][i];
                    pai = *itVec;
                    filho = i;
                }
 
        arvore[pai][filho] = min;
    }
    return arvore;
}

int main(int argc, char *argv[]) {
	Grafo g(7);

	g.adicionaArestaDirecionada(0, 1, 1);
	g.adicionaArestaDirecionada(0, 2, 3);
	g.adicionaArestaDirecionada(1, 2, 1);
	g.adicionaArestaDirecionada(1, 3, 1);
	g.adicionaArestaDirecionada(1, 4, 4);
	g.adicionaArestaDirecionada(2, 3, 3);
	g.adicionaArestaDirecionada(2, 4, 2);
	g.adicionaArestaDirecionada(3, 4, -2);
	g.adicionaArestaDirecionada(3, 5, 1);
	g.adicionaArestaDirecionada(4, 5, 2);
	
	vector< vector<int> > arvoreGeradora = g.prim();
	int custo = 0;
	
	for(int i=0; i<arvoreGeradora.size(); i++)
		for(int j=0; j<arvoreGeradora[i].size(); j++)
			if (arvoreGeradora[i][j] != 999)
			{
				cout<< i+1<<" "<<j+1<<" "<<arvoreGeradora[i][j]<<endl;
				custo+=arvoreGeradora[i][j];
			}
			cout<< "Custo "<<custo<<endl;
}