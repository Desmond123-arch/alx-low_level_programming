#include "main.h"
/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: pointer to the location of the file
 * @letters: number of letters to be printed to the screen
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	ssize_t i = 0;
	ssize_t j = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	if (file == -1)
		return (0);
	j = read(file, buffer, letters);
	if (j == -1)
		close(file);
		return (0);
	i += write(STDOUT_FILENO, buffer, j);
	if (i == -1)
		return (0);
	close(file);
	return (i);
}

