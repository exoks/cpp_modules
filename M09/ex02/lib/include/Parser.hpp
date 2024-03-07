//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/07 16:33:41 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/07 16:33:41 by oezzaou
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
# include <vector>

//====< Types >=================================================================
typedef enum	e_type
{
	POSITIVE,
	NEGATIVE,
	MIXED
}				Type;

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
	template<class Container, class Unit, int type = MIXED, bool sortPair = false>
	class	PairParser
	{
		private:
			char	**av;
			int		ac;

		public:
			PairParser(int ac, char **av);
			~PairParser(void);

			Container	parseArgs(void);
	};

# include "PairParser.tpp"

//====< functions >=============================================================
	Date		parseDate(std::string date);
	bool		isValidDate(std::string date);

	std::string	trim(std::string str);

};

#endif /*__PARSER_HPP__*/
