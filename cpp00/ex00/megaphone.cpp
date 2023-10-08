
#include <iostream>
#include <iostream>
#include <string>
int main(int ac, char **av)
{

    int i;
    int j;
    i = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[++i])
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char)toupper(av[i][j]);
        }
        std::cout << "\n";
    }
    return 0;
}