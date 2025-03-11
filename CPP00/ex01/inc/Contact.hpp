#ifndef CONTACT_HPP
# define CONTACT_HPP

enum	type
{
	FIRST,
	LAST,
	NICKNAME,
	PHONE,
	SECRET,
	NUM
};

class	Contact
{
	private:
		std::string	_detail[NUM];
	public:
		Contact()
		{
			for (int i = 0; i < NUM; i++)
				_detail[i] = "";
		}
		Contact(const Contact& other)
		{
			for (int i = 0; i < NUM; i++)
				_detail[i] = other._detail[i];
		}
		~Contact() {}

		void		setDetail(type field, std::string str) { _detail[field] = str; }
		std::string	getDetail(type field) { return _detail[field]; }

		void		setFirst(std::string str) { setDetail(FIRST, str ); }	
		void		setLast(std::string str) { setDetail(LAST, str); }	
		void		setNickname(std::string str) { setDetail(NICKNAME, str); }	
		void		setPhone(std::string str) { setDetail(PHONE, str); }	
		void		setSecret(std::string str) { setDetail(SECRET, str); }	
		std::string	getFirst(void) { return getDetail(FIRST); }
		std::string	getLast(void) { return getDetail(LAST); }
		std::string	getNickname(void) { return getDetail(NICKNAME); }
		std::string	getPhone(void) { return getDetail(PHONE); }
		std::string	getSecret(void) { return getDetail(SECRET); }
};

#endif
