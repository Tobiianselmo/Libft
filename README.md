# Libft 📚

## Tienes que crear una libreria que puedas usar en futuros proyectos

## Consideraciones técnicas
• Declarar variables globales está prohibido.

• Si necesitas separar una función compleja en varias, asegúrate de utilizar la palabra static para ello. De esta forma, las funciones se quedarán en el archivo apropiado.

• Pon todos tus archivos en la raíz de tu repositorio.

• Se prohibe entregar archivos no utilizados.

• Todos los archivos .c deben compilarse con las flags -Wall -Werror -Wextra.

• Debes utilizar el comando ar para generar la librería. El uso de libtool queda prohibido.

• Tu libft.a tiene que ser creado en la raíz del repositorio.

## Parte 1 - Funciones de Libc
Para empezar, deberás rehacer algunas funciones de la libc. Tus funciones tendrán los mismos prototipos e implementarán los mismos comportamientos que las funciones originales. Deberán ser tal y como las describe el man. La única diferencia será la nomenclatura. Empezarán con el prefijo “ft_”. Por ejemplo, strlen se convertirá en ft_strlen.

• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero
• memcpy • memmove • strlcpy • strlcat • calloc • strdup 
• toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi

## Parte 2 - Funciones adicionales
En esta segunda parte, deberás desarrollar un conjunto de funciones que, o no son de la librería libc, o lo son pero de una forma distinta.

• ft_substr • ft_strjoin • ft_strtrim ft_split • ft_itoa • ft_strmapi • ft_striteri • ft_putchar_fd • ft_putstr_fd • ft_putendl_fd • ft_putnbr_fd

## Parte 3 - Parte bonus
Si completas la parte obligatoria, no dudes en llevarla más lejos haciendo esta parte
extra. Te dará puntos adicionales si la completas correctamente.

Las funciones para manipular memoria y strings son muy útiles... Pero pronto descubrirás que la manipulación de listas lo es incluso más.
Deberás utilizar la siguiente estructura para representar un nodo de tu lista. Añade
la declaración t_list a tu archivo libft.h.

Los miembros de la estructura t_list son:
• content: la información contenida por el nodo.
void *: permite guardar cualquier tipo de información.
• next: la dirección del siguiente nodo, o NULL si el siguiente nodo es el último.

En tu Makefile, añade una regla make bonus que incorpore las funciones bonus a tu
libft.a.

• ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap
