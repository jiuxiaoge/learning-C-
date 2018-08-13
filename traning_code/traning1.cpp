#include "stdafx.h"
#include<iostream>

using namespace std;

namespace Acomp
{
	int getMaxOrMin(int *arr, int n, bool isMax)
	{
		int temp(arr[0]);
		for (int i = 1; i < n; i++)
		{
			if (isMax)
			{
				if (arr[i] > temp)
				{
					temp = arr[i];
				}
			}
			else
			{
				if (arr[i] < temp)
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}


int main(void)
{
	bool isMax = false;
	int arr[4] = { 1, 5, 3, 7 };
	cin >> isMax;
	cout << Acomp::getMaxOrMin(arr, 4, isMax) << endl;
	system("pause");
	return 0;
	
}
