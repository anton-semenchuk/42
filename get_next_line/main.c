
#include "get_next_line.h"
#include <fcntl.h>

int     main(int argc, char **argv)
{
	char	*line;
	int		fd;

	if (argc == 1)
		fd = 0;
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (-1);	
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
	return (0);
}