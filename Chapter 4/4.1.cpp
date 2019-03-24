#include <bits/stdc++.h>
using namespace std;

class Graph{
  private:
    int numEdges;
    int numVertices;
    int **graph;
  public:
    Graph(int, int, list <  pair <int, int>  >);
    bool pathExists(int, int);
    void printGraph();
}

Graph :: Graph(int nEdges, int nVertices, list <pair <int, int>> edges){
  list <pair <int, int>> :: iterator it;
  numEdges = nEdges;
  numVertices = nVertices;
  graph = new int* [nVertices];
  for (int i = 0; i < nVertices; i++){
    graph[i] = new int[nVertices];
    for (int j = 0; j < nVertices; j++){
      graph[i][j] = 0;
    }
  }
  for (it = edges.begin(); it != edges.end(); it++){
    graph[it -> first][it -> second] = 1;
    graph[it -> second][it -> first] = 1;
  }
}

bool Graph :: pathExists(int vertex1, int vertex2){
  if (graph[vertex1][vertex2]){
    return true;
  }
  for (int i = 0; i < numVertices; i++){
    if (graph[i][vertex1] && pathExists(i, vertex2)){
      return true;
    }
  }
  return false;
}


void Graph :: printGraph(){
  for (int i = 0; i < numVertices; i++){
    for (int j = 0; j < numVertices; j++){
      cout << graph[i][j] << " ";
    cout << endl;
    }
  }
}


//check if tree is balanced

int height(Node *root){
    if (root == NULL)
        return 0;
    return 1 + max(height(root -> left), height(root -> right));
}
bool isBalanced(Node *root){
    if (root == NULL)
        return true;
    return abs(height(root -> left) - height(root -> right)) < 2  && isBalanced(root -> left) && isBalanced(root -> right);
    //  Your Code here
}

int main(){
  int vertex, edges;
  cin >> vertex >> edges;
  list <pair<int, int>> ed;
  for (int i = 0; i < edges; i++){
    int x, y;
    cin >> x >> y;
    ed.push_back(make_pair(x, y));
  }
  Graph g(edges, vertex, ed);
  g.printGraph();

}
