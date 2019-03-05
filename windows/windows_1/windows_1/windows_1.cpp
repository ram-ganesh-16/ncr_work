/*Write a program to convert ANSI string to Wide character string and vice versa.
Use MultiByteToWideChar and WideCharToMultiByte for conversion and IsTextUnicode for testing the results.
Note that IsTextUnicode output may not be always correct.*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<tchar.h>
void main()
{
	
	char character = 'G';
	wchar_t wide_character = L'￦';
	wchar_t widecharacter = L'￦';
	printf("The character you had given is:- %c\n",character);

	//%C is used for all the other key words present in the world like to use greek,latin and other user words
	printf("The widecharacter you had given is:- %C\n", wide_character);

	//the output in the all the other cases is different in the above case we cant see any character 
	
	wprintf(L"The widecharacter you had given is:- %C\n",widecharacter);
	
	CHAR ANSI_STRING[] = "The character string is of 1byte";
	WCHAR WIDE_STRING[] =L"The wide character string is of 2byte";
	
	//the printf prints all the string element is contained
	
	printf("The ANSI_STRING is:-%s\n",ANSI_STRING);
	/*In the below printf statement if it is %s only first letter will be printed if it is %S all the characters in 
	the string are printed*/
	printf("The WIDE_STRING is:-%s\n",WIDE_STRING);
	printf("The WIDE_STRING is:-%S\n", WIDE_STRING);
	/*In the below printf statement if it is %s all the character are printed if it is %S only
	one character is printed*/
	
	wprintf(L"The WIDE_STRING is:-%s\n", WIDE_STRING);
	wprintf(L"The WIDE_STRING is:-%S\n", WIDE_STRING);
	
	TCHAR both_char_wchar= TEXT('N');
	printf("The text character you had given is:- %c\n", both_char_wchar);
	printf("size of character :-%d\nsize of widecharacter:- %d\nsize of character string:- %d\nsize of wide character string:-%d\nsize of text character:-%d\n", sizeof(character), sizeof(widecharacter), sizeof(ANSI_STRING), sizeof(WIDE_STRING), sizeof(both_char_wchar));
	//IsTextUnicode is used to check whether the string is wide character string or not.
	//If it is wide character it is assigned with 1 else with 0.
	int ANSI_CHECK, WIDE_CHECK;
	ANSI_CHECK=IsTextUnicode(ANSI_STRING,sizeof(ANSI_STRING), NULL);
	if (ANSI_CHECK == 0)
	{
		printf("ANSI_STRING is not unicode\n");
	}
	else
	{
		printf("ANSI_STRING is unicode\n");
	}
	WIDE_CHECK = IsTextUnicode(WIDE_STRING,sizeof(WIDE_STRING), NULL);
	if (WIDE_CHECK == 0)
	{
		printf("WIDE_STRING is not unicode\n");
	}
	else
	{
		printf("WIDE_STRING is unicode\n");
	}
	int result_ansi_size;
	/*Multibytetowidechar has 6 arguments to be passed and last two arguments{NULL,0} are used to store the converted char string
	in a another wide string but it wasnt store because the size allocated to the string may not be sufficient if the string is too 
	large so the size is taken and allocated to the string and the string is been stored. It applies same for the Widetomultibyte conversion
	*/
	result_ansi_size = MultiByteToWideChar(CP_UTF8,MB_ERR_INVALID_CHARS,ANSI_STRING,-1,NULL,0);
	if (result_ansi_size == 0)
	{
		printf("Some Errot has been occured :%d\n", GetLastError());
	}
	else
	{
		printf("Size of ANSI_STRING:-%d\n", result_ansi_size);
	}
	WCHAR *ansi_to_wide=new WCHAR[result_ansi_size];
	result_ansi_size = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, ANSI_STRING, -1, ansi_to_wide, result_ansi_size);
	if (result_ansi_size == 0)
	{
		printf("Some Error has been occurred:%d\n", GetLastError());
	}
	else
	{
		/*as the ansi_string is been converted to wide char it need captial S in the %S for printing rather tha %s
		if you write %s it displays only the first character and vice versa for the wide_string.*/
		printf("The ansi_to_wide string contains:%S\n", ansi_to_wide);
	}

	int result_wide_size;
	result_wide_size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, WIDE_STRING, -1, NULL, 0, NULL, NULL);
	
	if (result_wide_size == 0)
	{
		printf("Some Errot has been occured :%d\n", GetLastError());
	}
	else
	{
		printf("Size of WIDE_STRING:-%d\n", result_wide_size);
	}
	
	CHAR *wide_to_ansi = new CHAR[result_wide_size];
	result_wide_size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, WIDE_STRING, -1, wide_to_ansi,result_wide_size,NULL,NULL);
	
	if (result_wide_size == 0)
	{
		printf("Some Error has been occurred:%d\n", GetLastError());
	}
	else
	{
		printf("The wide_to_ansi string contains:%s\n", wide_to_ansi);
	}
	// Here we can check whether ansi_to_ wide is converted to wide string and wide_to_ansi is converted to char string or not.
	ANSI_CHECK = IsTextUnicode(ansi_to_wide, sizeof(ansi_to_wide), NULL);
	if (ANSI_CHECK == 0)
	{
		printf("ANSI_TO_WIDE is not unicode\n");
	}
	else
	{
		printf("ANSI_TO_WIDE is unicode\n");
	}
	WIDE_CHECK = IsTextUnicode(wide_to_ansi, sizeof(wide_to_ansi), NULL);
	if (WIDE_CHECK == 0)
	{
		printf("WIDE_TO_ANSI is not unicode\n");
	}
	else
	{
		printf("WIDE_TO_ANSI is unicode\n");
	}
	delete(ansi_to_wide);
	delete(wide_to_ansi);
		getchar();
}