#include "revert_string.h"

void RevertString(char *str)
{
  int size = 0;
	while(str[size])
    size ++;
  char t;
  for(int i = 0; i < size/2;i++)
  {
    t = str[i];
    str[i] = str[size-i-1];
    str[size-i-1] = t;
  }
}

