// Chapter 6, Ex. 1

#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int closedir(DIR* dirp)
{
    free(dirp->d_buf);
    free(dirp);
    dirp = NULL;
    return close(dirp->d_fd);
}

int main()
{
    // no op
}
