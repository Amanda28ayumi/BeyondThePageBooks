#pragma once
#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string author;
	string isbn;
	bool available;

	void setBookDetails(string title, string isbn, string author, bool available);
	void displayBookDetails();
	bool borrowBook();
	void returnBook();
};