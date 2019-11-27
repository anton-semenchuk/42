
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define BUFF_SIZE 10
# define NEXT_LINE '\n'
# define END_LINE '\0'
# define ERR -1
# define EMPTY 0

int					get_next_line(const int fd, char **line);

#endif
