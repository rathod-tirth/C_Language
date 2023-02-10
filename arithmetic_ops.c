// 	Arithmetic Opreators

#include <stdio.h>

int main()

{
	int a=2,b=5,c=4,d;
	int p=2,q=5,r=4;
	
//	1. two ways of doing one thing

	a=a+b;	//	a=2+5=7
	printf("a = %d\n",a);
		
	r=p;	// 	r=2
	p=r+q;	// 	p=2+5=7
	printf("p = %d\n\n",p);
	
//	2. [+=][-+][*=][/=]

	c=c+1;	//	c=4+1=5
	printf("c = %d\n",c);
	
	c+=1;	// 	c=5+1=6
	printf("c = %d\n",c);
	
	printf("c = %d\n\n",c-=1);
	//	c=6-1=5
	
//	3. post/pre increment/decrement

	d=c++;	//	d=5 and c=6
	printf("d = %d and c = %d\n",d,c);
	
	d=--c;
	printf("d = %d and c = %d\n\n",d,c);
	
//	4. [+][-][*][/][%]

	int m,e[]={1,4,6,3,5,2,12,6,17,13};
	
	m=e[0]+e[1];	//	m=1+4=5
	printf("e = %d\n",m);
	
	m=e[2]-e[3];	//	m=6-3=3
	printf("e = %d\n",m);
	
	m=e[4]*e[5];	//	m=5*2=10
	printf("e = %d\n",m);
	
	m=e[6]/e[7];	//	m=12/6=2
	printf("e = %d\n",m);
	
	m=e[8]%e[9];	//	m=13/17=4
	printf("e = %d\n",m);
	
//	modules cannot be found with float value

	return 0;
}

