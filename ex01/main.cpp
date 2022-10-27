#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   phoneBook;
    std::string input;

    std::cout << "Available commands: ADD, SEARCH, EXIT." << std::endl;
    while (1)
    {
		std::cout << "> ";
        std::cin >> input;
        if (input == "ADD")
            phoneBook.addContact();
        else if (input == "SEARCH")
            phoneBook.searchContact();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Bad input, please try again" << std::endl;
    }
    return 0;
}
