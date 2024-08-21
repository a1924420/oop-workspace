#include <iostream>
#include <string>

using namespace std;

class Publication{

    protected:
        string title;
        string author;
        int year;

    public:
        Publication(string title, string author, int year) 
        : title(title), author(author), year(year) {}

        Publication() 
        : title("No Title"), author("No author"), year(0) {}

        void print() const{
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Year: " << year << endl;
        }
};

class Book: public Publication{

    private:
    string publisher;
    int num_pages;
    int ISBN;

    public:
    Book(string title, string author, int year, 
        string publisher, int pages, int ISBN) 
        : Publication(title, author, year),
        publisher(publisher), num_pages(pages), ISBN(ISBN) {}

    Book()
    : Publication(), publisher(" "), num_pages(0), ISBN(0){}

    void print() const{
        Publication::print();
        cout << "Pages: " << this->num_pages << endl;
        cout << "ISBN: " << this->ISBN << endl;
        cout << "Publisher: " << this->publisher << endl;
    }
};

int main(){

    Book b("OOP","Miki",2024,"Adl Uni",500,12345);
    b.print();

    return 0;
}
