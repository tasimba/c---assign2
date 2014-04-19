
#include "Node.h"

namespace CHRTAS004
{
// default constructor
Node::Node() {}

Node::Node(int numChildren) : numChildren(_numChildren) {};

Node::~Node() {
	for (int i=0; i < max_children; i++)
	{
		delete _array[i];
	}
}
Node* Node::add_node(const string node) {
  if (children < max_children) {
    ++children;
    _array[children - 1] = new Node(node);
  }
  return this;
}


/**
Node::Node(const Node & rhs) : name(rhs.name),surname(rhs.surname),studentNumber(rhs.studentNumber),classRecord(rhs.classRecord), token(tokenlib::acquire_token())   //copy
	{ 			}

	Node::Node(Node && rhs) : name(move(rhs.name)),surname(rhs.surname),studentNumber(rhs.studentNumber),classRecord(rhs.classRecord),token(rhs.token) //move
	{ rhs.token=-1; }

	Node & Node::operator=(const Node & rhs) {
	if(this != &rhs) { // Optimisation,                        // copy assignment operator
	name = rhs.name;
	surname = rhs.surname;
	studentNumber = rhs.studentNumber;
	classRecord = rhs.classRecord ;
	int new_token = tokenlib::acquire_token();
	if(token != -1) tokenlib::release_token(token);
	token = new_token;
	}
	return *this; // Return a reference
	}

	Node & Node::operator=(Node && rhs) {	// move assignment operator
	if(this != &rhs) { // Optimisation,
	name = std::move(rhs.name);
	surname = rhs.surname;
	studentNumber = rhs.studentNumber;
	classRecord = rhs.classRecord ;
	if(token !=-1) tokenlib::release_token(token);
	token = rhs.token;
	rhs.token = -1;
	}
	return *this; // Return a reference
	}



**/


}
