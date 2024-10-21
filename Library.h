#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "Book.h"
#include "Member.h"

class Library{

    private:

    std::vector<Book> books;

    std::vector<Member> members;

    public:

    void addBook(const Book& book){

        books.push_back(book);

    }

    void addMember(const Member& member){

        members.push_back(member);
    }

    void borrowBook(const std::string& title, const std::string& memberId){

        bool memberExists = false;
        for (const auto& member: members){
            if (std::get<1>(member.getMemberInfo()) == memberId){
                memberExists = true;
                break;
            }
        }

        if (!memberExists){
            std::cout << "Member ID '" << memberId << "' does not exist." << std::endl;
            return;
        }

        bool bookFound = false;

        for (int i = 0; i < books.size(); i++){

            if (books[i].getInfo().first == title){
                bookFound = true;
                if (books[i].getInfo().second == BookStatus::available){
                    books[i].borrowBook();
                    std::cout << "The book " << title << " has been borrowed successfully." << std::endl;
                } else {
                    std::cout << "The book " << title << " is not currently available." << std::endl;
                    return;
                }
            }
        }

        if (!bookFound) {
            std::cout << "The book " << title << " was not found in the library." << std::endl;
        }
    }

    void returnBook(const std::string& title){

        for (int i = 0; i < books.size(); i++){

            if (books[i].getInfo().first == title){
                if (books[i].getInfo().second == BookStatus::borrowed){
                    books[i].returnBook();
                    std::cout << "The book " << title << " has been returned successfully." << std::endl;
                } else {
                    std::cout << "The book " << title << " is not currently borrowed." << std::endl;
                }
            }
            return;
        }
        std::cout << "The book " << title << " was not found in the library." << std::endl;
    }

};

#endif