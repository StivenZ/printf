#include "holberton.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
/*
      int len;
      int len2;
	

      char *string = "World";
      int alen, elen;
	char c = 'z';
	char *str = NULL;      len = _printf("String literal: Hello World\n");
      len2  = printf("String literal: Hello World\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("Hello %s \n", string);
      len2 = printf("Hello %s \n", string);
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("Hello %s Holberton \n", string);
      len2 = printf("Hello %s Holberton \n", string);
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("Let's try to printf a simple sentence.\n");
      len2 = printf("Let's try to printf a simple sentence.\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("Character:[%c]\n", 'H');
      len2 = printf("Character:[%c]\n", 'H');
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("String:[%s]\n", "I am a string !");
      len2 = printf("String:[%s]\n", "I am a string !");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);      _printf("==========================\n");
      len = _printf("Percent:[%%]\n");
      len2 = printf("Percent:[%%]\n");
      len2 = printf("Percent:[%]\n");
      len = _printf("Percent:[%]\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);
      printf("%");
      _printf("%");
      printf("%s", NULL);
      _printf("%s", NULL);     _printf("==========================\n");
      len = _printf("Unknown:[%w]\n");
      len2 = printf("Unknown:[%w]\n");
      printf("Expected: %d \n", len2);
      printf("Actual %d \n", len);	printf("START NEW TEST\n");
	printf("=====================\n");
	printf("printf(NULL)  : %d\n", printf(str));
	printf("_printf(NULL) : %d\n", _printf(str));
	printf("printf(\"%\") : %d\n", printf("%"));
	printf("_printf(\"%\"): %d\n", _printf("%"));
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%%%c\n", 'y');
	_printf("Actual     : %%%%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");      printf("================\n");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
      printf("1================\n");
	elen = printf("%s", "");
	alen = _printf("%s", "");
      printf("2================\n");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
      printf("================\n");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s \n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
      printf("================\n");
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen);
	printf("Expected  %i %d\n", 0032, 0032);
      _printf("Actual %i %d \n", 0032, 0032);
*/
	printf("%%%.%%%.,%%%s\n", "Hola");
	_printf("%%%.%%%.,%%%s\n", "Hola");
	return 0;
}
