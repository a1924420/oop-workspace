#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <tuple>
#include <vector>
#include <string>

class Member{

    private:

    std::string name;

    protected:

    std::string memberId;

    public:

    Member(const std::string& name, const std::string& memberId): name(name), memberId(memberId){}

    std::tuple<std::string, std::string> getMemberInfo() const{
        return std::make_tuple(name, memberId);
    }

};

#endif