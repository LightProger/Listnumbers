#include <stdio.h>
#include <stdlib.h>

/*
 * Подсчет количества введеных чисел через пробел
 */

int main(int argc, char *argv[])
{
  int k=0;
  char c,p;
  puts("Enter list of numbers :");
  p = getchar();
  do
  {
    c = getchar();
    if (((c=='\n') || (c==' ')) && (p != ' ')) k++;
    p=c;
  } while (c != '\n');
  printf("%d numbers was entered\n",k);

  return 0;
}