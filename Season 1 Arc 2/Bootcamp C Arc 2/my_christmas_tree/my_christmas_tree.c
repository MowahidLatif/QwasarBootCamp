#include <time.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void my_christmas_tree(int section_tree)
{
  int main_row = 0;
  int main_column = 0;
  float p = 0;
  int r = 1;
  int i = 1;
  int y = 0;
  int my_siye;
  int my_arr[100];
  my_arr[0] = 1;
  while (r <= section_tree)
  {
    main_row = 3 + r + main_row;
    my_siye = main_row;
    while (y <= my_siye - 1)
    {
      my_arr[y + 1] = my_arr[y] + 2;
      y += 1;
      main_column = my_arr[y];
    }
    r += 1;
    my_arr[y] -= 4 + p;
    if (r >= 3 && r < 5)
    {
      p = 2;
    }
    if (r >= 5 && r < 8)
    {
      p = 4;
    }
    if (r >= 7 && r < 10)
    {
      p = 6;
    }
  }
  i = 0;
  while (i < main_row)
  {
    y = 1;
    while (y <= main_column)
    {
      if (y >= (main_column / 2) - (my_arr[i] / 2) && y <= (main_column) / 2 + (my_arr[i] / 2))
      {
        printf("*");
      }
      else if (y > (main_column) / 2 + ((my_arr[i] / 2)))
      {
        printf("\n");
        y = main_column + 1;
      }
      else
      {
        printf(" ");
      }
      y += 1;
    }
    i += 1;
  }
  int m = 1;
  int l = 1;
  main_row = section_tree;
  while (m <= main_row)
  {
    while (l <= main_column)
    {
      if (section_tree % 2 != 0)
      {
        if ((l >= (main_column) / 2 - (section_tree / 2)) && (l <= (main_column) / 2 + (section_tree / 2)) || (l == (main_column) / 2))
        {
          printf("|");
        }
        else if (l > (main_column) / 2 + (section_tree / 2))
        {
          printf("\n");
          l = main_column + 1;
        }
        else
        {
          printf(" ");
        }
        l += 1;
      }
      else
      {
        if (l >= (((main_column) / 2) - (section_tree - 1) / 2) && l <= (((main_column / 2) + 0.5) + (section_tree / 2)) || (l == (main_column / 2) - 0.5))
        {
          printf("|");
        }
        else if (l > (main_column / 2 + 0.5) + (section_tree / 2))
        {
          printf("\n");
          l = main_column + 1;
        }
        else
        {
          printf(" ");
        }
        l += 1;
      }
    }
    m += 1;
    l = 1;
  }
}
int main(int argc, char **argv)
{
  if (argc != 2)
  {
    return 0;
  }
  if (argc == 2)
  {
    int input = atoi(argv[1]);
    my_christmas_tree(input);
    return 0;
  }
}
