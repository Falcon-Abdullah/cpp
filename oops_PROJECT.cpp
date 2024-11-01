#include <iostream>
#include <cstring>
using namespace std;

// Create a library management system which is capable of issuing books to the students.
// book should have info like:

// book name
// book author
// issued to
// issued on

// user should be able to add, issue and return books

class book
{
public:
    string book_author = "None";
    string book_name = "None";
    string issued_to = "None";
    string issued_on = "None";

    void setName()
    {
        cout << "Enter book name: " << endl;
        getline(cin, book_name); // Use getline to allow spaces
    }

    void setAuthor()
    {
        cout << "Enter book author: " << endl;
        getline(cin, book_author); // Use getline to allow spaces
    }

    void setIssuedTo()
    {
        cout << "Enter name of person to whom the book is issued: " << endl;
        getline(cin, issued_to); // Use getline to allow spaces
    }

    void setIssuedOn()
    {
        cout << "Enter date of the book when it is issued (format: DD-MM-YY): " << endl;
        getline(cin, issued_on); // Use getline to allow spaces
    }

    void setData()
    {
        cout << "Enter name of the book: " << endl;
        getline(cin, book_name); // Use getline to allow spaces
        cout << "Enter name of person to whom the book is issued: " << endl;
        getline(cin, issued_to); // Use getline to allow spaces
        cout << "Enter date of the book when it is issued (format: DD-MM-YY): " << endl;
        getline(cin, issued_on); // Use getline to allow spaces
        cout << "Enter author name: " << endl;
        getline(cin, book_author); // Use getline to allow spaces
    }

    void getData()
    {
        cout << "The Name is: " << book_name << endl;
        cout << "The Author is: " << book_author << endl;
        cout << "Issued to:   " << issued_to << endl;
        cout << "Issued on:   " << issued_on << endl;
    }

    bool isEmpty()
    {
        return book_name == "None" && book_author == "None" && issued_to == "None" && issued_on == "None";
    }
};

class library : public book
{
    book availableBooks[100];
    book issuedBooks[100];
    int tot_issued_books = 0;
    int tot_available_books = 0;

public:
    void addBook()
    {
        book book;
        book.setName();
        book.setAuthor();
        availableBooks[tot_available_books] = book;
        tot_available_books++;
        cout << "\nThe book has been added." << endl;
    }

    void issueBook()
    {
        string nam;
        string author;
        cout << "\nEnter name of the book you want to issue: " << endl;
        getline(cin, nam);
        cout << "Enter author of this book: " << endl;
        getline(cin, author);
        bool isAvailable = false;
        int place = 0;
        for (int i = 0; i < tot_available_books; i++)
        {
            if (nam == availableBooks[i].book_name && author == availableBooks[i].book_author)
            {
                isAvailable = true;
                place = i;
                break;
            }
        }
        if (isAvailable)
        {
            issuedBooks[tot_issued_books] = availableBooks[place];
            issuedBooks[tot_issued_books].setIssuedTo(); 
            issuedBooks[tot_issued_books].setIssuedOn(); 
            tot_issued_books++;
            cout << "Book has been issued to customer." << endl;
            availableBooks[place] = book(); 
            cleanupBooks(availableBooks, tot_available_books);
        }
        else
        {
            cout << "Sorry! This book is not available in the library." << endl;
        }
    }

    void returnBook()
    {
        string nam;
        string author;
        cout << "\nEnter name of the book you want to return: " << endl;
        getline(cin, nam); // Use getline to allow spaces
        cout << "Enter author of this book: " << endl;
        getline(cin, author); // Use getline to allow spaces

        bool isAvailable = false;
        int place = 0;

        for (int i = 0; i < tot_issued_books; i++)
        {
            if (nam == issuedBooks[i].book_name && author == issuedBooks[i].book_author)
            {
                isAvailable = true;
                place = i;
                break;
            }
        }
        if (isAvailable)
        {
            book none;
            availableBooks[tot_available_books] = issuedBooks[place];
            tot_available_books++;
            cout << "Book has been returned to the library." << endl;
            issuedBooks[place] = none; 
            cleanupBooks(issuedBooks, tot_issued_books);
        }
        else
        {
            cout << "Sorry! This book is not in library." << endl;
        }
    }

    void showAvailableBooks()
    {
        cout << "\nThe available books are: " << endl;
        for (int i = 0; i < tot_available_books; i++)
        {
            if (!availableBooks[i].isEmpty())
            {
                cout << availableBooks[i].book_name << " | " << availableBooks[i].book_author << endl;
            }
        }
    }

    void showIssuedBooks()
    {
        cout << "\nThe issued books are: " << endl;
        for (int i = 0; i < tot_issued_books; i++)
        {
            if (!issuedBooks[i].isEmpty())
            {
                cout << issuedBooks[i].book_name << " | " << issuedBooks[i].book_author << " | " << issuedBooks[i].issued_to << " | " << issuedBooks[i].issued_on << endl;
            }
        }
    }

    // Cleanup function to remove "None" entries
    void cleanupBooks(book arr[], int &totalBooks)
    {
        int validCount = 0;
        for (int i = 0; i < totalBooks; i++)
        {
            if (!arr[i].isEmpty())
            {
                arr[validCount] = arr[i];
                validCount++;
            }
        }
        totalBooks = validCount;
    }
};

int main()
{
    library system;
    int choice;

    while (true)
    {
        // Display menu options
        cout << "\n!____Library Management System Menu___!" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Issue a book" << endl;
        cout << "3. Return a book" << endl;
        cout << "4. Show available books" << endl;
        cout << "5. Show issued books" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            system.addBook();
            break;

        case 2:
            system.issueBook();
            break;

        case 3:
            system.returnBook();
            break;

        case 4:
            system.showAvailableBooks();
            break;

        case 5:
            system.showIssuedBooks();
            break;

        case 6:
            cout << "Exiting the system. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
