#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 main()
{

	char str[100], temp;
	int i=0, j;
	cout<<"Enter the String : ";
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	cout<<"Reverse of the String = "<<str;

}
