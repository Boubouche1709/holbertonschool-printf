<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - printf Project

## Table of Contents
- [Project Description](#-project-description)
- [Requirements](#-requirements)
- [Features](#-features)
- [Man Page Installation](#-man-page-installation)
- [Current Limitations](#-current-limitations)
- [Recommended Development Process](#-recommended-development-process)
- [Comparaisons](#-comparaisons).
- [Flowchart](#-flowchart)
- [Authors](#-authors)

## 📝 Project Description
This project is a custom implementation of the standard C library `printf` function, developed as part of a learning exercise in low-level programming.
The `_printf` function provides formatted output conversion with a subset of standard printf.

## 🛠 Requirements
### General
- **Allowed Editors**: `vi`, `vim`, `emacs`
- **Compilation Environment**: Ubuntu 20.04 LTS
- **Compiler**: GCC with specific flags

### Compilation Flags
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Code Standards
- All files must end with a new line
- Use Betty coding style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum of 5 functions per file
- All function prototypes in `main.h`
- Header files must use include guards

### Authorized Functions
- `write()`
- `malloc()`
- `free()`
- `va_start()`
- `va_end()`
- `va_copy()`
- `va_arg()`

## ✨ Features
- Custom implementation of `printf`
- Supports multiple format specifiers:
  - `%c`: Character printing
  - `%s`: String printing
  - `%d` and `%i`: Integer printing
  - `%%`: Percent sign printing

## 📖 Man Page Installation
### Prerequisites
- Git
- Superuser (root) access
- Basic terminal knowledge

### Installation Steps
#### 1. Clone the Repository
```bash
git clone https://github.com/your-username/your-repository.git
cd your-repository
```
#### Verifying Installation
```bash
man ./man_3_printf.3
```

### Troubleshooting
- Ensure necessary permissions
- Verify script location
- Check `mandb` installation

### Uninstallation
```bash
sudo rm /usr/local/share/man/man3/man_3_printf.3
sudo mandb
```

## 🔍 Current Limitations
- Limited format specifier support
- No floating-point number handling
- Basic error management

## 📋 Recommended Development Process
1. Implement basic functionality
2. Create thorough test cases
3. Handle edge cases
4. Optimize and refactor
5. Ensure Betty style compliance
   
## 📌 Comparaisons

```c
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
len = _printf("Percent:[100%%]\n");
len2 = printf("Percent:[100%%]\n");
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Character: Our initials are [%c.%c] and [%c.%c]\n", 'H', 'F', 'H', 'K');
printf("Character: Our initials are [%c.%c] and [%c.%c]\n", 'H', 'F', 'H', 'K');
_printf("String:[%s]\n", "Our name is Florian and Heytem !");
printf("String:[%s]\n", "Our name is Florian and Heytem !");

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Percent:[100%]
Percent:[100%]
Length:[15, 15]
Length:[15, 15]
Negative:[-762534]
Negative:[-762534]
Character: Our initials are [H.F] and [H.K]
Character: Our initials are [H.F] and [H.K]
String:[Our name is Florian and Heytem !]
String:[Our name is Florian and Heytem !]
```

## 🔄 Flowchart
<p align="center">
   <img src="https://github.com/user-attachments/assets/520a18b1-3ad3-4454-868f-9c6404cfa614"/>
</p>


## 👥 Authors
- [Boubouche1709](https://github.com/Boubouche1709)
- [h7k2](https://github.com/h7k2)
