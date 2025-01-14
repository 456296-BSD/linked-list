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
//	Last Edited: 1/14/2025
//
                                                   
#include "node.h"
#include <cstring>

void Add();
void Delete();
void Print();
void Average();

int main() {
	bool isRunning = true;
	while(isRunning) {
		char input[80];
		std::cout << "Enter Command. [PRINT, ADD, DELETE, AVG, QUIT]: ";
		std::cin >> input;

		if(strcmp(input, "ADD") == 0) {
			Add();	
		}
		if(strcmp(input, "PRINT") == 0) {
			Print();
		}
		if(strcmp(input, "DELETE") == 0) {
			Delete();
		}
		if(strcmp(input, "AVG") == 0) {
			Average();
		}
		if(strcmp(input, "QUIT") == 0) {
			return 0;
		}
		else {
			std::cout << "Bad Command" << std::endl;
		}
	}
}

void Add(Node* & head, Node* current, Node* n) {
	char f[80];
	char l[80];
       	int i;
	float g;

	std::cout << "Please Enter New Student Information: " << std::endl;
	std::cout << "First Name: ";
	std::cin >> f;
	std::cout << "Last Name: ";
	std::cin >> l;
	std::cout << "ID Number: ";
	std::cin >> i;
	std::cout << "GPA: ";
	std::cin >> g;

	Student* s = new Student(f, l, i, g);
}

void Delete() {

}

void Print() {

}

void Average() {

}

