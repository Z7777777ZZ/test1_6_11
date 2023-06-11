#include <stdio.h>
#include <string.h>

int main()
{
    const char *st[] = {"bag", "good", "This", "are", "Zoo", "park"};
    const char *smin;
    int i;
        
    smin= 
st
 ;
    for(i = 1; i < 6; i++){
        if(strcmp( 
st[i],st[i-1]
 ) < 0){
            smin = st[i];
        }
    }
    printf("%s\n", 
smin
 );
        
    return 0;
}
