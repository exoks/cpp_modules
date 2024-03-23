//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/23 18:02:04 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/23 18:06:16 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __PARSER_HPP__
# define __PARSER_HPP__

# include <sstream>
# include <iostream>
# include <string>
# include <fstream>
# include <map>
# include "Date.hpp"
# include "FSM.hpp"
# include "Exception.hpp"

namespace	prs
{

	template <class p1, class p2, int T1, int T2, char sep = '|'>
	class	KeyValueParser
	{
		private:
			std::string		fileName;
			std::fstream	fileStream;

		public:
			KeyValueParser(void);
			KeyValueParser(std::fstream fileStream);
			KeyValueParser(std::string fileName);
			~KeyValueParser(void);

			std::map<p1, p2>	parseFile(void);
			std::pair<p1, p2>	parseNextLine(void);
			bool				eof(void);
	};

	Date				parseDate(std::string date);
	bool				isValidDate(std::string date);

	std::string			trim(std::string str);

	int					parse(int value, std::string sValue);
	double				parse(double value, std::string sValue);
	std::string			parse(std::string value, std::string sValue);

# include "KeyValueParser.tpp"

};

#endif /*__PARSER_HPP__*/
