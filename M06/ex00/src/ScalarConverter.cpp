//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀     𓐓  ScalarConverter.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/12/23 20:45:53 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/26 12:06:16 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "ScalarConverter.hpp"

//====< convert >===============================================================
void	ScalarConverter::convert(std::string input)
{
	void	(*fun[4])(std::string, int) = {toChar, toInt, toFloat, toDouble};
	int		type;

	type = FSM::detectType(input);
	for (int index = 0; index < 4; index++)
		fun[index](input, type);
}

//====< toChar >================================================================
void	toChar(std::string input, int type)
{
	double				container;

	container = strtod(input.c_str(), NULL);
	std::cout << "Char   : ";
	if (type < CHAR || type > DOUBLE || container < 0 || container > 127)
		std::cout << "impossible";
	else if (type == CHAR)
		std::cout << "'" << input << "'";
	else if ((container >= 0 && container < 32) || container == 127)
		std::cout << "non displayable";
	else if (container >= 32 && container <= 126)
		std::cout << "'" << static_cast<char>(container) << "'";
	std::cout << std::endl;
}

//====< toInt >=================================================================
void	toInt(std::string input, int type)
{
	double				tmp;

	std::cout << "Int    : ";
	tmp = strtod(input.c_str(), NULL);
	if (type == CHAR)
		std::cout << static_cast<int>(input[0]);
	else if (type >= INT && type <= DOUBLE && tmp >= INT_MIN && tmp <= INT_MAX)
		std::cout << static_cast<int>(tmp);
	else	
		std::cout << "impossible"; 
	std::cout << std::endl;	
}

//====< toDouble >==============================================================
void	toDouble(std::string input, int type)
{
	double				container;

	std::cout << "Double : ";
	container = strtod(input.c_str(), NULL);
	if (type == CHAR)
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(input[0]);
	else if (type >= CHAR && type <= DOUBLE)
		std::cout << std::fixed << std::setprecision(1) << container;
	else if (type == STRING && (input == "+inf" || input == "+inff"))
		std::cout << "+inf";
	else if (type == STRING && (input == "-inf" || input == "-inff"))
		std::cout << "-inf";
	else if (type == STRING && (input == "nan" || input == "nanf"))
		std::cout << "nan";
	else
		std::cout << "nan";
	std::cout << std::endl;
}

//====< toDouble >==============================================================
void	toFloat(std::string input, int type)
{
	double				container;

	std::cout << "Float  : ";
	container = strtod(input.c_str(), NULL);
	if (type == CHAR)
		std::cout << std::fixed << std::setprecision(1)
							<< static_cast<double>(input[0]) << "f";
	else if (type >= CHAR && type <= DOUBLE)
		std::cout << std::fixed << std::setprecision(1) << container << "f";
	else if (type == STRING && (input == "+inf" || input == "+inff"))
		std::cout << "+inff";
	else if (type == STRING && (input == "-inf" || input == "-inff"))
		std::cout << "-inff";
	else if (type == STRING && (input == "nan" || input == "nanf"))
		std::cout << "nanf";
	else
		std::cout << "nanf";
	std::cout << std::endl;
}
