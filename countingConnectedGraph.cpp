#include <iostream>
using namespace std;

int G[100][100];

int maxVertex;

class Connected
{
private:
	bool visited[10000];
	int id[10000];
	int count;

public:
	Connected(int V)
	{
		for (int s = 0; s < V; s++)
		{
			if (!visited[s])
			{
				dfs(G, s);
				count++;
			}
		}
	}

	void dfs(int G[][100], int v)
	{
		visited[v] = true;
		id[v] = count;
		for (int u = 0; u < maxVertex; u++)
		{
			if (G[v][u] && !visited[u])
				dfs(G, u);
		}
	}

	int count()
	{
		return count;
	}

};


int main()
{
	int numOfVertex, numOfEdges;

	freopen("Graph.txt", "r", stdin);

	cin >> numOfVertex;
	cin >> numOfEdges;

	maxVertex = numOfVertex;
	
	int u, v;
	for (int i = 0; i < numOfEdges; i++)
	{
		cin >> v >> u;
		G[u][v] = G[v][u] = 1;

	}

	Connected graph(numOfVertex);

	cout << graph.count();
}