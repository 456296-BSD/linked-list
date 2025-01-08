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
//	Last Edited: 1/8/2025
//
                                                   
#include "node.h"

void Add();
void Delete();
void Print();
void Quit();
void Average();

int main() {
	//Student* s = new Student();
	//Node* node = new Node(s);
	Add();
}

void Add() {
	char f[80];
	char l[80];
       	int n;
	float g;

	std::cout << "Please Enter New Student Information: " << std::endl;
	std::cout << "First Name: ";
	std::cin >> f;
	std::cout << "Last Name: ";
	std::cin >> l;
	std::cout << "ID Number: ";
	std::cin >> n;
	std::cout << "GPA: ";
	std::cin >> g;

	Student* s = new Student(f, l, n, g);
	
	Node n = new Node(s);
	
}

void Delete() {

}

void Print() {

}

void Quit() {

}

void Average() {

}

