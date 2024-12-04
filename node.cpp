// 	 _   _           _                             
// 	| \ | |         | |                            
// 	|  \| | ___   __| | ___        ___ _ __  _ __  
// 	| . ` |/ _ \ / _` |/ _ \      / __| '_ \| '_ \
// 	| |\  | (_) | (_| |  __/  _  | (__| |_) | |_) |
// 	|_| \_|\___/ \__,_|\___| (_)  \___| .__/| .__/ 
// 	                                  | |   | |    
// 	                                  |_|   |_|   
// 	
// 	Node deffinition
//
// 	By: Sawyer Scheve
//
// 	Last Edited: 12/4/2024
//	

#include "node.h"

Node::Node(Student* s) {
	student = s;
}

Node::~Node() {
	delete student;
	next = nullptr;
}

Student* Node::GetStudent() {
	return student;
}

Node* Node::GetNext() {
	return next;
}

void Node::SetNext(Node* n) {
	next = n;
}
