
#include "get_next_line.h"

int					get_next_line(const int fd, char **line)
{
    static char     *c[10240];
    char            *tmp;
    char            *buf[BUFF_SIZE + 1];
    int             ret;
    int             endl;

    if (fd < 0 || (!c[fd] && !(c[fd] = ft_strnew(1))) || !line)
        return (ERR);
    while (!ft_strchr(c[fd], NEXT_LINE) && (ret = read(fd, buf, BUFF_SIZE)) > 0)
    {
        buf[BUFF_SIZE + 1] = '\0';
        tmp = c[fd];
        c[fd] = ft_strjoin(c[fd], buf);
        ft_strdel(&tmp);
    }
    if (ret == -1 || !*(tmp = c[fd]))
        return (ret == -1 ? -1 : 0);
    if ((endl = (ft_strchr(c[fd], '\n') > 0)))
        *line = ft_strsub(c[fd], 0, ft_strchr(c[fd], '\n') - c[fd]);
    else
        *line = ft_strdup(c[fd]);
    c[fd] = ft_strsub(c[fd], (unsigned int)(ft_strlen(*line) + endl),
                        (size_t)(ft_strlen(c[fd]) - (ft_strlen(*line) + endl)))
    ft_strdel(&tmp);
    return (!(!c[fd] && !ft_strlen(*line)));
}
