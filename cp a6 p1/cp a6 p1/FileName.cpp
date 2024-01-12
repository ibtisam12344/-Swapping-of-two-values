#include<iostream>
using namespace std;

int reversenumber(int& num)
{
	int rn = 0;
	while (num != 0)
	{
		int lastdigit;
		lastdigit = num % 10;
		rn = rn * 10 + lastdigit;
		num /= 10;
	}
	return rn;
}
int input()
{
	int num;
	cout << "Enter number : ";
	cin >> num;
	return num;
}
void output()
{
	int num = input();
	cout << "The reversed number is : " << reversenumber(num) << endl;
}
int main()
{
	output();
	return 0;
}
