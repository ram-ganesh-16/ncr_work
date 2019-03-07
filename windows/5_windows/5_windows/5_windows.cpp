/*Write a program to create a new file with CreateFile and use WriteFile to write text to file. 
Verify the written text by manually opening file in notepad/wordpad etc.
*/
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<tchar.h>
#define BUFFER_SIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE myfile;
	TCHAR buffer[BUFFER_SIZE]=L"File is created and content are been loaded";
	if (argc != 2)
	{
		_tprintf(_T("usage file myfileread.exe<name of the file>"));
		getchar();
		return FALSE;

	}
	myfile = CreateFile(argv[1], //lpfilename
		GENERIC_WRITE,            //dwDesiredAccess
		0,                       //dwShareMode
		NULL,                    //lpSecurityAttributes
		OPEN_EXISTING,           //dwCreationDisposition
		FILE_ATTRIBUTE_NORMAL,   //dwFlagsAndAttributes
		NULL);                   //hTemplateFile
	if (myfile == INVALID_HANDLE_VALUE)
	{
		printf("File hasn't been created due to %d", GetLastError());
	}
		_tprintf(TEXT("Files %S is opened\n"), argv[1]);
	DWORD no_of_bytes;
	
	ZeroMemory(buffer, BUFFER_SIZE);
	BOOL value = WriteFile(myfile,   //hFile
		buffer,                   //lpBuffer
		BUFFER_SIZE,              //nNumberOfBytesTowrite
		&no_of_bytes,             //lpNumberOfByteswritten
		NULL);                    //lpOverlapped
	if (value == 0)
	{
		printf("File hasn't found: %d", GetLastError());
	}
	CloseHandle(myfile);
	printf("%d", value);
	_tprintf(TEXT("File contents are %s: %s\n"), argv[1], buffer);
	getchar();
}