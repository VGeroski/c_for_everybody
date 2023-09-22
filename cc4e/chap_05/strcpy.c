/* strcpy: copy t to s */
void strcpy(char *s, char *t) {
  
  while ((*s = *t) != '\0') {
    s++;
    t++;
  }
}

/* strcpy: copy t to s, version 2*/
void strcpy2(char *s, char *t) {
  
  while ((*s++ = *t++) != '\0')
    ;
}