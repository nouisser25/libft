
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "helo_wrd";
	char*	dest=(src+3) ;
	
    
  
	void	*ret;

	ft_memcpy(dest, src, 5);
	printf("src = %s\n",src);
	printf("dest = %s\n", dest);


	return (0);
}
