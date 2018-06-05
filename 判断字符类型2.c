#include <stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')  printf("upper");
	else if(ch>='a'&&ch<='z')  printf("lower");
	else if(ch>='0'&&ch<='9')  printf("digit");
	else  printf("other");
    return 0;
}

/*输入一个字符，如果为大写字母，则输出upper，如果为小写字母，则输出lower，
如果是数字则输出digit，如果为上述类字符以外的其他字符，则输出other。*/
