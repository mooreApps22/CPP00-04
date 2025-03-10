
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX 8

class Phonebook
{
	private:
		Contact contacts[MAX];
		int		_current;
	public:
		Phonebook() : _current(0) {};
		Phonebook(int current) : _current(current) {};
		Phonebook(const Phonebook &other) : _current(other._current) {};
		Phonebook &operator=(const Phonebook &other)
		{
			if (this != &other)		
				_current = other._current;
			return (*this);
		};
		~Phonebook() {};
		void	addContact(const Contact& contact);
		void	previewContacts(void);
		void	displayContactDetails(int i);
};

void	Phonebook::addContact(const Contact& contact)
{
	contacts[_current] = contact;
	_current = (_current + 1) % MAX;
}

std::string	segmenter(const std::string& f)
{
	if (f.length() > 9)
		return (f.substr(0, 9) + ".");
	return (f + std::string(10 - f.length(), ' '));
}

void	Phonebook::previewContacts(void)
{
	int	i = 0;

	while (i < MAX)
	{
		std::cout << "[" << i << "]" << "	|";
		std::cout << segmenter(contacts[i].getFirstName()) << "|";
		std::cout << segmenter(contacts[i].getLastName()) << "|";
		std::cout << segmenter(contacts[i].getNickname()) << " \n";
		i++;
	}
}

void	Phonebook::displayContactDetails(int i)
{
	std::cout << "\nCONTACT DETAILS\n";
	std::cout << "\tFirst Name: \t\t" << contacts[i].getFirstName() << "\n";
	std::cout << "\tLast Name: \t\t" << contacts[i].getLastName() << "\n";
	std::cout << "\tNickname: \t\t" << contacts[i].getNickname() << "\n";
	std::cout << "\tPhone Number: \t\t" << contacts[i].getPhoneNumber() << "\n";
	std::cout << "\tDarkest Secret: \t" << contacts[i].getDarkestSecret() << "\n";
}

#endif
