#include "easyfind.hpp"

int main() {
	try {
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(20);
		vec.push_back(30);
		vec.push_back(40);
		vec.push_back(50);

		std::list<int> lst;
		lst.push_back(100);
		lst.push_back(200);
		lst.push_back(300);

		std::vector<int>::iterator it = easyfind(vec, 30);
		std::cout << "Found in vector: " << *it << std::endl;

		std::list<int>::iterator it2 = easyfind(lst, 300);
		std::cout << "Found in list: " << *it2 << std::endl;

		easyfind(vec, 99);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
