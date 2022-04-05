# ft_printf

*A simple recode of libc's printf*

## Description

* ft_printf does not use buffer management like the real printf function
* It manages the following conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%`
* Like the real printf function, ft_printf returns the number of characters it printed

## Prototype

```h
int	ft_printf(const char *format, ...);
```

## Usage
```sh
git clone https://github.com/Archer-01/ft_printf.git
cd ft_printf
touch main.c
```
```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("%s is cool! %d/100", "ft_printf", 100);
	return (0);
}
```
```sh
make
gcc main.c -L. -lftprintf
./a.out
```

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)