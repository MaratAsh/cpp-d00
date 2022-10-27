#include "Contact.hpp"


Contact::Contact(std::ostream &o_stream, std::istream &i_stream){
	o_stream << "Enter first name: ";
	i_stream >> first_name;
	o_stream << "Enter last name: ";
	i_stream >> last_name;
	o_stream << "Enter nickname: ";
	i_stream >> nickname;
	o_stream << "Enter phone number: ";
	i_stream >> phone_number;
}

Contact::Contact(){}

Contact::~Contact(){}

std::string &Contact::getFirstName() { return first_name; }
std::string &Contact::getLastName() { return last_name; }
std::string &Contact::getNickname() { return nickname; }
std::string &Contact::getPhoneNumber() { return phone_number; }

void    Contact::createContact(std::ostream &o_stream, std::istream &i_stream)
{
	o_stream << "Enter first name: ";
	i_stream >> first_name;
	o_stream << "Enter last name: ";
	i_stream >> last_name;
	o_stream << "Enter nickname: ";
	i_stream >> nickname;
	o_stream << "Enter phone number: ";
	i_stream >> phone_number;
}
