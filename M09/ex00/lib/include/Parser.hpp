//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 22:27:32 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/19 22:27:32 by oezzaou
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

namespace	prs
{

	template <class p1, class p2, char sep = '|'>
	class	KeyValueParser
	{
		private:
			std::string		fileName;
			std::fstream	fs;

		public:
			KeyValueParser(void);
			KeyValueParser(std::fstream fs);
			KeyValueParser(std::string fileName);
			~KeyValueParser(void);
		
			std::map<p1, p2>	parseFile(void);
			std::pair<p1, p2>	parseNextLine(void);
			bool				eof(void);
	};

	Date		parseDate(std::string date);
	bool		isValidDate(std::string date);
	
	std::string	trim(std::string str);

# include "KeyValueParser.tpp"

};

#endif /*__PARSER_HPP__*/
