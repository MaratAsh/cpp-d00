#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string.h>
# include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;

public:
    Contact(std::ostream &o_stream, std::istream &i_stream);
    Contact();
    ~Contact();
    void        createContact(std::ostream &, std::istream &);
    std::string &getFirstName();
    std::string &getLastName();
    std::string &getNickname();
    std::string &getPhoneNumber();
};

#endif
