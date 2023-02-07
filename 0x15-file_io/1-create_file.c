#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to be placed inside the file
 * Return: 1 on success and -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t check = 0;
	int len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
		len = strlen(text_content);
	check = write(file, text_content, len);
	if (check == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
