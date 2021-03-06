// CHEFWORK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <memory.h>
#include <sstream>
#include <complex>
#include <stdlib.h>
#include <string>

using namespace std;


int main()
{
	int n;
	cin >> n; // Number of workers

	int* coins = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
	}

	int* workers = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> workers[i];
	}

	int min1 = 100001;
	int min2 = 100001;
	int min3 = 100001;

	for (int i = 0; i < n; i++)
	{
		switch (workers[i]) 
		{
		case 1:
			if (coins[i] < min1)
				min1 = coins[i];
			break;
		case 2:
			if (coins[i] < min2)
				min2 = coins[i];
			break;
		case 3:
			if (coins[i] < min3)
				min3 = coins[i];
			break;
		default:
			break;
		}
	}

	cout << (((min1 + min2) > min3) ? min3 : min1 + min2) << endl;

    return 0;
}

