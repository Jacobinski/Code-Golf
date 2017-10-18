    /* For: https://codegolf.stackexchange.com/questions/145590/hopping-numbers */
    #include <string.h>
    #include <stdio.h>

    int main( void )
    {
    int prev_diff, diff, len;
    int num = 11;
    char str[10];

    while(num<123456789)
        {
        prev_diff = 0;
        sprintf(str,"%d",++num);
        len = strlen(str)-1;
        for( ; len > 0; len-- )
            {
            diff = str[len] - str[len-1];
            if( prev_diff == 0 )
                {
                prev_diff = diff;
                }
            if( prev_diff != diff || diff < 1 )
                {
                break;
                }
            prev_diff = diff;
            }
        if ( len == 0 )
            {
            puts(str);
            }
        }
    }
