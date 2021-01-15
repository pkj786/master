#include<stdio.h>

long long int g_data = 0xFFFEABCD11112345;
int main()
{
//char data = 100;
//printf("Value of data is :%d\n",data);
//printf("Address of date :%p\n",&data);

char *pData = (char *)&g_data;

printf("vlue of address :%p\n",pData);
char value = *pData;
printf("read value is :%d\n",value);

*pData = 101;
printf("Write data :%x\n",g_data);
return 0;
}
