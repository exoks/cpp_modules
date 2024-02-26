#include <iostream>
#include <vector>

void binary(std::vector<int> v, int target, int start, int end);

int	main(void)
{
	std::vector<int>	v;
	v.push_back(7);
	v.push_back(4);
	v.push_back(6);
	v.push_back(3);
	v.push_back(10);
	v.push_back(13);


	binary(v, 3, 0, v.size() - 1);	
	return (0);
}


void	binary(std::vector<int> v, int target, int start, int end)
{
	int	index;

	index = start + end / 2;
	if (v[index] == target)
	   std::cout << "found at: " << index << std::endl;
	if (v[index] > target)
		binary(v, target, start, index);
	if (v[index] < target)
		binary(v, target, index, end);	
}
