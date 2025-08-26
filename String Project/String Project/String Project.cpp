#include <iostream>
using namespace std;

#include "Libraries\clsString.h";

int main()
{
	clsString string1;
	string1.value = "Mohammed Basher";

	cout << "String 1:" << endl;
	cout << "Value: " << string1.value << endl;
	cout << "Number of Words in \"" << string1.value << "\" is: " << string1.countWords() << endl;
	cout << "Number of Capital letters: " << string1.countCapitalLetters() << endl;
	cout << "Number of small letters: " << string1.countSmallLetters() << endl;
	cout << "Number of \'m\' character: " << string1.countCharacter('m', false) << endl;
	cout << "First letter: " << string1.getFirstLetterOfWord() << endl;
	cout << "First word: " << string1.getFirstWordFromText() << endl;
	cout << "================================" << endl;
	cout << endl;

	string1.replaceWordInString("Mohammed Basher", "Basher Abdullatif -.");
	cout << "String 2:" << endl;
	cout << "Value: " << string1.value << endl;
	string1.invertAllLettersCase();
	string1.printEachWordSeperatly(" - ");
	cout << endl;
	string1.trim();
	string1.removeAllPuncuations();
	string1.invertAllLettersCase();
	cout << "Value: " << string1.value << endl;


	return 0;

}
