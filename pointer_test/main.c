
#include <stdio.h>

char *c[] = {"HELLO","NEW","WORLD","SAYHI"};
char **cp[]={c+3,c+2,c+1,c};
char ***cpp=cp;

int main(void)
{
    printf("%s\n",*cpp[2]);
    printf("%s\n",**++cpp);
    printf("%s 3\n", *cp[2] );
    printf("%s\n",*--*++cpp+3);
    printf("3 %s\n", *cp[2] );
    printf("%s\n",**cpp);
    printf("%s\n",*cpp[-2]+3);

    printf("%s\n",cpp[-1][-1]+1);
    printf("%s\n",cpp[-1]);
}
