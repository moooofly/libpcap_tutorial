#include <time.h>
#include <stdio.h>

main(){
    time_t timep;
    time (&timep);
    printf("%s", ctime(&timep));
}
