# Text Processing Filters

This project consists of several C programs that act as filters to process text input. Each filter performs a specific text manipulation task, such as removing comments, spaces, or empty lines. The `count` program acts as a sink that processes the data from the pipe and prints statistics about the text.

## Files and Their Functions

1. **count.c**
   - **Purpose:** Counts characters, whitespaces, words, and lines in the input text.
   - **Usage:** `count.exe`

2. **remove_c_comments_filter.c**
   - **Purpose:** Removes C-style block comments from the input text.
   - **Usage:** `remove_c_comments_filter.exe`

3. **remove_cpp_comments_filter.c**
   - **Purpose:** Removes C++-style single-line comments from the input text.
   - **Usage:** `remove_cpp_comments_filter.exe`

4. **remove_empty_lines_filter.c**
   - **Purpose:** Removes empty lines from the input text.
   - **Usage:** `remove_empty_lines_filter.exe`

5. **remove_one_space_filter.c**
   - **Purpose:** Removes all whitespace characters from the input text.
   - **Usage:** `remove_one_space_filter.exe`

6. **remove_trailing_spaces_filter.c**
   - **Purpose:** Removes trailing spaces from each line in the input text.
   - **Usage:** `remove_trailing_spaces_filter.exe`

7. **remove_consecutive_spaces_filter.c**
   - **Purpose:** Removes consecutive whitespace characters from the input text.
   - **Usage:** `remove_consecutive_spaces_filter.exe`

8. **compile.sh**
   - **Purpose:** Shell script to compile all the C programs.
   - **Usage:** `./compile.sh`

## Compilation

To compile the programs, you can use the provided shell script:

```sh
./compile.sh
```

Alternatively, you can compile the programs manually using GCC (part of the MinGW or TDM-GCC distributions) or the Microsoft Visual C++ compiler.

### Using GCC (MinGW or TDM-GCC)

1. Open the Command Prompt.
2. Navigate to the directory containing your `.c` files.
3. Run the following command to compile each file:

   ```sh
   gcc count.c -o count.exe
   gcc remove_c_comments_filter.c -o remove_c_comments_filter.exe
   gcc remove_cpp_comments_filter.c -o remove_cpp_comments_filter.exe
   gcc remove_empty_lines_filter.c -o remove_empty_lines_filter.exe
   gcc remove_one_space_filter.c -o remove_one_space_filter.exe
   gcc remove_trailing_spaces_filter.c -o remove_trailing_spaces_filter.exe
   gcc remove_consecutive_spaces_filter.c -o remove_consecutive_spaces_filter.exe
   ```

## Usage

To use the filters, you can pipe the output of one filter to the input of another. For example, to remove C-style comments and then count the lines, you can use:

### On Windows:
```sh
type input.txt | remove_c_comments_filter.exe | count.exe
```

### On Unix-like systems:
```sh
cat input.txt | ./remove_c_comments_filter.exe | ./count.exe
```

### Input File

The `input.txt` file should contain the text you want to process. You can create or edit this file using any text editor. There is an `input.txt` file 
provided for testing.

## License

This project is licensed under the MIT License.

## Author

This project was created by [ElliAur](https://github.com/ElliAur) in 2024.