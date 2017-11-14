#include "Node.h"
#include<iostream>

using namespace std;

Node::Node(char *name, double balance) {
	globalAcctCounter++;
	*_custName = *name, _balance = balance, _acctNumber = getAN(); 
}

void Node::setBalance(double balance) { 
	_balance = balance;
}

double Node::getBalance() {
	return _balance;
}

void print(Node n) {
	cout << n._custName << " " << n._balance;
}

long Node::getAN() {
	//return Node::globalAcctCounter++;
	return 0;
}