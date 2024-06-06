#include <unistd.h>

void    ft_print_reverse_alphabet()
{
	char    c;
	c = 'z';

	while(c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}