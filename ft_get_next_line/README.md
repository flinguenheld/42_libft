*This project has been created as part of the 42 curriculum by [flinguen](https://linguenheld.net/)*

### Description

**get_next_line()** is a function which allows you to read a file line by line.  
It takes a file descriptor and reads the file until it has got a full line.  
So each call of the function will return a malloc char * which has to be freed by the user.  

>A line is a chain of any char that ends with a '\n' (included)  
>Except when the file descriptor has reached the end of the file.

The purpose was to learn the C language and use fundamental concepts as the static keyword.  
The main difficulty was to keep track of the non used char and use them at the next function call.

#### Bonus

The purpose is to extend the function to manage multiple files at the same time.  
It will keep track of each file descriptor remainder an jump to each others.

## Instructions

Clone this repository and use these commands to compile:

If you just want to generate a *.o*:

```
cc -Wall -Wextra -Werror -c get_next_line.c get_next_line_utils.c
```

Or for instance with a main file and execute the program:

```
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main_test.c -o test_gnl && ./test_gnl
```

This function uses a buffer, its size can be set at compilation time with the flag **-D** *(default 42)*:
```
cc -D BUFFER_SIZE=100 get_next_line.c get_next_line_utils.c main_test.c -o test_gnl && ./test_gnl
```

The bonus which allows you to read several files has an array of buffer, its size can also be set *(default 84)*:
```
cc -D NB_FILE_MAX=5 get_next_line.c get_next_line_utils.c main_test.c -o test_gnl && ./test_gnl
```


### Resources

[open read close functions](https://www.geeksforgeeks.org/c/input-output-system-calls-c-create-open-close-read-write/)  
[static variable](https://www.gnu.org/software/c-intro-and-ref/manual/html_node/Static-Local-Variables.html)  

### Explanations

I tried to write this project with [vectors](https://github.com/flinguenheld/42_get_next_line/tree/vectors)
and [lists](https://github.com/flinguenheld/42_get_next_line/tree/list_faster).
However I finally chose a simplier way, so the logic is:
  - Create a static array *(remainder)* with the size "BUFFER_SIZE + 2 * intptr_t"
  - Then in an infinite loop:
    - Poor remainder inside line (adapte size line with a new malloc)
    - If the line ends with a '\n' or if it's the end of file, return the line
    - Otherwise, read the file one time to fill the remainder
  - Keep the line length to avoid useless computations

  - To keep track of which chars have been read or not in the remainder,
there are two slots at its end which are used to save two addresses:
    - Last char read position
    - Last char added by the [read function](https://man7.org/linux/man-pages/man2/read.2.html) position.

This algorithm works with all chars (even '\0'), is free of leak and fast except with a small buffer size.  
(in this case, it will malloc and copy new line on each loop).

##### Bonus part

The bonus part is managed by an array of remainders.  
I used this solution to keep all data in the stack and avoid memory leak when the user doesn't read the entire file.  
The cons are that the amount of file is limited and the function consume useless memory since all remainders are allocated.

### Test

I've written main files and a file generator which are available in the branch [tests](https://github.com/flinguenheld/42_get_next_line/tree/tests)

```
./generate_files.sh

cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main_test.c && ./a.out
cc -Wall -Wextra -Werror -fsanitize=address get_next_line.c get_next_line_utils.c main_test.c -D BUFFER_SIZE=1 && ./a.out
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main_test.c -D BUFFER_SIZE=1 && valgrind --leak-check=full --show-leak-kinds=all ./a.out

cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main_test.c && ./a.out
cc -Wall -Wextra -Werror -fsanitize=address get_next_line_bonus.c get_next_line_utils_bonus.c main_test.c -D BUFFER_SIZE=1 && ./a.out
cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main_test.c -D BUFFER_SIZE=1 && valgrind --leak-check=full --show-leak-kinds=all ./a.out
```
