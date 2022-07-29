//Samuel Bryan
//CIS 1202 800
//July 29th, 2022
#include <iostream>
#include <cctype>

#ifndef OFFSET_H
#define OFFSET_H

using namespace std;

class RangeOffset
{
private:
	char c; //Saves character 
	int i; //Saves int offset
public:
	class InvalidCharacter //Exception class for invalid character
	{
	private:
		char a;
	public:
		InvalidCharacter(char r)
		{
			a = r;
		}
		char getA() const
		{
			return a;
		}
	};
	class InvalidRange //Exception class for invalid interger
	{
	private:
		int t;
	public:
		InvalidRange(int e) //Constructor
		{
			t = e;
		}
		int getE() const
		{
			return t;
		}
	};
	RangeOffset() //Constructor
	{
		i = 0;
		c = 'a';
	}
	char character(char, int); //Runs the offsetting
	void setChar(char); //Mutator function to set character
	void setRange(char); //Mutator function to set range
	char getChar() const //Accesor function to get character
	{
		return c;
	}
	char getRange() const //Accesor function to get range
	{
		return i;
	}
};
#endif