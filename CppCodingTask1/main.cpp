#include <iostream>
#include "Book.h"
#include "Member.h"
using namespace std;

int main()
{
Book books[3];
Book b1("The Lord of the Rings", "J.R.R. Tolkien", "978-0-395-47571-6");
Book b2("Spiderman", "Sam Raimi", "312-0-432-23131");

books[0] = b1;
books[1] = b2;
cout << "Books are: " << endl;
 for (int i = 0; i < 2; i++) {
    books[i].display();
  }

Member members[2];
Member m1("Ivan", 17, "1234565");
Member m2("Georgi", 23, "8765444");
members[0] = m1;
members[1] = m2;
cout << "Members are: " << endl;
for (int i = 0; i < 2; i++) {
    members[i].display();
  }
m1.borrowBook(&b1);
m2.borrowBook(&b2);

    return 0;
}
