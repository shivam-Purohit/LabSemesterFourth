#include<stdio.h>
#include<unistd.h>

int main(){
    int cnt = 0;
    int pid ;
    for ( cnt = 0; cnt < 3; cnt++)
    {
       pid = fork();
       printf("now in progress %d \n",getpid());

    }
          return 0; 
}