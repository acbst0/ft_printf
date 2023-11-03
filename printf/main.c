#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *long_int_to_hex(long int num) {
  // Hexadecimal karakter dizisi
  char hex_digits[] = "0123456789ABCDEF";

  // Dönüş değeri
  char *hex_str = malloc(sizeof(char) * 16);

  // Hexadecimal dönüşümü
  int i = 0;
  while (num > 0) {
    hex_str[i++] = hex_digits[num % 16];
    num /= 16;
  }
  ft_reverseit(hex_str);
  return hex_str;
}

void    ft_reverseit(char *s)
{
    size_t a;
    size_t b;
    char tmp;
    
    a = 0;
    b = strlen(s);
    while ((b / 2) > a)
    {
        tmp = s[a];
        s[a] = s[b - 1 - a];
        s[b - 1 - a] = tmp;
        a++;
    }
}


int main()
{
    char *c;
    c = long_int_to_hex(c);
    printf("%lu\n%p", c, c);
    printf("\n0x%x", 93829234324128);
    
    return 0;
}

