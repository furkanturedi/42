#include <unistd.h>

void    ft_is_negative(int i)
{

    if(i < 0)
    
        write(1, "N", 1);
    
    else
    
        write(1, "P", 1);
    
}

int main()
{
    ft_is_negative(0);
    return 0;
}