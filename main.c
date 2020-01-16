#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid;

    child_pid = fork();
    if (child_pid > 0) {
        sleep(30);  // sleep in parent will create a zombie
                    // as the parent is not able
                    // to receive signal that child has
                    // terminated. <defunct> in ps aux
        wait(NULL);
    }
    else {
        exit(0);
    }
    return 0;
}
