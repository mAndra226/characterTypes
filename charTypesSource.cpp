#include "global.h"
int main()
{
	Alpha obj; //obj instantiation
	char selection = '\0'; 

	//this loop will continue to loop unless the user presses 'q'
	do
	{
		//gives the user a list to choose what they want the program to do
		cout << "Choose one of the options below"<< endl;
		cout << "(E)nter the sentence to process" << endl;
		cout << "(C)ount the letters and then display them" << endl;
		cout << "(Q)uit the program" << endl;
		cin >> selection;
		cin.ignore();

		system("CLS");

		switch (selection)
		{
		case 'E':
		case 'e':
		    obj.inputData(); //function call
			break;
		case 'C':
		case 'c':
			obj.countAndDisplay(); //function call
			break;
		case 'Q':
		case 'q':
			cout << "Closing the Program" << endl; 
			break;
		default:
			cout << "Invalid Input" << endl; 
		}//end switch

		system("pause");
		system("CLS"); //keeps screen clear
	} while (selection != 'Q' || selection !='q'); 
	return 0;
} //End main

//Initalizes countbuf array to zero
Alpha::Alpha()
{
	for (int i = 0; i < MAXC; i++)
	{
		countbuf[i] = 0;
	}
}

//This function will promp the user to enter a sentence
void Alpha::inputData()
{
	//prompts the user to enter a sentence
	cout << "Enter a sentence that contains numbers, lower and upper case letters (character limit is 132): " << endl;

	//stores in private variable
	cin.getline(inbuf, sizeof(inbuf));

	//Counts the actual characters 
	charCount = cin.gcount();
	charCount--; // prevents null from being counted
}

//Counts the numbers, character types, and handles the display of the result
void Alpha::countAndDisplay()
{
	short num = 0;

	//title of output
	cout << "Characters found in your sentence: " << endl;

	//This for loop will cycle throughout the sentence inputed by the user
	for (int arr = 0; arr < charCount; arr++)
	{

		//this if statement deals with lowercase letters: a-z, A-Z, 0-9
		if ((inbuf[num] >= 'a') && (inbuf[num] <= 'z'))
		{
			countbuf[inbuf[arr]]++;
		}

		if ((inbuf[num] >= 'A') && (inbuf[num] <= 'Z'))
		{
			countbuf[inbuf[arr]]++;
		}

		if ((inbuf[num] >= '0') && (inbuf[num] <= '9'))
		{
			countbuf[inbuf[arr]]++;
		}
	} //End for loop

	for (int count = '0'; count < MAXC; count++)
	{
		//this if statement deals with lowercase letters: a-z, A-Z, 0-9
		if ((count >= 'a') && (count <= 'z'))
		{
			cout << char(count) << "\t" << countbuf[count] << endl;
		}
		else if ((count >= 'A') && (count <= 'Z'))
		{ 
			cout << char(count) << "\t" << countbuf[count] << endl;
		}
		else if ((count >= '0') && (count <= '9'))
		{ 
			cout << char(count) << "\t" << countbuf[count] << endl;
		}
	}
} 