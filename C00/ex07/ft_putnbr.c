#include <unistd.h>

// Basit bir yardımcı fonksiyon: Bir karakteri ekrana yazdırmak
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Sayıyı ekrana yazdıran fonksiyon
void ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }

    ft_putchar(nb % 10 + '0');
}

int main() {
    // Örnek kullanım
    ft_putnbr(10000);  // "42" çıktısını verecektir
    return 0;
}