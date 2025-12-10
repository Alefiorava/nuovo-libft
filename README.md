# *Questo progetto è stato realizzato come parte del curriculum 42 da `alfiorav`.*

# Libft

## Descrizione

Libft è il primo progetto del curriculum 42.  
Consiste nella creazione di una libreria personale in C, contenente reimplementazioni delle principali funzioni della libreria standard e funzioni aggiuntive utili nella programmazione di basso livello.

Lo scopo del progetto è capire il comportamento interno delle funzioni della libc, migliorare la gestione della memoria e fornire una libreria riutilizzabile nei progetti successivi.

---

# Struttura del Progetto

## Parte 1 — Funzioni della libc

Reimplementazione delle funzioni standard della libreria C (stesso comportamento documentato nel manuale, nomi con prefisso `ft_`).

### Funzioni di controllo caratteri
- **`ft_isalpha`** — controlla se il carattere passatogli è una elttera
- **`ft_isdigit`** — controlla se il carattere passatogli è un numero
- **`ft_isalnum`** — controlla se il carattere passatogli è una lettera o un numero
- **`ft_isascii`** — controlla se il carattere passatogli è presente nella tabella ascii
- **`ft_isprint`** — controlla se il carattere passatogli è stampabile

### Funzioni di gestione della memoria
- **`ft_memset`** — riempie un array con un carattere passatogli
- **`ft_bzero`** — mette tutti i byte a zero in un array
- **`ft_memcpy`** — copia dei byte da un array ad un altro
- **`ft_memmove`** — copia dei byte da un array ad un altro gentendo le sovrapposizioni
- **`ft_memchr`** —	cerca un carattere specifico allinterno di un array in u determinato range
- **`ft_memcmp`** — confronta 2 aree di memoria 

### Funzioni di gestione stringhe
- **`ft_strlen`** — ritorna la lunghezza di una array
- **`ft_strlcpy`** — copia la stringa dentro un buffer ritornando la lunghezza di quella originale
- **`ft_strlcat`** — concatena 2 stringhe
- **`ft_strchr`** — ritorna la posizione di un carattere all' interno di un array partendo dall`inizio
- **`ft_strrchr`** —ritorna la posizione di un carattere all' interno di un array partendo dalla fine
- **`ft_strncmp`** — confrona 2 aree di memoria fino a n byte
- **`ft_strnstr`** — cerca una stringa all`interno di un altra stringa fino a n byte

### Conversioni
- **`ft_toupper`** — converte un carattere da minuscolo a maiusscolo 
- **`ft_tolower`** — converte un carattere da maiuscolo a minuscolo
- **`ft_atoi`** — converte una stringa di cifre in un instero

### Funzioni con allocazione dinamica
- **`ft_calloc`** — alloca una memoria mettendo tutti i byte a zero
- **`ft_strdup`** — duplica una stringa

---

## Parte 2 — Funzioni Aggiuntive

Funzioni per manipolazione stringhe, conversioni e output.

### Manipolazione stringhe
- **`ft_substr`** — estrae una stringa composta da una porzione di quella originale per la lunghezza data
- **`ft_strjoin`** — concatena 2 stringhe
- **`ft_strtrim`** — prende una stringa e rimuove tutti i caratteri dall' inizinoe e dalla fine della stringa in base ai caratteri di set
- **`ft_split`** — prende una stringa e la divide in base al terminatore che gli passi

### Conversioni
- **`ft_itoa`** — converte un intero in una stringa

### Funzioni di mappatura/iterazione
- **`ft_strmapi`** — crea una stringa applicando una funzione a ognicarattere della stringa
- **`ft_striteri`** — itera una funzione su una stringa

### Funzioni di output su file descriptor

- **`ft_putchar_fd`** — scrive un carattere sul file descriptor.
- **`ft_putstr_fd`** — scrive una stringa così com’è, senza newline.
- **`ft_putendl_fd`** — scrive una stringa seguita da `\n`.
- **`ft_putnbr_fd`** — scrive un numero intero gestendo anche i negativi.

---

## Parte 3 — Liste

### Funzioni per le liste concatenate

- **`ft_lstnew`** — crea un nodo nella lista con in contenuto che gli ofrnisci te
- **`ft_lstadd_front`** — aggiunge un nodo all'inizio della lista
- **`ft_lstsize`** — ti ritorna la lunghezza della lista
- **`ft_lstlast`** — restituisce l'ultimo nodo della lista
- **`ft_lstadd_back`** — aggiunge un nodo alla fine della lista
- **`ft_lstdelone`** — cancella un solo nodo liberando la memoria di quel nodo
- **`ft_lstclear`** — cancella e libera l'intera lista 
- **`ft_lstiter`** — applica una funzione a ogni nodo della lista
- **`ft_lstmap`** — crea una nuova lista applicando una funzione a ogni nodo della lista originale

### Struttura richiesta

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

```

---

# Istruzioni 

### **Compilazione**
Per compilare la libreria:

```sh
make
```

### Per ripulire i file oggetto:

```sh
make clean
```

### Per rimuovere anche la libreria:

```sh
make fclean
```

### Per ricompilare tutto da zero:

```sh
make re
```

# Risorse

## Documentazione utilizzata

- `Manuale delle funzioni: man <funzione>`

## Uso dell’AI nel progetto

L’intelligenza artificiale è stata utilizzata esclusivamente per:

- `chiarimenti teorici sulle funzioni della libc;`

- `spiegazioni concettuali dei subject senza generare codice.`

- `supporto nella stesura e nel codice del README;`

