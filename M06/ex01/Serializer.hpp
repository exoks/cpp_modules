#ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__
# include <iostream>
# include "Data.hpp"

class	Serializer
{
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif /*__SERIALIZER_HPP__*/
