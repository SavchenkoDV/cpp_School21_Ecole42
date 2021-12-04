#include <iostream>
#include <cctype>

#define SPACE ' '

int		main(int argc, char **argv)
{
    if (argc > 1) {
        for (int word_nbr = 1; word_nbr < argc; ++word_nbr) {
            for (int letter_nbr = 0; argv[word_nbr][letter_nbr]; ++letter_nbr)
                std::cout << (char)std::toupper(argv[word_nbr][letter_nbr]);
            if (word_nbr + 1 < argc)
                std::cout << SPACE;
        }
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return (0);
}
