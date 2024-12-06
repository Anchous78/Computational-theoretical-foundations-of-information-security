#include <iostream>

char* locale = setlocale(LC_ALL, "");

int main()
{
	int m, a, b; 

	std::cout << "Enter m: ";
	std::cin >> m;
	std::cout << "Enter a, b: ";
	std::cin >> a >> b;

	std::cout << "?omplete system of remainders: ";
	int* vec0{ new int[m]{} };
	int* vec{ new int[m]{} };

	for (unsigned i{}; i < m; i++) {
		vec0[i] = i; 
		std::cout << vec0[i] << "\t";
	}
	std::cout << std::endl;

	std::cout << "complete system of remainders, also: ";
	for (unsigned i{}; i < m; i++) {
		vec[i] = a * i + b;
		if (vec[i] >= m) vec[i] %= m;
		std::cout << vec[i] << "\t";
	}

	delete[] vec;
	delete[] vec0;

	return 0;
}