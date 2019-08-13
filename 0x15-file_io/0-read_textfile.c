#include "holberton.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of file to be printed
 * @letters: number of letter to be readed and printed
 *
 * Return: numbers of letters printed, 0 if it failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int len_open;
	ssize_t len_read;
	ssize_t len_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	len_open = open(filename, O_RDONLY);
	if (len_open == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	len_read = read(STDIN_FILENO, buffer, letters);
	if (len_read == -1)
		return (0);
	len_write = write(STDOUT_FILENO, buffer, len_read);

	if (len_write == -1)
	{
		free(buffer);
		return (0);
	}
close(len_open);
free(buffer);
return (len_read);
}
