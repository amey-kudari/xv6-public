#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
// #include "proc.h"

int main (int argc,char *argv[]){
    // printf(1,"TEST PROGRAM CALLED\n");
    int su=0;
    for(volatile int j=0;j<200000;j++){
        for(volatile int i=0;i<20000;i++){ su+=i; su-=j; }
    }
    // printf(1,"EXITING FROM TEST PROGRAM, %d\n",su);
    exit();
}
