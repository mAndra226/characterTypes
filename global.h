/********************************************************************************************************************************
Homework Name: Character Types  
Name: Marco Andrade
Compilter: Visual Studio 2017
Description: This program will display the total number of characters including the number of uppercase, lowercase, and numbers.
Due Date: 4/23/19
********************************************************************************************************************************/
#ifndef global_Header
#define global_Header
#include <iostream>
using namespace std;

//Maximum size of arays
const short MAX = 132;
const short MAXC = 123;

class Alpha
{
	//Private array declaration 
	char inbuf[MAX];
	int countbuf[MAXC]; //empty array
	unsigned short charCount;
public:
	Alpha(); //constructor

	//member functions
	void inputData();
	void countAndDisplay();
};
#endif