#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_doc;
	ssize_t lenrd, lenwrt;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_doc = open(filename, O_RDONLY);

	if (file_doc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	lenrd = read(file_doc, buffer, letters);
	lenwrt = write(STDOUT_FILENO, buffer, lenrd);

	close(file_doc);

	free(buffer);

	return (lenwrt);
}
