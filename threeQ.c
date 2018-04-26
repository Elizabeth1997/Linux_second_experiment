#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  /* code */
  pid_t pid;//pid_t为进程id类型
  printf("%s\n","Programming is starting");
  
  pid = fork();//创建一个子进程

  switch(pid) {
    case -1:
      perror("fork failed");
      exit(1);
    case 0:

    /* child */
    
    while(1)
    {
      sleep(1);//防止打出太多字符串放在前面打出9个字符串，放在后面则打出10个字符串
      printf("%s\n","Hello CSU");
    }
    default:
      sleep(10);
      kill(pid,SIGTERM);//向子进程发信号
      break;
  }
  return 0;
}

