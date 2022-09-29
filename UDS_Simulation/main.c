#include<stdio.h>
#include<string.h>
#include"main.h"
#include"main_branch.h"
#include"Service_ID_Functions.h"


char RawData[18];
						//#4#0x23#0x23#1234#
int main()
{
	printf("Please write the uds format in the correct way as given below\n\n");
	printf("#Data_length#Service_ID#Sub_function#actual_data#\n\n");
	scanf("%s",RawData);

	rawdata2frame(RawData);
	Service_id_function_calling();


return 0;
}

