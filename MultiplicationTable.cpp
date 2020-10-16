#include<iostream>
using namespace std;

int main()
{
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << i << " X " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	return;
}