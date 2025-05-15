#ifndef HARL_HPP
#define HARL_HPP

#include <string>


#define Res "\033[0m"
#define B "\033[30m"
#define R "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define Blue "\033[34m"
#define M "\033[35m"
#define C "\033[36m"
#define W "\033[37m"
#define Bold "\033[1m"
#define Under "\033[4m"


class Harl {

	public:
	
		Harl();
		~Harl();

		void complain(std::string level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif // !HARL_HPP
