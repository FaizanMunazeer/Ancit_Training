#include<stdio.h>
#include<string.h>
#include"main.h"																	//It contain Structure declaration
#include"main_branch.h"
#include"Service_ID_Functions.h"

char RawData[14];

int main()
{fflush(stdout);
	printf("Please write the UDS format in the correct way as given below\n\n");


	printf("#Data_length#Service_ID#Sub_function#actual_data#\n\n");
	fflush(stdout);
	scanf("%s",RawData);															//"#04#22#22#0000#" Input Format

	rawdata2frame(RawData);															//String to Frame conversion
	Service_id_function_calling();													//calling function based on service ID


return 0;
}



