//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########< PairParser.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/03 22:01:39 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/03 22:44:18 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

//====< constructor >===========================================================
template<class Container, class Unit, int type, bool sortPair>
PairParser<Container, Unit, type, sortPair>::PairParser(int ac, char **av)
{
	this->ac = ac;
	this->av = av;
}

//====< destructor >============================================================
template<class Container, class Unit, int type, bool sortPair>
PairParser<Container, Unit, type, sortPair>::~PairParser(void)
{
}

//====< parser >================================================================
template<class Container, class Unit, int type, bool sortPair>
Container	PairParser<Container, Unit, type, sortPair>::parseArgs(void)
{
	Container			container;
	Unit				unit;
	int					*tmp;

	if (ac == 1)
		throw (Exception("Error: No arguments provided"));	
	for (int i = 1; i < ac; i += 2)
	{
		unit = Unit();
		tmp = (int[2]){-1, -1};
	
		for (int j = 0; j < 2 && av[i + j] != NULL; j++)
		{
			if (FSM::detectType(av[i + j]) != INT)
				throw (Exception("Error: invalid argument"));
			if (!(std::stringstream(av[i + j]) >> tmp[j]))
				throw (Exception("Error: too large number"));
			if (type == POSITIVE && tmp[j] < 0)
				throw (Exception("Error: negative argument"));
			if (sortPair == true && j == 1 && tmp[0] > tmp[1])
				std::swap(tmp[0], tmp[1]);
		
			///if (sortPair == true && j == 1)
			//	std::cout << "+0" << std::endl;
		}
		unit.push_back(std::pair<int, int>(tmp[0], tmp[1]));
		container.push_back(unit);
	}
	return (container);
}
