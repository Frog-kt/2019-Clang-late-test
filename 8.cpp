#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v{10, 20, 30};

	int size = v.size();

	for (int i = 0; i < 3; i++)
	{
		std::cout << v[i] << "\n";
	}
}