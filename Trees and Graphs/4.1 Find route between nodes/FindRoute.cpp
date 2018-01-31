#include "Graph.h"
#include<iostream>
#include<vector>
#include<queue>
#include <locale>
#include <sstream>

using namespace std;


bool checkRoute(Graph &g, int a, int b) {
	g.graphInitialiser();
	Node* parent = g.find(a);
	queue<Node*> q = queue<Node*>();
    
    parent->marked = true;
	q.push(parent);

	while(! q.empty()) {
		Node* node = q.front();
		q.pop();
		if(node->data == b) {
				return true;
		} else {
			for (Node* child : node->list) {
				if(! child->marked){
					child->marked = true;
					q.push(child);
				}
			}
		}
	}
	return false;
}

int main(){

	Graph g = Graph();
	g.addNode(1);
	g.addNode(2);

	g.addEdge(1,2);

	g.addNode(3);
	g.addNode(4);
	g.addNode(5);
	g.addNode(6);
	g.addNode(7);

	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(4,6);	

	g.printGraph();

	bool res = checkRoute(g, 1, 7);

	cout<< res << endl;
	return 0;
}