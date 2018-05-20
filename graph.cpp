#include <iostream>
#include <list>
#include <string>
#include "graph.h"

//Vertex

Vertex::Vertex(const std::string & _name) {
	name = _name;
}

Vertex::~Vertex() {}

//Edge

Edge::Edge(Vertex & _begin, Vertex & _end) {
	begin = &_begin;
	end = &_end;
}

Edge::~Edge() {}

//Graph

Graph::Graph() {}

Graph::Graph(Graph & _graph) {
	edges = _graph.edges;
	verticies = _graph.verticies;
}

Graph::~Graph() {}

Graph & Graph::operator=(Graph & _graph) {
	edges = _graph.edges;
	verticies = _graph.verticies;
	return *this;
}

std::istream & operator>>(std::istream & ifs, Graph & _graph) {
	is >> 
	return is;
}