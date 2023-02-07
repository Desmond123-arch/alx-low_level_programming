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
	size_t j = 0;
	char c[1];

	if (filename == NULL)
	{
		return (0);
	}
	if (file == -1)
	{
		return (0);
	}
	while (read(file, &c, 1) > 0 && j < letters)
	{
		i += write(1, c, 1);
		if (i == -1)
		{
			close(file);
			return (0);
		}
		j++;
	}
	close(file);
	return (i);
}

