#pragma once

#include "SearchAlgorithms.h"

int line_search(int* values, int target, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (values[i] == target)
		{
			return i;
		}
		if (values[i] > target)
		{
			return -1;
		}
	}

	return -1;
}