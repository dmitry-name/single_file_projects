#include <stdio.h>
#include <string.h>

int check_email( char *str )
{
    int cnt = 0, am_pos = 0, i; 
    for( i = 0; i < strlen(str); i++ ) 
    {
        if( str[ i ] == '@' ) 
        {
            if( i == 0 || i > strlen(str) - 1 ) return 0;    
            cnt++; 
            am_pos = i;   
            if( cnt > 1 ) return 0; 
        }
    }
    if( cnt == 0 ) return 0; 
    cnt = 0;
    for( i < strlen(str) - 1; i > am_pos; i-- ) 
    {
        if( str[ i ] == '.' ) 
        { 
            cnt++;
            if( i == am_pos + 1 ) return 0;
        }    
    }
    if( cnt == 0 ) return 0;
    int flag;
    
    for( i = 0; i < strlen(str); i++ ) 
    {
        flag = 0;
        if( str[ i ] >= 'a' && str[ i ] <= 'z' ) flag = 1;
        if( str[ i ] >= 'A' && str[ i ] <= 'Z' ) flag = 1;
        if( str[ i ] >= '0' && str[ i ] <= '9' ) flag = 1;
        if( strchr(  "@.-_"  , str[ i ] ) ) flag = 1;
        if( flag == 0 ) return 0;
    }
    return 1;
}

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';

    printf( "%d", check_email( str ) );
    
    
    return 0;
}