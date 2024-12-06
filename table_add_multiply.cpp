#include <iostream>
#include "Header.h"

char* locale = setlocale(LC_ALL, "");

int main()
{
	int m, a, b; 

	std::cout << "Enter m: ";
	std::cin >> m;

    int** ptr{ new int* [m] {} };

    for (unsigned i{}; i < m; i++) {
        ptr[i] = new int[m] {};
    }

    std::cout << "add" << std::endl;
    for (unsigned i{}; i < m; i++) {
        for (unsigned j{}; j < m; j++) {
            ptr[i][j] = i + j;
            if (ptr[i][j] >= m) ptr[i][j] %= m;
        }
    }

    for (unsigned i{}; i < m; i++) {
        for (unsigned j{}; j < m; j++) {
            std::cout << ptr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "multiply" << std::endl;
    for (unsigned i{}; i < m; i++) {
        for (unsigned j{}; j < m; j++) {
            ptr[i][j] = i * j;
            if (ptr[i][j] >= m) ptr[i][j] %= m;
        }
    }


    for (unsigned i{}; i < m; i++) {
        for (unsigned j{}; j < m; j++) {
            std::cout << ptr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (unsigned i{}; i < m; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

	return 0;
}