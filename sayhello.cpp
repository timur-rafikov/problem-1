#include "sayhello.hpp"
#include <iostream>

void sayhello() {
	std::cout << "Hello, world!\n";

	std::string s;
	while (std::cin >> s)
		std::cout << "Hello, " << s << '\n';
}
