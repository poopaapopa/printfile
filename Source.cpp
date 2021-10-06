#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	FILE* in;
	const char* path = "D:\\example\\text.txt";
	int c;
	int len = 0, cnt = 0;
	char buf[128];
	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
	{
		while (!feof(in))
		{
			/*c = fgetc(in);
			if (c == '\n')
			{
				cnt++;
				cout << "String " << cnt << " lenght= " << len << "\n";
				len = 0;
			}
			else
			{
				len++;
			}
		}
		if (len)
		{
			cnt++;
			cout << "String " << cnt << " lenght= " << len << "\n";*/
			fgets(buf, 127, in);
			len = strlen(buf);
			if (buf[len - 1] == '\n')
				buf[len - 1] = '\0';
			puts(buf);
		}
	}
	return 0;
}