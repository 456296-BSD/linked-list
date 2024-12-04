// 	 _   _           _            _     
// 	| \ | |         | |          | |    
// 	|  \| | ___   __| | ___      | |__  
// 	| . ` |/ _ \ / _` |/ _ \     | '_ \
// 	| |\  | (_) | (_| |  __/  _  | | | |
// 	|_| \_|\___/ \__,_|\___| (_) |_| |_|
//
// 	Node declaration and instructions
//
// 	By: Sawyer Scheve
//
// 	Last Edited: 12/4/2024
//

// Make sure to put a header guard on your "student" class and call the file "student.h" otherwise everything will break.
#include "student.h"
#include <iostream>

class Node {
private:
	Student* student; // The student data.
	Node* next = NULL; // The next node in the list.
public:
	Node(Student* s); // Don't set "s" this to null it will break things.
	~Node();
	
	Student* GetStudent(); // Returns a pointer to "student".

	Node* GetNext(); // Returns a pointer to the next node in the list. 
			 // Please check that "next" is not equal to null before calling this for your own sake.
	void SetNext(Node* n); // When you create the node "next" will automatically be set to null.
			       // Make sure to set "next" for the previous node when you add a new node to the list.
};
