#pragma once

#include "SearchAlgorithms.h"

int binary_search(int* values, int target, int len)
{
	int min = 0, max = len - 1;

	while (min <= max)
	{
		int avg = (min + max) / 2;

		if (target < values[avg])
		{
			max = avg - 1;
		}
		else if (target > values[avg])
		{
			min = avg + 1;
		}
		else
		{
			return avg;
		}
	}

	return -1;
}