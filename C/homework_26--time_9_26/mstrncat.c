#include <stdio.h>
#include <string.h>
#include <assert.h>

char* mstrncat(char *destination, const char *source, size_t num){
    assert(destination && source);
    char *ret = destination;

    while(*destination != '\0'){
        destination++;
    }

    while(num-- > 0){
        if((*destination++ = *source++) == '\0')
            break;
    }
    if(num == 0 && *(destination - 1) != '\0')
        *destination = '\0';
    return ret;
}

int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
//   strncat (str1, str2, 6);
  mstrncat(str1, str2, 6);
  puts (str1);
  return 0;
}