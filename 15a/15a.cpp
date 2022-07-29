//Samuel Bryan
//CIS 1202 800
//July 29th, 2022

#include <iostream>
#include <cctype>
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
        cout << "Offset: " << userInput.character(cInput, iInput) << "\n\n";
    }
    catch (RangeOffset::InvalidCharacter y) //Throws Invalid Character in the user doesn't enter a letter
    {
        cout << "Invalid Character Entry " << y.getA() << endl;
    }
    catch (RangeOffset::InvalidRange z) //Throws Invalid Interger if the user doesnt enter a whole number
    {
        cout << "Invalid Range " << z.getE() << endl;
    }
    system("pause");
    return 0;
}
char RangeOffset::character(char start, int offset) //Function to run the offset calculation
{
    RangeOffset rangeVerify;
    char target;
    target = offset + start;
    rangeVerify.setRange(target); //Verifies range of target before returning target
    return target;
}
void RangeOffset::setChar(char h)
{
    if ((h >= 'a' && h <= 'z') || (h >= 'A' && h <= 'Z')) //Verifies the users input is a letter
    {
        c = h;
    }
    else
    {
        throw InvalidCharacter(h); //Throws invalid character exception if the input is not a character
    }
}
void RangeOffset::setRange(char n) //Fix it
{
    if ((isupper(n) < 26) && (isupper(n) > -26) || ((islower(n) < 26) && (islower(n) > 26))) //Verifies the users input is within range
    {
        i = n;
    }
    else
    {
        throw InvalidRange(n); //Throws invalid range exception if there is an error
    }
}
