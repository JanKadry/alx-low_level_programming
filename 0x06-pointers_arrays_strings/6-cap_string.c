#include "main.h"
/**
 * *cap_string - capatilize all words of the string
 * @str: the string to be capital
 * Return: a pointer to the changed string
 */




char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	index++;

	if
	(str[index - 1] == ' ' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
index == 0)
str[index] -= 32;
index++;

}
return (str);


}
