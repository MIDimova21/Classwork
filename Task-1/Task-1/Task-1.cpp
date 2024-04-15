#include <iostream>
using namespace std;

class Fact
{
private:
	int num;
public:
	Fact(int num1)
	{
		num = num1;
	}
	int Factorial(int num)
	{

		if (num > 1)
		{
			return num * Factorial(num - 1);
		}
		return 1;
	}
};

int main()
{
	int n;
	cin >> n;
	Fact fact(n);
	cout << fact.Factorial(n);
}

