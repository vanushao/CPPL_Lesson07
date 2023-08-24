#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v{1,2,3,4,5,10,1,5,3,2,2,2};
	std::sort(v.begin(), v.end(), [](auto lhs, auto rhs){
		return lhs < rhs;
	});

    std::cout << "[IN]: ";

	for (const auto elem : v){
		std::cout << elem << " ";
	}

	std::cout << std::endl;

    auto uniq =	std::unique (v.begin(), v.end());
    v.erase (uniq, v.end());

    std::cout << "[OUT]: ";

	for (const auto elem : v){
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}