#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
void _cp(const char *file_from, const char *file_to);

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	/* check the number of arguments*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}

/**
 * _cp - copy file_from to file_to
 * @file_from: copy the content in this file
 * @file_to: past the cotent here
 */

void _cp(const char *file_from, const char *file_to)
{
	/*declare variables and opening of files*/
	int file_out = open(file_from, O_RDONLY);
	int file_in = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	char buffer[1024];
	int bytes_read;
	int check, check_close;

	/*check the return files of the opened files*/
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/*while loop to read from old file to the new file*/
	while ((bytes_read = read(file_out, buffer, 1024)) > 0)
	{
		check = write(file_in, buffer, bytes_read);
		if (check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/*close file and check the return value*/
	check_close = close(file_out);
	if (check_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", O_RDONLY);
		exit(100);
	}
	check_close = close(file_in);
	if (check_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", O_RDONLY);
		exit(100);
	}
}




