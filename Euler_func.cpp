// Euler's totient function
#include <iostream>
#include <cmath>

int euler(int p, int i) {
	if (i == 0) {
		return 1;
	}
	else
	{
		return pow(p, i) - pow(p, i-1);
	}
}

int main()
{
	int m; 

	std::cout << "Enter m: ";
	std::cin >> m;

// int prime_num(int p) {
// 	if ((p * p - 1) % 24 == 0 || p == 2 || p == 3)
// 	{
// 		std::cout << p << " is prime number." << std::endl;
// 		return true;
// 	}
// 	else {
// 		std::cout << p << " isn't prime number." << std::endl;
// 	}
// 	return false;
// }


	int phi{1}, num{ 2 }, i{ 0 };

	while (m > 1)
		{
		while (m % num == 0) {
			m /= num;
			i++;
			std::cout << "m = " << m << "\t";
		}
		phi *= euler(num, i);
		if (num >= m/2)
		{
		    i = 1;
			phi *= euler(m, i);
			std::cout << "p = " << phi << std::endl;
			break;
		}

		num += 1;
		i = 0 ;
		
	}

	return 0;
}