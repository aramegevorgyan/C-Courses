#include<stdio.h>
#include<unistd.h>

int isPalindrome(char str[], int start, int end)
{
	if(str[start]!=str[end])
		return 0;
	if(start>=end)
		return 1;
	return isPalindrome(str, start + 1, end - 1);


}
