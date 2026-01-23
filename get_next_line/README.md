*This project has been created as part of the 42 curriculum by szaarour.*

# get_next_line

## Description

The **get_next_line** project consists of implementing a function that reads and returns
one line at a time from a file descriptor.  
Each call to the function returns the next line until the end of the file is reached.

The main challenge of this project lies in correctly handling:
- persistent read state between function calls
- memory management & leaks
- edge cases such as EOF, empty files, and files with or without trailing newlines

---

## Algorithm & Design Choices

### High-level idea

The core idea of the algorithm is to maintain a **static buffer (stash)** that persists
between calls to `get_next_line`.

1. Read from the file descriptor into a temporary buffer of size `BUFFER_SIZE`
2. Append the buffer to a static stash
3. Stop reading as soon as a newline (`\n`) is found or EOF is reached
4. Extract one line from the stash
5. Clean the stash by removing the returned line
6. Return the extracted line
7. Repeat on the next call

This design ensures:
- No data is lost between calls
- The file descriptor continues reading from where it last stopped
- Only one line is returned per function call

---

### Why a static variable?

The `stash` variable is declared as `static` so that its value persists between calls to
`get_next_line`.

- **Stack memory**: used for local variables and function calls, cleared after each call
- **Heap memory**: used for dynamically allocated buffers (`malloc`)
- **Static storage**: used for `stash`, which must survive after the function returns

This allows the function to remember leftover data that was read but not yet returned.

---

## Low-Level I/O Concepts Learned

### File Descriptors & `write`

The function call:
```c
write(1, "Hello, world!\n", 14);
```
Uses the prototype:
```c
ssize_t write(int fd, const void *buf, size_t count);
```
In Linux, everything is treated as a file, allowing interoperability. This includes:

- Regular files
- Terminals (Yup! Even those, I was surprised :p)
- Pipes
- Sockets

#### Standard File Descriptors

Each process starts with three file descriptors already open:

| FD | Name   | Description        |
|----|--------|--------------------|
| 0  | stdin  | Standard input     |
| 1  | stdout | Standard output    |
| 2  | stderr | Standard error     |

By default, all three are connected to the terminal. This is why writing to file descriptor 1 prints text to the terminal.

### Fun Fact

In Linux, a terminal is not a special “windowed application” in the traditional sense.
It is represented internally through TTY (teletype) device files located in the `/dev` directory.

When you open multiple terminal windows, the system creates multiple TTY files, such as:
```bash
/dev/tty1 #terminal 1
/dev/tty2 #terminal 2
```
Because TTYs are treated as files, they can be interacted with using standard file I/O operations:
- Writing to a TTY file sends output directly to the associated terminal
- Reading from a TTY file receives input typed into that terminal

#### Example

Editing a TTY device with a text editor (such as vim /dev/tty1) and writing text will cause that text to immediately appear in the corresponding terminal window.
Writing to a TTY from another terminal:
```bash
echo "hello" > /dev/tty1
```
will display hello in the terminal associated with /dev/tty1.
This demonstrates that terminals behave exactly like writable files from the operating system’s perspective.

### `read` and File Position

The function:
```bash
ssize_t read(int fd, void *buf, size_t count);
```
- reads up to count bytes from fd into buf
- returns the number of bytes read
- returns `0` on EOF
- returns `-1` on error
The operating system remembers the current read position for each file descriptor, which allows successive calls to `read` to continue from where the previous call stopped.

---

## Instructions
### Compilation (no Makefile required)
Compile the project using:
```bash
cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c
```
You can also test different buffer sizes:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=1 main.c get_next_line.c get_next_line_utils.c
```
You can check for memory leaks using:
```bash
valgrind --leak-check=full ./a.out
```

### Example `main.c`
```c
#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("Line -> %s", line);
		free(line);
	}
	close(fd);
	return (0);
}
```

### Example `file.txt`
```txt
Hi! My name is
Serena Zaarour.
I am an Engineering
& 42 Beirut Student.
```

---

## References
- man write
- man read
- http://codequoi.com/en/handling-a-file-by-its-descriptor-in-c/
- https://medium.com/@dhzdynamic/file-handling-in-c-exploring-i-o-system-calls-and-file-descriptors-b581b42616f8
- https://www.youtube.com/watch?v=8E9siq7apUU&t=1989s
- Tester: https://github.com/Tripouille/gnlTester

## AI Usage
AI was used as a reasoning and explaining assistant.
Specifically, it was used to:
- Explain low-level system concepts such as file descriptors.
- Clarify how read and write work internally
- Debug edge cases and generate additional edge cases for tests.
- Interpret Valgrind outputs. 
- Guide step-by-step debugging using gdb.

---

**Author:** Serena Zaarour <br>
**Intra:** szaarour  
**Cohort:** 1.1  
**42 Campus:** Beirut  
**Milestone:** 1  

---
