#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(){
int pid;
pid = fork();
if(pid!=0){
    while(1)
    sleep(100);
}
else{
    printf("pid is %d ",getpid());
    exit(1);
}

}