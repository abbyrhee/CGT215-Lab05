// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//create cypher vector
vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
string text;

char translation(char character)
{
        if (character >= 65 && character <= 90)//is a capital letter
        {
            return cypher[character - 65];
        }
        else if (character >= 97 && character <= 122)//is a lower case letter
        {
            char upperCaseLetter = (character - 32);//converts the number to upper case number
            char upperCaseCode = cypher[upperCaseLetter - 65];//get upper case code
            return (upperCaseCode + 32);//convert code back to lower case
        }
        else//is not letter
        {
            return character;
        }
}

int main()
{
    cout << "Input text to cypher: ";
    getline(cin, text);

    //for-each loop to read elements
    for (char& character : text)
    {
        character = translation(character);
    }

    cout << "Encoded message: " << text << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
