#include "Node.cpp"


void main() {
	Node::globalAcctCounter = 1;
	Node n1 = Node("Maor", 1000);
	Node n2 = Node("Yossi", 1000);
	Node n3 = Node("Shalom", 1000);

	print(n1);
	print(n2);
	print(n3);
}