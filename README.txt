ft_x_case_utils.c zawiera definicje funkcji potrzebnych do dzialania ft_x_case.c
ft_x_case_utils.h zawiera deklaracje tych funkcji

bede musial zrobic osobny folder na libfta i na utilsy do fukncji printfa

tak zeby kompilacja wygladala tak 

cc \
    ft_printf.c \
    ft_specifier_check.c \
    ft_percent_case.c \
    ft_s_case.c \
    ft_normal_case.c \
    ft_c_case.c \
    ft_d_i_case.c \
    ft_x_case.c \
    ft_putnbr_fd.c \
    ft_u_case.c \
    ft_escape_sequences.c \
    ft_x_case_utils.c \
    -Wall -Werror -Wextra -std=c99 -g
./a.out
rm ./a.out