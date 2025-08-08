# ft\_printf

## 📝 Overview

`ft_printf` is a custom implementation of the standard C `printf()` function. It replicates key functionality of the original, handling various format specifiers, variadic arguments, and character output — all without using standard library formatting functions.

---

## 📌 Features

* Complete reimplementation of `printf()` from scratch
* Supports multiple format specifiers:

  * `%c` → character
  * `%s` → string
  * `%p` → pointer (hexadecimal format)
  * `%d`, `%i` → signed decimal integers
  * `%u` → unsigned decimal integers
  * `%x`, `%X` → hexadecimal (lower/upper)
  * `%%` → literal percent sign
* Fully variadic using `<stdarg.h>`
* Memory-safe (no buffer overflow or leaks)
* Output managed only through `write()`
* Packaged as a static library: `libftprintf.a`

---

## 🔧 Build Instructions

1. Clone the repository.
2. Run `make` to compile the library.

```bash
git clone https://github.com/harishnr93/ft_printf.git
cd ft_printf
make
```

This will generate the `libftprintf.a` static library at the root of the project.

---

## 🧩 Usage

Include the header and link the library in your project:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Score: %d%%\n", "Alice", 100);
    ft_printf("Pointer: %p | Hex: %x | Upper Hex: %X\n", (void *)main, 255, 255);
    return 0;
}
```

Compile using:

```bash
cc main.c libftprintf.a
```

---

## ✅ Implementation Notes

* Variadic arguments are handled using `va_start`, `va_arg`, and `va_end`.
* Characters are printed one at a time using `write()`.
* Integer to string conversion is implemented manually.
* Pointer addresses are converted to hexadecimal using custom logic.
* No use of `printf`, `sprintf`, `snprintf`, or any standard output formatting tools.

---

## 🔒 Restrictions Followed

* Only allowed system calls: `write`, `malloc`, `free`
* No use of buffered output
* `ar` used to create `libftprintf.a`
* `libtool` is not used
* All mandatory conversions implemented
* Library is built at root as required

---

## 🛠 Makefile Targets

| Target   | Description                      |
| -------- | -------------------------------- |
| `all`    | Builds the library               |
| `clean`  | Removes object files             |
| `fclean` | Removes object files and library |
| `re`     | Rebuilds from scratch            |

---

## 🧠 What I Learned

* Implementing variadic functions in C
* Manual base conversion (decimal, hexadecimal)
* Custom format parsing and flag handling
* Writing modular, testable C code
* Using static libraries (`.a`) and `ar`

---