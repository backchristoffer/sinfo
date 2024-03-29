#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/utsname.h>

int main()
{
 struct utsname uname_pointer;

 uname(&uname_pointer);

 printf("System name - %s \n", uname_pointer.sysname);
 printf("Nodename    - %s \n", uname_pointer.nodename);
 printf("Release     - %s \n", uname_pointer.release);
 printf("Version     - %s \n", uname_pointer.version);
 printf("Machine     - %s \n", uname_pointer.machine);

 return 0;
}