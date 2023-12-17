//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/17 17:16:40 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/17 20:53:53 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

// need to add more works to this file
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
			throw (std::out_of_range("can not open the file"));
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
			throw (std::out_of_range("can not open the file"));
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
	std::string	key;
	std::string	tmp;
	int			value;

	getline(fs, key, sep);
	getline(fs, tmp, '\n');
	value = atoi(tmp.c_str());
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
