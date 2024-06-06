#include <unistd.h>

void    ft_print_numbers()
{
    int l;
    l = '1';
    
    while(l <= '9')
    {
        write(1, &l, 1);
        l++;

    }
}

int main(){
    ft_print_numbers();
    return 0;
}