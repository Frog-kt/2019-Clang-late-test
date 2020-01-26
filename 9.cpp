#include <iostream>
#include <map>

int main()
{
	std::map<std::string, double> mp;
	mp["aaa"] = 10.1;
	mp["bbb"] = 20.2;
	mp["ccc"] = 30.3;

	for (auto i = mp.begin(); i != mp.end(); ++i)
	{
		std::cout << i->first << " " << i->second << "\n";
	}
}