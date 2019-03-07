/*Write a program to create a process using CreateProcess API.
Child process can be any your previously implemented programs.*/
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<tchar.h>
void _tmain(int argc, TCHAR *argv[],TCHAR *env[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));

	if (argc != 2)
	{
		printf("Usage: %s [cmdline]\n", argv[0]);
		getchar();

	}

	// Start the child process. 
	BOOL res = CreateProcess(NULL,   // No module name (use command line)  lpApplicationName,
		argv[1],        // Command line                              lpCommandLine,
		NULL,           // Process handle not inheritable            lpProcessAttributes,
		NULL,           // Thread handle not inheritable             lpThreadAttributes,
		TRUE,          // Set handle inheritance to FALSE           bInheritHandles,
		0,              // No creation flags                         dwCreationFlags,
		NULL,           // Use parent's environment block            lpEnvironment,
		NULL,           // Use parent's starting directory           lpCurrentDirectory,
		&si,            // Pointer to STARTUPINFO structure          lpStartupInfo,
		&pi);         // Pointer to PROCESS_INFORMATION structure   lpProcessInformation
	
	if(res==0)
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
		getchar();
	}
	else
	{
		printf("Event is been created");
		getchar();
	}

	// Wait until child process exits.
	WaitForSingleObject(pi.hProcess, INFINITE);

	// Close process and thread handles. 
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	getchar();

}