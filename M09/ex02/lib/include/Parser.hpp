//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/26 14:29:58 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/26 14:30:34 by oezzaou
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

//====< includes >==============================================================
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
//====< KeyValueParser class >==================================================
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

# include "KeyValueParser.tpp"

//====< PairParser class >======================================================
	template<class Container, class Unit, bool sortPair = false>
	class	PairParser
	{
		private:
			char	**av;
			int		ac;

		public:
			PairParser(int ac, char **av);
			~PairParser(void);

			Container	parse(void);
	};

# include "PairParser.tpp"

//====< functions >=============================================================
	Date		parseDate(std::string date);
	bool		isValidDate(std::string date);

	std::string	trim(std::string str);

};

#endif /*__PARSER_HPP__*/
