
#include <iostream>
#include "PhysicalBooks.h"
using namespace std;

int main() {
	Book book1;
	book1.setBookDetails("Twilight", "AAAAA", "Alex", true);
	Book book2;
	book2.setBookDetails("Sapiens", "BBBBB", "Camila", true);
	Book book3;
	book3.setBookDetails("Harry Potter", "CCCCC", "Zin Ko", true);

	Book array[3];
	array[0] = book1;
	array[1] = book2;
	array[2] = book3;
	
	string isbnToBorrow = "";
	while (isbnToBorrow != "0") {
		cout << "Input the book's ISBN you want to borrow: ";
		cin >> isbnToBorrow;

		for (int i = 0; i < 3; i++)
		{
			if (array[i].isbn == isbnToBorrow) {
				if (array[i].borrowBook()) {
					cout << "Don't forget to return the book: " << array[i].title << endl;
					break;
				}
				else {
					cout << "The book is unavailable";
				}
			}
		}
	}

}

