#include "holberton.h"

/**
 * _strlen - function that determines the lenght of a string.
 *@s: pointer to a string
 *
 *Return: lenght of the string.
 */

size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * create_file - function that creates a file.
 * @filename: name of file to be printed
 * @text_content: String to be put inside the file.
 *
 * Return: 1 on success or -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t len_write;
	int len_open;

	if (filename == NULL)
		return (-1);
	len_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (len_open == -1)
		return (-1);
	if (text_content)
	{
		len_write = write(len_open, text_content, _strlen(text_content));
	}
	if (len_write == -1)
	{
		close(len_open);
		return (-1);
	}
close(len_open);
return (1);
}
