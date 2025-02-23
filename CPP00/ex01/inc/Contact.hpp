
#ifndef CONTACT_HPP
# define CONTACT_HPP

enum type
{
	FIRST,
	LAST,
	NICKNAME,
	PHONE_NUMBER,
	SECRET,
	NUM
};

class Contact
{
	private:
		std::string detail[NUM];
	public:

	// Default Constructor - gives default values
	Contact()
	{
		for (int i = 0; i < NUM; i++)
			detail[i] = "";
	}

	// Parameterized Constructor 
	Contact(std::string arg)
	{
		detail[FIRST] = arg;
		for (int i = 0; i < NUM; i++)
			detail[i] = "";
	}

	// Copy Constructor
	Contact(const Contact& other)
	{
		for (int i = 0; i < NUM; i++)
			detail[i] = other.detail[i];
	}

	// Assignment Operator
	Contact& operator=(const Contact& other)
	{
		if (this != &other)
		{
			for (int i = 0; i < NUM; i++)
				detail[i] = other.detail[i];
		}
		return (*this);
	}

	// Destructor
	~Contact()
	{
	}

	// Methods 
	void		setDetail(type field, std::string s) { detail[field] = s; }
	std::string	getDetail(type field) { return detail[field]; }

	void		setFirstName(std::string s) { setDetail(FIRST, s); }
	void		setLastName(std::string s) { setDetail(LAST, s); }
	void		setNickname(std::string s) { setDetail(NICKNAME, s); }
	void		setPhoneNumber(std::string s) { setDetail(PHONE_NUMBER, s); }
	void		setDarkestSecret(std::string s) { setDetail(SECRET, s); }
	std::string	getFirstName(void) { return getDetail(FIRST); }
	std::string	getLastName(void) { return getDetail(LAST); }
	std::string	getNickname(void) { return getDetail(NICKNAME); }
	std::string	getPhoneNumber(void) { return getDetail(PHONE_NUMBER); }
	std::string	getDarkestSecret(void) { return getDetail(SECRET); }
};

#endif
