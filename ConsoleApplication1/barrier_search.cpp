#pragma once

#include "SearchAlgorithms.h"

int search_with_barrier(int* values, int target, int len)
{
	int last = values[len - 1];
	values[len - 1] = target;

	int i = 0;
	while (values[i] != target)
	{
		i++;
	}

	values[len - 1] = last;
	if (i != (len - 1) || target == last)
	{
		return i;
	}

	return -1;
}

int search_with_barrier2(int* values, int target, int len)
{
	values[len - 1] = target;
	int i = 0;
	while (values[i] != target)
	{
		i++;
	}
	return i < len ? i : -1;
}