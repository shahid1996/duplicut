#ifndef DEFINITIONS_H
# define DEFINITIONS_H

# define PROGNAME           "duplicut"
# define PROJECT_VERSION    "0.1a"
# define PROJECT_URL        "http://github.com/nil0x42/duplicut"

# define HMAP_LOAD_FACTOR   (0.5)
# define MEDIUM_LINE_BYTES  (6)
# define KEEP_FREE_MEMORY   (0xc800000L) // 200MB RAM kept unused as security

# define DISABLED_LINE      '\0'

// filehandle.c
void            check_files(char **array, int len);

#endif /* DEFINITIONS_H */