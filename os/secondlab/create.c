#include<stdio.h>  
#include<string.h>    
#include<unistd.h> 
#include<fcntl.h>                           
#include<stdlib.h>  
int main()  
{  
    
   char filename[]="example.txt",O_WRONGLY ,O_CREATE;  
   int filedes, close_err;  
   /*open the file , filename for writing or create It if it does not exist*/   
   filedes=open(filename , O_WRONLY | O_CREATE , 0);  
   if(filedes==-1)  
   {  
      printf("The file cannot be opened\n");  
   }  
   else  
   {  
      close_err=close(filedes);  
      if(close_err==-1)  
      {  
         printf("The file cannot be closed\n");  
      }  
   }  
   
   return 0;  
}  