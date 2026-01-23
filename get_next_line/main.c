#include "get_next_line.h"
#include <stdio.h>

int	main() {
	int	fd;
	char *line;

	fd = open("file.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("Line -> %s", line);
		free(line);
	}
	close(fd);
	return (0);
}