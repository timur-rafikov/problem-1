/* Timur Rafikov | st128186@student.spbu.ru
 * Hello, world! V. 2.0 Project
 * 16.09.24
 */

#include "sayhello.hpp"
#include <iostream>
/* В функции надо выделять то, что имеет потенциал переиспользования. Эта функция не нужна никому,
 * кроме тебя. Попробуй выделить функциональность печати hello + слово */
void sayhello() {
	std::cout << "Hello, world!\n";

	std::string s;
	while (std::cin >> s)
		std::cout << "Hello, " << s << '\n';
}
