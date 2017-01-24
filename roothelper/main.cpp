#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (setuid(0)) {
        perror("setuid");
        return 1;
    }
        argv[0] = "/usr/bin/harbour-tide";
        execv(argv[0], argv);

    return 0;
}
