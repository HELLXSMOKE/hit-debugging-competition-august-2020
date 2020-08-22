//Please add a comment to each lines that has changes and Indicate the changes
#include<stdio.h>
int main()//typo
{
 	int a,b;//changed all unicode semicolons to ASCII
 	scanf("%d",&a);//changed to int type and scanned a instead of b
 	b=a%10;
	a=a/10;
 	while(a!=0)//while a!=0
 	{
  		b=b*10+(a%10);//corrected error in logic
  		a=a/10;
 	}//Please add a comment to each lines that has changes and Indicate the changes
 	printf("%d",b);//changed to int type
 	return 0;
}
//Please add a comment to each lines that has changes and Indicate the changes
/*
Input 1
1234
Output 1
4321

Input 2
5667
Output 2
7665
*/



