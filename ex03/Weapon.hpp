#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon();

		std::string	getType( void );
		void		setType(std::string typeStr);

	private:
		std::string type;
};

#endif // !WEAPON_HPP
