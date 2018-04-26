#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	/* code */
	char c;
	int i,nread;
	char buf[32]={0};
	int origin,temp;
	origin=open("file1.txt",O_RDONLY);
	temp=open("file2.txt",O_WRONLY|O_CREAT,S_IRUSR);
	//nread表示文件字符的数量
	nread=read(temp,buf,sizeof(buf));
	//将内容中的小写字母转换为大写
	for(i=0;i<=nread-1;i++)
		buf[i]=toupper(buf[i]);

	write(temp,buf,nread);


	return 0;
}