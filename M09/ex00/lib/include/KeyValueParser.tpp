//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < KeyValueParser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/26 00:30:26 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/26 00:30:55 by oezzaou
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
KeyValueParser<p1, p2, sep>::KeyValueParser(std::fstream fileStream)
{
	if (fileStream == NULL)
		throw (Exception("Stream Error: could not open file."));
	this->fileStream = fileStream;
}

//====< constructor >===========================================================
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::KeyValueParser(std::string fileName)
{
	fileStream.open(fileName, std::ios::in);
	if (fileStream == NULL)
		throw (Exception("Stream Error: could not open file."));
}

//====< destructor >============================================================
template <class p1, class p2, char sep>
KeyValueParser<p1, p2, sep>::~KeyValueParser(void)
{
	fileStream.close();
}

//====< parseNextLine >=========================================================
template <class p1, class p2, char sep>
std::pair<p1, p2>	KeyValueParser<p1, p2, sep>::parseNextLine(void)
{
	std::stringstream	ssk(""), ssv("");
	std::string			sKey, sValue;
	p1					key;
	p2					value;
	
	ssk >> key;
	ssv >> value;
	while (fileStream.eof() == false)
	{
		getline(fileStream, sKey, sep);
		getline(fileStream, sValue, '\n');
		if (sKey.empty() && sValue.empty())
			continue ;
		key = prs::parse(key, sKey);
		value = prs::parse(value, sValue);
		return (std::pair<p1, p2>(key, value));
	}
	return (std::pair<p1, p2>(key, value));
}

//====< parseFile >=============================================================
template <class p1, class p2, char sep>
std::map<p1, p2>	KeyValueParser<p1, p2, sep>::parseFile(void)
{
	std::map<p1, p2>	map;
	std::pair<p1, p2>	pair;

	while (fileStream)
	{
		pair = parseNextLine();
		if (fileStream.eof() == true)
			break ;
		map.insert(pair);
	}
	return (map);
}

//====< eof >===================================================================
template <class p1, class p2, char sep>
bool	KeyValueParser<p1, p2, sep>::eof(void)
{
	return (fileStream.eof());
}
