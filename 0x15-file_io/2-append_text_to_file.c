#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be placed at the end of the file
 * Return: 1 on success and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_APPEND);
	int len = 0;
	int check = 0;

	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
		len = strlen(text_content);
	check = write(file, text_content, len);
	if (check == -1)
		return (-1);
	return (1);
}
