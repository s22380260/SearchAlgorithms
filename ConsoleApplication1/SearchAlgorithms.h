#pragma once

int line_search(int* values, int target, int len);
int binary_search(int* values, int target, int len);
int search_with_barrier(int* values, int target, int len);
int search_with_barrier2(int* values, int target, int len);