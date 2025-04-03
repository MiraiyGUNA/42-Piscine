# Norm Cheat Sheet

### Summary of Rules for Writing Code According to the Norm (Version 4.1)

#### Core Naming Conventions:
- **Structures**: Must start with `s_`.
- **Typedefs**: Must start with `t_`.
- **Unions**: Must start with `u_`.
- **Enums**: Must start with `e_`.
- **Globals**: Must start with `g_`.

#### General Identifier Rules:
- All identifiers (variables, functions, types) must follow snake_case: lowercase letters, digits, and underscores.
- Identifiers should be readable as English words separated by underscores.
- No capital letters are allowed in identifiers.

#### Code Formatting Rules:
- **Line Length**: Each line must not exceed 80 columns (excluding spaces used for tabs).
- **Function Structure**: Functions should be concise, with a maximum of 25 lines (excluding braces).
- **Whitespace**: Use 4-character tabulations for indentation. Avoid mixing tabs and spaces.
- **Code Separation**: Place each function in its own block, separated by at least one empty line.
- **Comments**: Include comments to make the code understandable.

#### Additional Rules:
- **Function Naming**: Function names should be short and descriptive, performing only one action.
- **Forbidden Items**: No global variables (unless marked as `const` or `static`). Avoid overly complex structures that complicate maintenance.
- **Makefile Guidelines**: Files must compile. A failing file is unacceptable.

#### Versioning and Look/Feel:
- The code's look and feel contributes to its maintainability, making it familiar and easy to understand for others.
- The long-term goal is to write maintainable and readable code that minimizes bugs and maintenance effort.

### Example of Correctly Using the Standard

Here’s an example of a function written according to these rules:

```c
// Chapter I: Foreword
// This file follows the 42 standard for clarity and maintainability.
// The norm emphasizes clean coding practices.

/**
 * Determines if a number is positive, negative, or zero.
 */
int classifyNumber(int num) {
    // Function body omitted for brevity but adheres to line length rules.
}
```

This example:
- Uses meaningful naming (`classifyNumber`).
- Maintains proper indentation with tabs.
- Keeps lines within the 80-column limit.
- Includes a comment block explaining its purpose.