#include <stdio.h>
#include <unistd.h>

int main(void)
{
	/* declaration of pid */
	pid_t pid, ppid, c_pid;

	/*initialising*/
	pid = getpid();
	ppid = getppid();

	printf("The process ID is:%d\n", pid);
	printf("Tme parent process ID is: %d\n", ppid);
	c_pid = fork();
	if (c_pid ==0)
	{
		printf("This is a child process\n");
		printf("Parent process ID (PPID): %d\n", getppid());
		printf("current process ID (PID): %d\n", getpid());
	}
	else if (c_pid > 0)
	{
		printf(This is a parent process:\n");
		printf

	return (0);
}
