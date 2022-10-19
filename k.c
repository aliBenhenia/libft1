#include <unistd.h>
#include <fcntl.h>
int main(int argc, char const *argv[])
{
    int fd1 = open("qq",O_WRONLY);
    int fd2 = open("gg",O_WRONLY);
    int f3 = open("ll",O_WRONLY);
    write(fd1,"hi",2);
    
    return 0;
}
