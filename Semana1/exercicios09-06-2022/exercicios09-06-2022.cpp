#include<utility>
#include<vector>
#include<iostream>

using namespace std;

typedef pair<int, int> ii; // pares de inteiros
typedef vector<ii> vii; // vetor de pares de inteiros
typedef vector<int> vi; // vetor de inteiros

bool ehCompleto(int** MA, int n)
{
    bool completo = true;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i ; j<n ; j++)
        {
            if(i != j)
            {
                if(MA[i][j] != 1)
                {
                  completo = false;    
                }
            }
        }
    }
    // TO DO
    return completo;
}

int main()
{
    int n, m; // numero de vertices; numero de arestas do grafo

    cout <<"d" << endl;
    cin >> n >> m;

    int** M = new int*[n+1]; // matriz de adjacencia
    
    
    /**
    *cria a matriz
    */
 
    while(!cin.eof())
    {
      
      for(int i = 1; i <= n; i++)
      {
          M[i] = new int[n+1];
      }
  
      for(int u = 1; u <= n; u++)
      {
          for(int v = 1; v <= n; v++)
          {
              M[u][v] = 0;
          }
      }

      // leitura do grafo
      int u, v;
      for(int i = 0; i < m; i++)
      {
        cin >> u >> v; // lendo as arestas do grafo
        M[u][v] = 1;
      }
    
    }
    
    cout << ehCompleto(M,n) <<endl;
 
    for(int u = 0; u <= n; u++)
     {
        delete M[u];
     }
    delete[] M;
    return 0;
}