
#!/bin/bash

cc -Wall -Werror -Wextra -c *.c

ar rcs libft.a *.o

rm -f *.o



