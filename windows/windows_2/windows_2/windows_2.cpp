/*Implement a program where command line arguments passed to program are read via GetCommandLine and 
converted to argv style by CommandLineToArgvW.
*/
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<tchar.h>
void _tmain(int argc,_TCHAR *argv,char *envp[])
{
	LPWSTR *size_of_argument_list;
	int number_of_args = argc;
	int i;
	size_of_argument_list = CommandLineToArgvW(GetCommandLine(), &number_of_args);
	if (NULL == size_of_argument_list)
	{
		wprintf(L"no command line arguments");
	}
	else
	{
		for (i = 0; i < number_of_args; i++)
		{
			printf("%d : %lS", i, size_of_argument_list[i]);
			printf("\n");
		}
	}
	getchar();
}