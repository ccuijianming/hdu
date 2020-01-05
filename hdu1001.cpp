#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			sum += i;
		}
		cout << sum << endl << endl;
		sum = 0;
	}
	return 0;
}