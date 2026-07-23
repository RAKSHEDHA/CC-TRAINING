include<stdio.h>
int main()
{
   int a=15,*b,**c;
   b=&a;
   c=&b;
   printf("A value:%d\n",a);
   printf("A Address:%d\n",&a);
   printf("B Address:%d\n",b);
   printf("B Address:%d\n"&b);
   printf("A value:%d\n",*b); 
   printf("B Address:%d\n",c);
   printf("B Address:%d\n",*c);
   printf("A value:%d\n",**c);
   
}