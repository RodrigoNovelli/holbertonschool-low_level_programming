#include "main.h"
/**
 * create_file - This function creates a new file with:
 * @filename: The name of the file youwanna create.
 * @text_content: The content youwant to put in.
 * Return: 1 on succed or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fileint;
	int aux = 0;
	int counter = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[counter] != 0)
		counter++;
	fileint = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fileint == -1)
		return (-1);
	aux = write(fileint, text_content, counter);
	if (aux == -1)
		return (-1);
	close(fileint);
	return (1);
}
