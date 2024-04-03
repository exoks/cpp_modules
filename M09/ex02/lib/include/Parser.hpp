//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/02 23:09:19 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/03 16:51:56 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

//====< KeyValueParser Class >==================================================
#ifndef __PARSER_HPP__
# define __PARSER_HPP__

//====< Includes >==============================================================
# include <sstream>
# include <iostream>
# include <string>
# include <fstream>
# include <map>
# include "Date.hpp"
# include "FSM.hpp"
# include "Exception.hpp"

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

		public:
			std::fstream	fileStream;

			KeyValueParser(void);
			KeyValueParser(std::fstream fileStream);
			KeyValueParser(std::string fileName);
			~KeyValueParser(void);

			std::map<p1, p2>	parseFile(void);
			std::pair<p1, p2>	parseNextLine(void);
			std::string			skipLine(void);
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

//====< Functions >=============================================================
	std::string		parse(std::string value, std::string sValue);
	int				parse(int value, std::string sValue);
	double			parse(double value, std::string sValue);

	std::string		trim(std::string str);
	std::string		getNextLine(std::istream & stream);
};

#endif /*__PARSER_HPP__*/
