
#include <iostream>
#include <vector>
#include <set>


// Using Templates -- PART 2
template<typename T, typename A>
auto divide(T hi, A lo)
{
	return hi / lo;

	if (lo == 0)
	{
		throw lo;
	}
}

// Using Exceptions -- PART 2
void testingexceptions()
{
	int I_userEnteredlo;
	int I_userEnteredhi;
	double D_userEnteredlo;
	double D_userEnteredhi;
	int yes = 0;

	std::cout << "Please enter the number you want to divide: ";
	std::cin >> D_userEnteredhi;

	if (int(D_userEnteredhi) == D_userEnteredhi) {
		I_userEnteredhi = D_userEnteredhi;
		yes++;
	}

	std::cout << "Please enter the number you want to divide by: ";
	std::cin >> D_userEnteredlo;

	if (int(D_userEnteredlo) == D_userEnteredlo) {
		I_userEnteredlo = D_userEnteredlo;
		yes++;
	}


	try
	{
		if (yes == 2)
		{
			std::cout << divide(I_userEnteredhi, I_userEnteredlo);
		
		}
		else
		{
			std::cout << divide(D_userEnteredhi, D_userEnteredlo);
		}
	}
	catch (...)
	{
		std::cout << "Error: You cannot divide by 0." << std::endl;
	}


}


void testvect()
{
	std::vector<int> v = { 0, 1, 7, 2, 1, 6, 23 };
	std::set<int> example = { 0, 1, 7, 2, 1, 6, 23 };

}