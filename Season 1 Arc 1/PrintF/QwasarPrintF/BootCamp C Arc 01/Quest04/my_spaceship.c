#include <unistd.h>
#include <stdlib.h>
char* my_spaceship(char* param_1)
{
int index = 0;
int x = 0;
int y = 0;
char compass = 'n';
while (param_1[index])
{
if (param_1[index] == 'R')
{
if (compass == 'n')
compass = 'e';
else if (compass == 'e')
compass = 's';
else if (compass == 's')
compass = 'w';
else if (compass == 'w')
compass = 'n';
}
else if (param_1[index] == 'L')
{
if (compass == 'n')
compass = 'w';
else if (compass == 'w')
compass = 's';
else if (compass == 's')
compass = 'e';
else if(compass == 'e')
compass = 'n';
}
else if(param_1[index] == 'A')
{
if (compass == 'n')
y--;
else if(compass == 'w')
x--;
else if(compass == 's')
y++;
else if(compass == 'e')
x++;
}
index++;
}
char* str = (char *)malloc(100);
int len = 0;
str[len] = '{';
len++;
str[len] = 'x';
len++;
str[len] = ':';
len++;
str[len] = ' ';
len++;
if (x < 0)
{
str[len] = '-';
x = x * -1;
len++;
}
str[len] = x + '0';
len++;
str[len] = ',';
len++;
str[len] = ' ';
len++;
str[len] = 'y';
len++;
str[len] = ':';
len++;
str[len] = ' ';
len++;
if (y < 0)
{
str[len] = '-';
y = y * -1;
len++;
}
str[len] = y + '0';
len++;
str[len] = ',';
len++;
str[len] = ' ';
len++;
str[len] = 'b';
len++;
str[len] = 'e';
len++;
str[len] = 'a';
len++;
str[len] = 'r';
len++;
str[len] = 'i';
len++;
str[len] = 'n';
len++;
str[len] = 'g';
len++;
str[len] = ':';
len++;
str[len] = ' ';
len++;
str[len] = 39;
len++;
if (compass == 'n')
{
str[len] = 'n';
len++;
str[len] = 'o';
len++;
str[len] = 'r';
len++;
str[len] = 't';
len++;
str[len] = 'h';
len++;
}
else if (compass == 's')
{
str[len] = 's';
len++;
str[len] = 'o';
len++;
str[len] = 'u';
len++;
str[len] = 't';
len++;
str[len] = 'h';
len++;
}
if (compass == 'e')
{
str[len] = 'e';
len++;
str[len] = 'a';
len++;
str[len] = 's';
len++;
str[len] = 't';
len++;
}
if (compass == 'w')
{
str[len] = 'w';
len++;
str[len] = 'e';
len++;
str[len] = 's';
len++;
str[len] = 't';
len++;
}
str[len] = 39;
len++;
str[len] = '}';
len++;
str[len] = '\0';
return (str);
}