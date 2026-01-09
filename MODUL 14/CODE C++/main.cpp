#include "graf.h"
#include "graf.cpp"
#include <iostream>
using namespace std;

int main(){

    Graph G;
    createGraph(G);

    InsertNode(G, 'A');
    InsertNode(G, 'B');
    InsertNode(G, 'C');
    InsertNode(G, 'D');

    ConnectNode(G, 'A', 'B');
    ConnectNode(G, 'A', 'C');
    ConnectNode(G, 'B', 'D');
    ConnectNode(G, 'C', 'Ex`');

    cout << "=== Struktur Graph ===\n";
    PrintInfoGraph(G);

    cout << "\n===DFS dari node A===\n";
    ResetVisited(G);
    PrintDFS(G, FindNode(G, 'A'));

    cout << "\n===DFS dari node A===\n";
    ResetVisited(G);
    PrintDFS(G, FindNode(G, 'A'));   
    
    cout<<endl;
    return 0;
}