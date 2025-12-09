# *Questo progetto è stato realizzato come parte del curriculum 42 da `<tuo_login>`.*

# Libft

## Descrizione

Libft è il primo progetto del curriculum 42.  
Consiste nella creazione di una libreria personale in C, contenente reimplementazioni delle principali funzioni della libreria standard (libc) e funzioni aggiuntive utili nella programmazione di basso livello.

Lo scopo del progetto è capire a fondo il comportamento interno delle funzioni della libc, migliorare la gestione della memoria e fornire una libreria riutilizzabile nei progetti successivi.

---

# Struttura del Progetto

## Parte 1 — Funzioni della libc

Reimplementazione delle funzioni standard della libreria C (stesso comportamento documentato nel manuale, nomi con prefisso `ft_`).

### Funzioni di controllo caratteri
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### Funzioni di gestione della memoria
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

### Funzioni di gestione stringhe
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`

### Conversioni
- `ft_toupper`
- `ft_tolower`
- `ft_atoi`

### Funzioni con allocazione dinamica
- `ft_calloc`
- `ft_strdup`

---

## Parte 2 — Funzioni Aggiuntive

Funzioni utili per manipolazione stringhe, conversioni e output.

### Manipolazione stringhe
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`

### Conversioni
- `ft_itoa`

### Funzioni di mappatura/iterazione
- `ft_strmapi`
- `ft_striteri`

### Funzioni di output su file descriptor
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## Parte 3 — Liste Collegate

### Struttura richiesta

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
