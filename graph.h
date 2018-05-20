#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <list>
#include <string>

class Vertex {
private:
	std::string name;
public:
	Vertex(const std::string & _name);
	~Vertex();
};

class Edge {
private:
	Vertex *begin;
	Vertex *end;
public:
	Edge(Vertex & _begin, Vertex & _end);
	~Edge();
};

class Graph {
private:
	std::list<Edge> edges;
	std::list<Vertex> verticies;
public:
	Graph();
	Graph(Graph & _graph);
	~Graph();
	Graph & operator=(Graph & _graph);
	friend std::istream & operator>>(std::istream & is, Graph & _graph);
	friend std::ostream & operator>>(std::ostream & os, Graph & _graph);
	friend std::ofstream & operator<<(std::ofstream & ofs, std::list<Vertex> & _verticies);
	void show_begin(Vertex & _vertex);
	void show_end(Vertex & _vertex);
	Graph & push_vertex(Vertex & _vertex);
	Graph & push_edge(Edge & _edge);
	Graph & pop_vertex(Vertex & _vertex);
	Graph & pop_edge(Edge & _edge);
	Graph & rename_vertex(std::string & new_name);
};

#endif