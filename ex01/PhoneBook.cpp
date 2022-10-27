#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){index = 0;}
PhoneBook::~PhoneBook(){}

void    PhoneBook::addContact()
{
    contacts[index].createContact(std::cout, std::cin);
    index++;
    if (index == 8)
        index = 0;
}

void    PhoneBook::searchContact()
{
    if (contacts[0].getFirstName().empty())
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return ;
    }

    int i = printPhoneBook();
    int input;
    std::cout << "Enter index: ";
    std::cin >> input;

    if (input > 0 && input < i + 1)
    {
        std::cout << "Firstname: " << contacts[input - 1].getFirstName() << std::endl;
        std::cout << "Lastname: " << contacts[input - 1].getLastName() << std::endl;
        std::cout << "Nickname: " << contacts[input - 1].getNickname() << std::endl;
        std::cout << "Phone number: " << contacts[input - 1].getPhoneNumber() << std::endl;
    }
    else
        std::cout << "Invalid index" << std::endl;
}

void    PhoneBook::printW10(std::string &s)
{
    if (s.length() > 10)
        std::cout << s.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << s << "|";
}

int PhoneBook::printPhoneBook()
{
    std::cout << "+-------------------------------------------+" << std::endl;
    std::cout << "|   Index  | Firstname| Lastname | Nickname |" << std::endl;
    std::cout << "+-------------------------------------------+" << std::endl;

    int i;
    for (i = 0; i < 8; i++)
    {
        if (contacts[i].getFirstName().empty())
            break;
        std::cout << "|" << std::setw(7) << i + 1 << "   |";
        printW10(contacts[i].getFirstName());
        printW10(contacts[i].getLastName());
        printW10(contacts[i].getNickname());
        std::cout << std::endl;
    }
    std::cout << "+-------------------------------------------+" << std::endl;
    return i;
}
