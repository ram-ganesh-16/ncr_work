/*Write a program to print environment variables passed to the console application.
Also demonstrate the usage of ExpandEnvironmentStrings API*/
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<tchar.h>
void Dump_env_strings(PTSTR pEnvBlock[])
{
	int curr_position=0;
	PTSTR *present_element = (PTSTR *)pEnvBlock;
	PTSTR pCurrent = NULL;
	while (present_element != NULL)
	{
		pCurrent = (PTSTR)(*present_element);
		if (pCurrent == NULL)
			present_element = NULL;
		else
		{
			_tprintf(TEXT(" [%u] %s\r\n"), curr_position, pCurrent);
			curr_position++;
			present_element++;
		}


	}

}
void _tmain(int argc,LPCTSTR *argv[],TCHAR *env[])
{
	Dump_env_strings(env);
	int tchar_size;
	LPCTSTR env_var_string = L"%USERNAME%";
	TCHAR receive_string[MAX_PATH];
	tchar_size=ExpandEnvironmentStrings(env_var_string,receive_string,MAX_PATH);
	if (tchar_size == 0)
	{
		printf("Some error occurred i.e:%d", GetLastError());
	}
	else
	{
		//%LS,%Ls,%ls,%lS anything can be used u will be get the output that is required 
		//but it is better to use %lS because it is documented 
		printf("\n%lS\n", receive_string);
	}
	getchar();
}
