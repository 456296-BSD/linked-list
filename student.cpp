// 	  _____ _             _            _                          
// 	 / ____| |           | |          | |                         
// 	| (___ | |_ _   _  __| | ___ _ __ | |_        ___ _ __  _ __  
// 	 \___ \| __| | | |/ _` |/ _ \ '_ \| __|      / __| '_ \| '_ \
// 	 ____) | |_| |_| | (_| |  __/ | | | |_   _  | (__| |_) | |_) |
// 	|_____/ \__|\__,_|\__,_|\___|_| |_|\__| (_)  \___| .__/| .__/ 
// 	                                                 | |   | |    
// 	                                                 |_|   |_|    
//
//	Student class deffinition
//
//	By: Sawyer Scheve
//
//	Last Edited: 12/17/2024
//

#include "student.h"
#include <cstring>

Student::Student(char f[80], char l[80], int n, float g) {
	strcpy(first, f);
	strcpy(last, l);
	num = n;
	gpa = g;
}

char* Student::GetFirst() {
	char* f = first;
	return f;
}

char* Student::GetLast() {
	char* l = last;
	return l;
}

int Student::GetNum() {
	return num;
}

float Student::GetGpa() {
	return gpa;
}
