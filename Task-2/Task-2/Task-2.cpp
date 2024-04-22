#include <iostream>
using namespace std;

class Gcd 
{
private:
    int num1;
    int num2;
public:
    Gcd(int a, int b) 
    {
        num1 = a;
        num2 = b;
    }
    int findGcd() 
    {
        int temp = 0;
        while (num2 != 0) 
        {
			temp = num2;
			num2 = num1 % num2;
			num1 = temp;
        }
        return num1;
    }
};

int main() 
{
    int a, b;
    cin >> a >> b;
    Gcd gcd(a, b);
    cout << gcd.findGcd();
}
