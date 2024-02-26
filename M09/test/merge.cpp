#include <iostream>
#include <vector>

void	merge(std::vector<int> & v, int b, int end);

int	main(void)
{
	std::vector<int>	v;

	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(8);

	merge(v, 0, 3);
	return (0);
}

void	merge(std::vector<int> & v, int b, int e)
{
	int		p;

	std::cout << "call" << std::endl;
	if (b >= e)
		return ;
	p = (b + e) / 2;
	merge(v, b, p);
	merge(v, p + 1, b);
	// add sorting function
}

