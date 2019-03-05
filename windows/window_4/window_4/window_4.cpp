/*Write a program to open an existing file with CreateFile and 
use ReadFile to read the contents of file till EOF and print the contents to console.
*/
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<tchar.h>
#define BUFFER_SIZE 100
int _tmain(int argc, TCHAR *argv[])
{
	HANDLE myfile;
	if (argc != 2)
	{
		_tprintf(_T("usage file myfileread.exe<name of the file>"));
		getchar();
		return FALSE;

	}
	myfile = CreateFile(argv[1], //lpfilename
		GENERIC_READ,            //dwDesiredAccess
		0,                       //dwShareMode
		NULL,                    //lpSecurityAttributes
		OPEN_EXISTING,           //dwCreationDisposition
		FILE_ATTRIBUTE_NORMAL,   //dwFlagsAndAttributes
		NULL);                   //hTemplateFile
	if (myfile == INVALID_HANDLE_VALUE)
	{
		printf("File hasn't been created due to %d",GetLastError());
	}
	else
	{
		printf("Files %S is created", argv[1]);
	}

	DWORD no_of_bytes;
	PVOID buffer[BUFFER_SIZE];
	ZeroMemory(buffer,BUFFER_SIZE);
	BOOL value=ReadFile(myfile,   //hFile
		buffer,                   //lpBuffer
		BUFFER_SIZE,              //nNumberOfBytesToRead
		&no_of_bytes,             //lpNumberOfBytesRead
		NULL);                    //lpOverlapped
	if (value&&no_of_bytes == 0)
	{
		printf("File hasn't been created due to %d", GetLastError());
	}
	CloseHandle(myfile);
	printf("File contents are %s: %s\n", argv[1], buffer);
	getchar();
}