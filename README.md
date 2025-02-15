```markdown
# LineReader

LineReader is a C project that reads one line at a time from a file descriptor. It efficiently manages memory and buffer sizes, handling both files and standard input.

## Features

- Reads one line at a time from a file descriptor.
- Handles both files and standard input.
- Efficient memory and buffer size management.

## Requirements

- C compiler (e.g., GCC)
- Makefile for compiling the project

## Compilation

To compile the project, run:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o line_reader
```

Make sure to replace `42` with the desired buffer size.

## Usage

Once compiled, you can run the project with the following command:

```bash
./line_reader <file_descriptor>
```

Replace `<file_descriptor>` with the file descriptor or input source you wish to read from.
