#include <unistd.h>
#include "lib.h"

int	main(int argc, char **argv)
{
	char *fp;

	fp = "numbers.txt";
	if (argc == 3)
	 fp = argv[2];
	
   ft_cut_argv(argv[1], fp);
	
	
	return (0);
}