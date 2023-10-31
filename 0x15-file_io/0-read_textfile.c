#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
	{
	if (filename == NULL)
	{
		return (0);
	}

	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	ssize_t bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}