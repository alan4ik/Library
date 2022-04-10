#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <vector>
#include <Windows.h>

using namespace std;

struct BOOK
{
	string author;
	string name;
	string chapter;
	string publishing_house;
	string availability;
	string condition;
};

class LIBRARY
{
public:
	LIBRARY();
	const void getAllBook();
	const void getSectionBook();
	const void editing();
	const map<int, BOOK>& addBook();
	const map<int, BOOK>& deleteBook();
	const void saveFile();
	const void readFile();
	~LIBRARY();

private:
	map<int, BOOK> book;
	const void edBool(int& number_book);
	const void getAuthor();
	const void name();
	const void chapter();
	const void publishing_house();
	const void availability();
	const void condition();
};
