# c-programming-language-2-edition

## Compile programm

% gcc -std=c11 -Wall -Wextra -o name-of-binary file-name.c

## 📜 Форматные спецификаторы в C (`printf` / `scanf`)

| Спецификатор | Тип данных                    | Пример использования                                        |
| ------------ | ----------------------------- | ----------------------------------------------------------- |
| `%d`         | `int`                         | `printf("%d\n", 42); // 42`                                 |
| `%u`         | `unsigned int`                | `printf("%u\n", 42u); // 42`                                |
| `%f`         | `float` / `double` _(printf)_ | `printf("%f\n", 3.14); // 3.140000`                         |
| `%lf`        | `double` _(scanf)_            | `scanf("%lf", &x);`                                         |
| `%c`         | `char`                        | `printf("%c\n", 'A'); // A`                                 |
| `%s`         | `char *` (строка)             | `printf("%s\n", "Hello"); // Hello`                         |
| `%p`         | указатель (`void *`)          | `printf("%p\n", (void*)&a);`                                |
| `%x` / `%X`  | `unsigned int` (hex)          | `printf("%x\n", 255); // ff` / `printf("%X\n", 255); // FF` |
| `%o`         | `unsigned int` (octal)        | `printf("%o\n", 255); // 377`                               |
| `%ld`        | `long int`                    | `printf("%ld\n", 1234567890L);`                             |
| `%lu`        | `unsigned long int`           | `printf("%lu\n", 1234567890UL);`                            |
| `%lld`       | `long long int`               | `printf("%lld\n", 9223372036854775807LL);`                  |
| `%llu`       | `unsigned long long int`      | `printf("%llu\n", 18446744073709551615ULL);`                |
| `%e` / `%E`  | `double` (экспоненциальная)   | `printf("%e\n", 3.14); // 3.140000e+00`                     |
| `%%`         | символ `%`                    | `printf("100%% complete\n"); // 100% complete`              |

### 💡 Примечания

- В **`printf`** `float` автоматически преобразуется в `double`, поэтому `%f` работает для обоих.
- В **`scanf`** указывайте точный тип: `%f` для `float`, `%lf` для `double`.
- Для `%s` передаётся **указатель на первый символ** (`char *`), а не отдельный `char`.
- Для работы с типами разной длины используйте модификаторы:
  - `h` — short (`%hd`, `%hu`)
  - `l` — long (`%ld`, `%lu`, `%lf`)
  - `ll` — long long (`%lld`, `%llu`)

### Null character

'\0'

## Formulas

### Формула остатка целочисленного деления:

a % b = a - b \* floor(a / b)

### From fahrenheit to celsius

C = 5 / 9 \* (F - 32)

### From celsius to fahrenheit

F = 9 / 5 \* C + 32
