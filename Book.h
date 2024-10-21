#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <tuple>
#include <vector>
#include <string>

#include "Member.h"

enum class BookStatus {
    available,
    borrowed
};

class Book{

    private:

    std::string title;

    std::string author;

    BookStatus status;

    public:

    Book(const std::string& title, const std::string& author): title(title), author(author), status(BookStatus::available) {}

    void borrowBook(){
        status = BookStatus::borrowed;
    }

    void returnBook(){
        status = BookStatus::borrowed;
    }

    std::pair<std::string, BookStatus> getInfo() const{
        return std::make_pair(title, status);
    }

};

#endif