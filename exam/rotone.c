#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    char a;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            a = av[1][i];
            if (av[1][i] >= 'a' && av[1][i] <= 'y')  
                    a += 1;
            if (av[1][i] >= 'A' && av[1][i] <= 'Y')
                    a += 1;
            if (av[1][i] == 'z' || av[1][i] == 'Z')
                    a -= 25;
            write (1, &a, 1);
                i++;
        } 
    }
    write(1, "\n", 1);
    return (0);
}