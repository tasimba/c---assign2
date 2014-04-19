
#ifndef NODE_H_
#define NODE_H_
#include <string>


namespace CHRTAS004
{
class Node {

private:
	int numChildren;               // count of available children inserted
	int inserted
	int max_children;
	std::string _value;
	Node* _array[max_children] ;

public:
	Node();   //default constructor
	Node(int numChildren);
	virtual ~Node();  // destructor
	Node(const Node & rhs); //copy constructor
	Node(Node && rhs) ;     //move constructor
	Node & operator=(const Node & rhs) ;         //copy assignment operator
	Node & operator=(Node && rhs) ;   			//move assignment operator
	virtual void to_string(std::stringstream & rf );

	int child_count () const {return numChildren ;} ;
	Node* add_node (const string node) ;
};
}
#endif /* NODE_H_ */
