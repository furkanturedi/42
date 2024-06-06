#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 0;
	while (i < 26)
	{
		ft_putchar(i + 97);
		i++;
	}
}

int main(){
    ft_print_alphabet();
    return 0;
}