#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character,
 *
 * @c: checks input of function
 *
 * Return: if `c` is lowercase otherwise always 0 (Success)
 */
int _islower(int c)
{
	int a = 'a';
	int z = 'z';

	if (c >= a && c <= z)
		return (1);

	return (0);
}


/**
 * _isalpha - checks for lowercase character,
 *
 * @c: checks input of function
 *
 * Return: if `c` is lowercase otherwise always 0 (Success)
 */
int _isalpha(int c)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	if ((c >= a && c <= z) || (c >= A && c <= Z))
		return (1);

	return (0);
}


/**
 * _abs -> prints the sign of a number
 *
 * @n: _abs inpute
 *
 * Return: Always n (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}

/**
 * _isupper - checks for uppercase character.
 *
 * @c: input of function
 *
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

/**
 * _isdigit - checks for digit.
 *
 * @c: input of function
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * _strlen - returns the length of a string.
 * @s: input string
 *
 * Return: the length of `s`
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;
	return (len);
}

/**
 * _puts - prints a string followed by a newline to standard output.
 *
 * @str: input string
 *
 * Return: void
 */

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; ++len)
		_putchar(str[len]);
	_putchar('\n');
}

/**
 * _strcpy - prints half of a string, followed by a new line.
 *
 * @dest: input char *
 * @src: input char *
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; ++len)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _atoi - convert string to integer
 *
 * @s: Input
 *
 * Return: Integer Converted
 */

int _atoi(char *s)
{
	int len;
	int sin;
	unsigned int digit;

	sin = 1;
	digit = 0;

	for (len = 0; s[len] != '\0'; ++len)
	{
		if (s[len] == '-')
			sin *= -1;
		else if (s[len] >= '0' && s[len] <= '9')
		{
			digit = (digit * 10) + (s[len] - '0');
		}
		else if (digit > 0)
			break;
	}

	return (digit * sin);
}

/**
 * _strcat - appends the src string to the dest string,
 *
 * @dest: input string
 * @src: input string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	for (l = 0; dest[l] != '\0'; ++l)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + l] = src[i];
	}

	return (dest);
}

/**
 * _strncat - appends the src string to the dest string,
 *
 * @dest: input string
 * @src: input string
 * @n: input int
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	for (l = 0; dest[l] != '\0'; ++l)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i >= n)
			break;
		dest[i + l] = src[i];
	}

	return (dest);
}

/**
 * _strncpy - copies a string.
 *
 * @dest: input string
 * @src: input string
 * @n: input int
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			for (; i < n; i++)
				dest[i] = '\0';
		}
	}
	return (dest);
}

/**
 * _strcmp - compares two strings.
 *
 * @s1: input string
 * @s2: input string
 *
 * Return: returns an integer indicating the result of the comparison,
 *	as follows:
 *		• 0, if the s1 and s2 are equal
 *		• a negative value if s1 is less than s2
 *		• a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}

	return (res);
}

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte c.
 *
 * @s: string input
 * @b: char input
 * @n: unsigned int input
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 *
 * @dest: string input
 * @src: string input
 * @n: unsigned int input
 *
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strchr - locates a character in a string.
 *
 * @s: string input
 * @c: char input
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);

	return (NULL);
}


/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string input
 * @accept: string input
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (n != i + 1)
			break;
	}
	return (n);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string input
 * @accept: string input
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

/**
 * _strstr -  locates a substring.
 *
 * @haystack: string input
 * @needle: string input
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return (NULL);
}




