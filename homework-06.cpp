// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "string.h"
#include "memory"

using namespace std;

void UseSmartPointer(int x);
char a[]="Hello World!";
int _tmain(int argc, _TCHAR* argv[])
{
	printf("Part 1\n");
    int i,e=0,l=0,n=0;
	for (i=0;i<strlen(a);i++)
	{
		l = l + [=]()mutable throw() -> int {return (a[i]=='l');}();
		e = e + [=]()mutable throw() -> int {return (a[i]=='e');}();
		
	}
	printf("Number of L is %d\n",l);
	printf("Number of E is %d\n\n",e);


	printf("Part 2\n");
	scanf_s("%d",&n);
	UseSmartPointer(n);
	return 0;
}

void UseSmartPointer(int x)
{
	std::unique_ptr<char> abc_uniquePtr(new char[20]);
	strcpy_s(abc_uniquePtr.get(),20,"Hello World!");  
	string s = abc_uniquePtr.get() + strlen("Hello World!") - x;
     printf("%s\n",s);
	 *(abc_uniquePtr.get() + strlen("Hello World!") - x) = '\0';
	 s = abc_uniquePtr.get();
     printf("%s\n",s);

}
