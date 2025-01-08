// 	  _____ _             _            _         _     
// 	 / ____| |           | |          | |       | |    
// 	| (___ | |_ _   _  __| | ___ _ __ | |_      | |__  
// 	 \___ \| __| | | |/ _` |/ _ \ '_ \| __|     | '_ \
// 	 ____) | |_| |_| | (_| |  __/ | | | |_   _  | | | |
// 	|_____/ \__|\__,_|\__,_|\___|_| |_|\__| (_) |_| |_|                                                   
// 	
//	Student class declaration
//
//	By: Sawyer Scheve
//
//	Last Edited: 12/17/2024
//

#ifndef STUDNET_H
#define STUDENT_H

class Student {
private:
	char first[80];
	char last[80];
	int num;
	float gpa;
public:
	Student(char f[80], char l[80], int n, float g);

	char* GetFirst();
	char* GetLast();
	int GetNum();
	float GetGpa();
};

#endif
