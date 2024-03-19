//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/19 22:06:04 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/19 22:14:52 by oezzaou
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
template <class p1, class p2, int T1, int T2, char sep>
KeyValueParser<p1, p2, T1, T2, sep>::KeyValueParser(void)
{
}

//====< constructor >===========================================================
template <class p1, class p2, int T1, int T2, char sep>
KeyValueParser<p1, p2, T1, T2, sep>::KeyValueParser(std::fstream fs)
{
	if (fs == NULL)
		throw (Exception("Error: could not open file."));
	this->fs = fs;
}

//====< constructor >===========================================================
template <class p1, class p2, int T1, int T2, char sep>
KeyValueParser<p1, p2, T1, T2, sep>::KeyValueParser(std::string fileName)
{
	fs.open(fileName, std::ios::in);
	if (fs == NULL)
		throw (Exception("Error: could not open file."));
}

//====< destructor >============================================================
template <class p1, class p2, int T1, int T2, char sep>
KeyValueParser<p1, p2, T1, T2, sep>::~KeyValueParser(void)
{
	fs.close();
}

//====< parseNextLine >=========================================================
template <class p1, class p2, int T1, int T2, char sep>
std::pair<p1, p2>	KeyValueParser<p1, p2, T1, T2, sep>::parseNextLine(void)
{
	std::string	first;
	std::string	second;
	p1			key;
	p2			value;
	// member to functin can solve this problem
	
	getline(fs, first, sep);
	getline(fs, second, '\n');
	std::stringstream	kss(first);
	std::stringstream	vss(second);
	kss >> key;
	vss >> value;
	return (std::pair<p1, p2>(key, value));
}

//====< parseFile >=============================================================
template <class p1, class p2, int T1, int T2, char sep>
std::map<p1, p2>	KeyValueParser<p1, p2, T1, T2, sep>::parseFile(void)
{
	std::map<p1, p2>	map;
	std::pair<p1, p2>	pair;

	while (fs)
	{
		pair = parseNextLine();
		if (fs.eof() == true)
			break ;
		map.insert(pair);
	}
	return (map);
}

//====< eof >===================================================================
template <class p1, class p2, int T1, int T2, char sep>
bool	KeyValueParser<p1, p2, T1, T2, sep>::eof(void)
{
	return (fs.eof());
}
