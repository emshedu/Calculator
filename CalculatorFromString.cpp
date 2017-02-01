// CalculatorFromString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <String>
#include <iostream>
#include <vector>
using namespace std;

float calculatorFromString(string input)
{
	int i = 0;
	int j = 0;
	int count = 1;
	float ans = 0;
	bool charge;
	vector<float> numbers(3);
	while (i < input.size())
	{
		if (input[i] == '-')
		{
			j++;
			i++;
			numbers[j] = (((int)input[i] - 48)*-1);
			i++;
		}
		else if (input[i] == '+')
		{
			j++;
			i++;
			numbers[j] = (((int)input[i] - 48));
			i++;
		}
		else if ((int)input[i] <= 57 && (int)input[i] >= 48)
		{
			numbers[j] = (numbers[j] * 10) + ((int)input[i] - 48);
			i++;
		}
		else if (input[i] == '*')
		{
			i++;
			numbers[j] *= ((int)input[i]-48);
			i++;
		}
		else if (input[i] == '/')
		{
			i++;
			numbers[j] /= ((int)input[i] - 48);
			i++;
		}
		else if (input[i] == '_')
		{
			j++;
			i++;
		}
		count++;
	}
	for (int p = 0; p < numbers.size(); p++)
	{
		ans += numbers[p];
	}
	return ans;
}
