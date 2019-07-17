void assert(int expression)

int isalnum(int c) int isalpha(int c) int isdigit(int c) int isxdigit(int c)
int islower(int c) int isupper(int c)
int isprint(int c)
int isgraph(int c)
int iscntrl(int c)
int ispunct(int c)
int isspace(int c)

int tolower(int c) int toupper(int c)

INT_MIN INT_MAX 

void va_start(va_list ap, last_arg)
type va_arg(va_list ap, type)
void va_end(va_list ap)

size_t wchar_t NULL

offsetof(type, member-designator)
FILE fpos_t BUFSIZ EOF 

FOPEN_MAX FILENAME_MAX L_tmpnam TMP_MAX 

stderr stdin stdout 

int fclose(FILE *stream)
FILE *fopen(const char *filename, const char *mode)
FILE *freopen(const char *filename, const char *mode, FILE *stream)

void clearerr(FILE *stream)
int feof(FILE *stream) int ferror(FILE *stream)
int fflush(FILE *stream)
int fgetpos(FILE *stream, fpos_t *pos)

int fseek(FILE *stream, long int offset, int whence)
int fsetpos(FILE *stream, const fpos_t *pos)
long int ftell(FILE *stream)

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
int remove(const char *filename)
int rename(const char *old_filename, const char *new_filename)

void rewind(FILE *stream)

void setbuf(FILE *stream, char *buffer)
int setvbuf(FILE *stream, char *buffer, int mode, size_t size)

FILE *tmpfile(void)
char *tmpnam(char *str)

int fprintf(FILE *stream, const char *format, ...)
int printf(const char *format, ...)
int sprintf(char *str, const char *format, ...)
int vfprintf(FILE *stream, const char *format, va_list arg)
int vprintf(const char *format, va_list arg)
int vsprintf(char *str, const char *format, va_list arg)
	
int fscanf(FILE *stream, const char *format, ...)
int scanf(const char *format, ...)
int sscanf(const char *str, const char *format, ...)

int fgetc(FILE *stream)
int fputc(int char, FILE *stream)

char *fgets(char *str, int n, FILE *stream)
int fputs(const char *str, FILE *stream)
void perror(const char *str)

int getc(FILE *stream)
int putc(int char, FILE *stream)
int ungetc(int char, FILE *stream)

int getchar(void)
int putchar(int char)


EXIT_FAILURE EXIT_SUCCESS



void *malloc(size_t size)
void *calloc(size_t nitems, size_t size)
void *realloc(void *ptr, size_t size)
void free(void *ptr)

int atexit(void (*func)(void))
void exit(int status)
char *getenv(const char *name)
int system(const char *string)

void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))


RAND_MAX 
int rand(void)
void srand(unsigned int seed)

int strcmp(const char *str1, const char *str2)
int strncmp(const char *str1, const char *str2, size_t n)
int strcoll(const char *str1, const char *str2)

char *strncpy(char *dest, const char *src, size_t n)

size_t strlen(const char *str)

char *strrchr(const char *str, int c)
char *strchr(const char *str, int c)
char *strstr(const char *haystack, const char *needle)

char *strtok(char *str, const char *delim)
