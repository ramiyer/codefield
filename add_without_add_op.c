#include <iostream>

using namespace std;

int add_without_addop(int x,int y)
{
	if (y == 0) 
		return x;

	int sum= x ^ y;
	int carry = (x & y) << 1;
	return add_without_addop(sum,carry); 
}

int
main() 
{
	int a,b;
	cout << " enter first number :";
	cin >> a;
	cout << " enter second number :";
	cin >> b;
	int sum = add_without_addop(a,b);
	cout << " sum :" << sum << endl;
}
