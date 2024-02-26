//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########< PairParser.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/26 14:17:06 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/26 15:07:01 by oezzaou
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
template<class Container, class Unit, bool sortPair>
PairParser<Container, Unit, sortPair>::PairParser(int ac, char **av)
{
	this->ac = ac;
	this->av = av;
}

//====< destructor >============================================================
template<class Container, class Unit, bool sortPair>
PairParser<Container, Unit, sortPair>::~PairParser(void)
{
}

//====< parser >================================================================
template<class Container, class Unit, bool sortPair>
Container	PairParser<Container, Unit, sortPair>::parse(void)
{
	Container	container;
	int			tmp[2];

	if (ac == 1)
		throw (Exception("mergeInsertion: No arguments provided"));	
	for (int i = 1; i < ac; i += 2)
	{
		Unit	unit;
		for (int j = 0; j < 2 && i + j < ac; j++)
		{
			if (FSM::detectType(av[i + j]) != INT)
				throw (Exception("mergeInsertion: invalid argument"));
			std::stringstream(av[i + j]) >> tmp[j];
		}
		if (sortPair == true && tmp[0] > tmp[1])
			std::swap(tmp[0], tmp[1]);
		unit.push_back(std::pair<int, int>(tmp[0], tmp[1]));
		container.push_back(unit);
	}
	return (container);
}
