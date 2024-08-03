#include "main.h"
/**
 * read_textfile - Reads a file input.
 * @filename: the name of the file you want to read.
 * @letters: the amountofcharsyou want  to read.
 * Return: The amount of read characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileint = 0;
	ssize_t counter = 0;
	ssize_t aux = 0;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	fileint = open(filename, O_RDONLY);
	if (fileint == -1)
	{
		free(buffer);
		return (0);
	}
	counter  = read(fileint, buffer, letters);
	if (counter == -1)
	{
		free(buffer);
		close(fileint);
		return (0);
	}
	aux = write(STDOUT_FILENO, buffer, counter);
	if (aux == -1)
	{
		free(buffer);
		close(fileint);
		return (0);
	}
	free(buffer);
	close(fileint);
	return (counter);
}
