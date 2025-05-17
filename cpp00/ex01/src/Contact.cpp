#include "../inc/data.h"
#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

Contact::Contact() {}

Contact::Contact(const Contact& other)
{
	for (int i = 0; i < NUM; i++)
		_detail[i] = other._detail[i];
}

Contact::~Contact() {}

void		Contact::setDetail(type field, std::string str) { _detail[field] = str; }
std::string	Contact::getDetail(type field) { return _detail[field]; }

void		Contact::setFirst(std::string str) { setDetail(FIRST, str ); }	
void		Contact::setLast(std::string str) { setDetail(LAST, str); }	
void		Contact::setNickname(std::string str) { setDetail(NICKNAME, str); }	
void		Contact::setPhone(std::string str) { setDetail(PHONE, str); }	
void		Contact::setSecret(std::string str) { setDetail(SECRET, str); }	
std::string	Contact::getFirst(void) { return getDetail(FIRST); }
std::string	Contact::getLast(void) { return getDetail(LAST); }
std::string	Contact::getNickname(void) { return getDetail(NICKNAME); }
std::string	Contact::getPhone(void) { return getDetail(PHONE); }
std::string	Contact::getSecret(void) { return getDetail(SECRET); }
