# include<iostream>
#include<vector>

using namespace std;

struct Node {
	int data;
	vector<Node*> list;
	bool marked;
};

class Graph {
private:
	 vector<Node*> vertices;

public:
	Graph();
	void addNode(int);
	void deleteNode(int);
	bool addEdge(int, int);
	Node* find(int);
	bool isEmpty();
	void printGraph();
	vector<Node*> getVertices();
	void graphInitialiser();
};