#include <iostream>
using namespace std;
int main()
{
	cout << "Ve Ma tran 10x10!!!\n";
	string Array[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
				Array[i][j] = "*";
			else if (i > j)
				Array[i][j] = "|";
			else
				Array[i][j] = "@";
			
			
			
		}
	}


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Array[i][j] <<" ";
		}
		cout << endl;
	}
}