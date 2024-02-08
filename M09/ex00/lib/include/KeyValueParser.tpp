//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/28 16:51:48 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/03 19:46:30 by oezzaou
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
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::KeyValueParser(void)
{
}

//====< constructor >===========================================================
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::KeyValueParser(std::fstream fs)
{
	try
	{
		if (fs == NULL)
			throw (std::out_of_range("Error: could not open file."));
		this->fs = fs;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

//====< constructor >===========================================================
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::KeyValueParser(std::string fileName)
{
	try
	{
		fs.open(fileName, std::ios::in);
		if (fs == NULL)
			throw (std::out_of_range("Error: could not open file."));
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}

//====< destructor >============================================================
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::~KeyValueParser(void)
{
	fs.close();
}

//====< parseNextLine >=========================================================
template <class p1, class p2, char sep>
std::pair<p1, p2>	KeyValueParser<p1, p2, sep>::parseNextLine(void)
{
	std::string	first;
	std::string	second;
	p1			key;
	p2			value;

	getline(fs, first, sep);
	getline(fs, second, '\n');
	std::stringstream	kss(first);
	std::stringstream	vss(second);
	// solve the problem using overloading functions
	// check(T value, int type);
	kss >> key;
	vss >> value;
	return (std::pair<p1, p2>(key, value));
}

//====< parseFile >=============================================================
template<class p1, class p2, char sep>
std::map<p1, p2>	KeyValueParser<p1, p2, sep>::parseFile(void)
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
template<class p1, class p2, char sep>
bool	KeyValueParser<p1, p2, sep>::eof(void)
{
	return (fs.eof());
}
