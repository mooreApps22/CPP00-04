#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie
{
	private:
		std::string		_name;
	public:
		Zombie(const char *str = "") : _name(str) { }
		~Zombie() { }
		Zombie(const Zombie &other) : _name(other._name) { }
		Zombie& operator=(const Zombie &other)
		{
			if (this != &other)
				_name = other._name;
			return (*this);
		}
		std::string		getName() { return _name; }
};

#endif
