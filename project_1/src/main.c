#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    char str[SIZE] = {"https://some-tested-text.com"};
    /* ввод с клавиатуры */
    /*fgets(str, sizeof(str)-1, stdin); 
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';*/
    char *ptr_str = str;
    while (ptr_str != NULL){
        ptr_str = strstr(ptr_str, "-"); 
        if(ptr_str != NULL)
        {
            char str_tmp[100] ={0};
            strcpy(str_tmp, ptr_str);
            strcpy(ptr_str,"-+-");
            ptr_str += 2;
            strcpy(ptr_str, str_tmp);
            ptr_str++;
        }
    }
    printf("%s", str);
    return 0;
}