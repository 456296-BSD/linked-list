// 	 _      _       _            _   _      _     _   
// 	| |    (_)     | |          | | | |    (_)   | |  
// 	| |     _ _ __ | | _____  __| | | |     _ ___| |_ 
// 	| |    | | '_ \| |/ / _ \/ _` | | |    | / __| __|
// 	| |____| | | | |   <  __/ (_| | | |____| \__ \ |_ 
// 	|______|_|_| |_|_|\_\___|\__,_| |______|_|___/\__|
//
//	Main class
//
//	By: Sawyer Scheve
//
//	Last Edited: 1/15/2025
//
                                                   
#include "node.h"
#include <cstring>

void Add(Node* & head, Node* current, Node* n);
void Delete();
void Print(Node* current);
void Average(Node* current);

int main() {
	bool isRunning = true;
	Node* head = NULL;
	while(isRunning) {
		char input[80];
		std::cout << "Enter Command. [PRINT, ADD, DELETE, AVG, QUIT]: ";
		std::cin >> input;

		if(strcmp(input, "ADD") == 0) {
			char f[80];
			char l[80];
			int num;
			float gpa;

			std::cout << "Input First Name: ";
			std::cin >> f;
			std::cout << "Input Last Name: ";
			std::cin >> l;
			std::cout << "Input ID: ";
			std::cin >> num;
			std::cout << "Input GPA: ";
			std::cin >> gpa;

			Student* s = new Student(f, l, num, gpa);
			Node* n = new Node(s);

			Add(head, head, n);	
		}
		else if (strcmp(input, "PRINT") == 0) {
			Print(head);
		}
		else if(strcmp(input, "DELETE") == 0) {
			Delete();
		}
		else if(strcmp(input, "AVG") == 0) {
			Average(head);
		}
		else if(strcmp(input, "QUIT") == 0) {
			return 0;
		}
		else {
			std::cout << "Bad Command" << std::endl;
		}
	}
}

void Add(Node* & head, Node* current, Node* n) {
	if(head == NULL) {
		head = n;
	}
	else if(current->GetNext() == NULL) {
		current->SetNext(n);
	}
	else if(head->GetStudent()->GetNum() > n->GetStudent()->GetNum()) {
		n->SetNext(head);
	}
	else if(current->GetStudent()->GetNum() < n->GetStudent()->GetNum()) {
		n->SetNext(current->GetNext());
		current->SetNext(n);
	}
	else {
		Add(head, current->GetNext(), n);
	}
}

void Delete() {

}

void Print(Node* current) {
	if(current != NULL) {
		std::cout << current->GetStudent()->GetFirst() << std::endl 
			<< current->GetStudent()->GetLast() << std::endl 
			<< current->GetStudent()->GetNum() << std::endl 
			<< current->GetStudent()->GetGpa() << std::endl << std::endl;
		Print(current->GetNext());
	}
}

void Average(Node* current) {
	float sum = 0;
	float students = 0;
	if(current != NULL) {
		while(current->GetNext() != NULL) {
			sum += current->GetStudent()->GetGpa();
			students++;
			current = current->GetNext();
		}
		sum += current->GetStudent()->GetGpa();
		students++;

		std::cout << sum / students << std::endl;
	}
}

