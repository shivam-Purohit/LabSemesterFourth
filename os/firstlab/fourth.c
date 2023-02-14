#include<stdio.h>
#include<unistd.h>
int main(void){
    int pid;
    pid = fork();
    if(pid!=0){
        printf("i am parent with id %d \n and parent parent id %d \n",getpid(),getppid());
        printf("my child pid is %d \n", pid);

    }
    else{
    sleep(40);
    printf("i m child with %d ",getpid());
    }
    printf("pid is %d",getpid());
    return 0;
}