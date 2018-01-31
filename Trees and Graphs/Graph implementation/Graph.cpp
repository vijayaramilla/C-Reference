# include<iostream>
# include "Graph.h"
# include<vector>
using namespace std;

Graph:: Graph(){

	vertices = vector<Node*>();
	//edges = new vector<Node*>;
}

void Graph::addNode(int data) {
	Node* n = new Node;
	n->data = data;
	n->list = vector<Node*>();

	this->vertices.push_back(n);
}

Node* Graph::find(int val) {
	if(isEmpty()) {
		return NULL;
	} else {
		for (Node* node: vertices) {
			if (node->data == val) {
				return node;
			}
		}
	}
	return NULL;

}
bool Graph::addEdge(int a, int b){
    Node* node1 = find(a);
    Node* node2 = find(b);
    if(node1 == NULL || node2 == NULL) {
    	return false;
    } else { 

    	node1->list.push_back(node2);
    	return true;
    }
	

}

bool Graph::isEmpty(){
	
	return vertices.empty();
	
}

void Graph::printGraph(){
	if(isEmpty()) cout<< "Graph is Empty";
	for(Node* node : vertices) {
		cout << node->data <<": ";
		for(Node* child : node->list) {
			cout << child->data << ", ";
		}
		cout << endl;
	}
}

void Graph::graphInitialiser() {
	for (Node* node : vertices) {
		node->marked = false;
	}
}

vector<Node*> Graph::getVertices(){
	return vertices;
}