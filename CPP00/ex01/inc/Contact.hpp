
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
	// Members
		std::string _detail[NUM];
	public:
	//Orthodox Canonical
	Contact()
	{
		for (int i = 0; i < NUM; i++)
			_detail[i] = "";
	}
	Contact(std::string arg)
	{
		_detail[FIRST] = arg;
		for (int i = 0; i < NUM; i++)
			_detail[i] = "";
	}
	Contact(const Contact& other)
	{
		for (int i = 0; i < NUM; i++)
			_detail[i] = other._detail[i];
	}
	Contact& operator=(const Contact& other)
	{
		if (this != &other)
		{
			for (int i = 0; i < NUM; i++)
				_detail[i] = other._detail[i];
		}
		return (*this);
	}
	~Contact() {};
	// Methods 
	void		setDetail(type field, std::string s) { _detail[field] = s; }
	std::string	getDetail(type field) { return _detail[field]; }

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
