#include<stdio.h>
#include<unistd.h>
void main(){
    char * binarPath = "/bin/ls";
    char *args[] = {binarPath,"-lh","/home",NULL};
    execv(binarPath,args);
    printf("exec failed \n");
}