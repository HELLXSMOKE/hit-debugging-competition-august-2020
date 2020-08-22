//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>//typo on stdio
int main()//return type int
{	int a,b,c,mx,mi;//integer type
	scanf("%d%d%d",&a,&b,&c);//int type
	printf("\t%d\t%d\t%d",a,b,c);//int type
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		if(b>a) 
		{
			mx=b;
            	if(a>c) 
				mi=c;
			else mi=a;
		}
	}
	else//Please add a comment to each lines that has changes and Indicate the changes
	{
		mx=c;
		if(a>b) 
			mi=b;
		else 
			mi=a;
	}

	printf("Largest is %d and smallest is %d",mi,mx);//scanf to printf
	return 0;//return value
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Test Cases

Input 1
3 5 7
Output 1
3 5 7
Largest is 7 and smallest is 3

Input 2
7 4 2
Output 2
7 4 2
Largest is 7 and smallest is 2
*/
