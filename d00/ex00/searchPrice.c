#include <string.h>
#include "header.h"

int		searchPrice(struct s_art **arts, char *name)
{
	while (*arts)
	{
		if (strcmp((*arts)->name, name) == 0)
			return ((*arts)->price);
		arts++;
	}
	return (-1);
}
