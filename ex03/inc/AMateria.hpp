#pragma once
#include <iostream>
#include "AMateria.hpp"

class ICharacter;

class	AMateria // Abstract Class 
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& other);
		AMateria&	operator=(const AMateria& other);
		virtual ~AMateria() {}
		
		virtual std::string const & getType(void) const;

		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
