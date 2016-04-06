
#include <iostream>

#include <vector>
#include <array>
#include <set>

using std::cin;
using std::endl;
using std::cout;

// Greatest Common Divisor -- PART 4
int gcd(int a, int b)

{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}

	//Base Case
	if (b == 0)
	{
		return a;
	}
	if (a == 0)
	{
		return b;
	}

	//Recursive Case
	if (a > b)
	{
		
		return gcd(a - b, b);
	}
	else
	{
		
		return gcd(a, b - a);    

	}


}

void rungcd()
{
	int userEntereda;
	int userEnteredb;

	std::cout << "Please enter the first of the numbers you would like the greatest common divisor for: " << std::endl;
	std::cin >> userEntereda;
	std::cout << "Please enter the second number you would like the greatest common divisor for: " << std::endl;
	std::cin >> userEnteredb;
	std::cout << std::endl;

	std::cout << "The greatest common divisor is " << gcd(userEntereda, userEnteredb) << "." << std::endl;
}

// Fibonacci Sequence -- PART 4
int fib(int n) {
	
	//Base Case
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}

	//Recursive Case
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

void runfib()
{
	int userEnteredn;

	std::cout << "Please enter a number to get its Fibonacci number: " << std::endl;
	std::cin >> userEnteredn;
	std::cout << "The Fibonacci number is: " << fib(userEnteredn) << "." << std::endl;
}

// Power Function -- PART 4
int pow(int a, int b) {
	//Base Case
	if (b == 0) return 1; 
	if (b == 1) return a;
	
	//Recursive Case
	return a * pow(a, b - 1);
}

void runpow() {
	int userEntereda;
	int userEnteredb;

	std::cout << "Please enter the number you want to raise to a power: " << std::endl;
	std::cin >> userEntereda;
	std::cout << "Please enter the power you'd like to raise it to: " << std::endl;
	std::cin >> userEnteredb;
	
	if (userEnteredb < 0) {
		do {
			std::cout << "The power you are raising to must be positive.";
			std::cin >> userEnteredb;
		} while (userEnteredb < 0);
	}

	std::cout << userEntereda << " raised to the " << userEnteredb << "power is: " << pow(userEntereda, userEnteredb);


}


 //Triangular -- PART 4

int tri(int n)
{
	n = (((n - 1) * (n - 1)) + (n - 1)) / 2;
	
	return n;
}

void runtri() {
	int userEnteredn;

	std::cout << "Please enter the number you would like the triangular number for: ";
	std::cin >> userEnteredn;
	std::cout << std::endl << tri(userEnteredn);
}

//PART - 3

void runvector()
{
	std::vector<int> vec = { 6,4,7,8,9,11 };
	int i;
	int arr[6];

	std::cout << "vector size = " << vec.size() << std::endl;
	for (i = 0; i < vec.size(); i++)
	{
		arr[i] = vec[i];
	}


	for (i = 0; i < vec.size(); i++) {
		std::cout << "vector contains " << vec[i] << " " << std::endl;
	}


	for (int a = 0; a < vec.size(); a++) {
		std::cout << "array contains " << arr[a] << " " << std::endl;
	}

	std::set<int> first(arr, arr + 3);
	std::set<int> second(arr + 3, arr + 6);

	first.swap(second);

	std::cout << "first contains:";
	for (std::set<int>::iterator it = first.begin(); it != first.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "second contains:";
	for (std::set<int>::iterator it = second.begin(); it != second.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << "\n";
}


//Part 5


int tri_iter(int doggo)
{
	if (doggo < 0) {
		throw "exception";
		
	}
	
		if (doggo == 1)
		 return 1;
	
		return (doggo*(doggo + 1)) / 2;
	}




int pow_iter(int a, int b)
 {
	int candy = a;

if (b<0 || a<0)
 throw "Invalid";

 
if (b == 0) return 1;


		for (int i = 1; i < b; i++) {
		candy *= a;
		
	}
	return candy;
	}

int fib_iter(int n)
 {
	int previous = 1;
	int current = 1;
	int next = 1;
	for (int i = 3; i <= n; ++i)
		 {
		next = current + previous;
		previous = current;
		current = next;
		}
	return next;
	}


void tri_itertest()
 {
	int n;
	
		cout << "Enter an integer: ";
	cin >> n;
	tri_iter(n);
	
		cout << endl << "Result: " << tri_iter(n) << endl;
	
		
	}
void pow_itertest()
 {
	
		int a;
	int b;
	
		cout << "Enter a base: ";
	cin >> a;
	cout << "Enter an exponent: ";
	cin >> b;
	pow(a, b);
	cout << endl << "Result: " << pow_iter(a, b) << endl;
	}

void fib_itertest() {
	int n;
	
		cout << "Enter n: ";
	cin >> n;
	
		cout << endl << "Result: " << endl;
	for (int x = 1; x <= n; x++)
		 {
		cout << fib_iter(x) << " ";
		}
	cout << endl;
	
}
void part5test()
{
	fib_itertest();
	pow_itertest();
	tri_itertest();
}