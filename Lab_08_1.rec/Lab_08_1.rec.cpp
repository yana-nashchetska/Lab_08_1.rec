#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str, int i)
{
	if (strlen(str) < 3)
		return 0;
	if (str[i + 1] != 0)
		if (str[i - 1] == 'n' && str[i + 1] == 'o')
			return 1 + Count(str, i + 1);
		else
			return Count(str, i + 1);
	else
		return 0;
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 2] != 0)
	{
		if (str[i] == 'n' && str[i + 2] == 'o')
		{
			strcat_s(t, 101, "**"); 
			return Change(dest, str, t + 2, i + 3);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "String contained " << Count(str, 1) << " groups of 'n o'" << endl;

	char* dest1 = new char[151];
	dest1[0] = '\0';

	char* dest2;

	dest2 = Change(dest1, str, dest1, 0);

	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;

	return 0;
}