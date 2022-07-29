//Samuel Bryan
//CIS 1202 800
//July 29th, 2022

#include <iostream>
#include "Offset.h"

using namespace std;

int main()
{
    char cInput;
    int iInput;
    RangeOffset userInput; //Object to access class functions
    cout << "Enter a letter: ";
    cin >> cInput; //Gets user char input
    cout << "Enter a whole number: ";
    cin >> iInput; //Gets user int input
    try
    {
        userInput.setChar(cInput);
        userInput.setInt(iInput);
        cout << "Offset: " << userInput.character(cInput, iInput) << "\n\n";
    }
    catch (RangeOffset::InvalidCharacter) //Throws Invalid Character in the user doesn't enter a letter
    {
        cout << "Invalid entry" << endl;
    }
    catch (RangeOffset::InvalidInterger) //Throws Invalid Interger if the user doesnt enter a whole number
    {
        cout << "Invalid Entry" << endl;
    }
    system("pause");
    return 0;
}

char RangeOffset::character(char start, int offset)
{

    return start, offset;
}
void RangeOffset::setChar(char h)
{
    if (h >= 'a' && h <= 'z' || (h >= 'A' && h <= 'Z')) //Verifies the users input is a letter
    {
        c = h;
    }
    else
    {
        throw InvalidCharacter();
    }
}
void RangeOffset::setInt(int n)
{
    if (isdigit(n) == true) //Verifies the users input is a whole number
    {
        i = n;
    }
    else
    {
        throw InvalidInterger();
    }
}
