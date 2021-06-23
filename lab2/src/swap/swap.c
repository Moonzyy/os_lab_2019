#include "swap.h"

void Swap(char *left, char *right)
{
	char x = *right;
  *right = *left;
  *left = x;
}
