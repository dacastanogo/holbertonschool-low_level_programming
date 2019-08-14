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
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file to be printed
 * @text_content: String to be append in the file.
 *
 * Return: 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
