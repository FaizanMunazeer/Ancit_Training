/*
 * main_branch.c
 *
 *  Created on: Sep 27, 2022
 *      Author: faizan munazeer
 */
#include<stdio.h>
#include<string.h>
#include"main.h"
#include"Service_ID_Functions.h"

message uds_req;

int len_checking(char RawData[14])
{
	int count=0;
	for(int i=0;i!='\0';i++)
	{
		if(RawData[i]=='#')
			count++;
	}
	if(count==5)
		return 1;			//IF SUB FUNCTION ID is present
	else
		return 0;			//it is not present
}

void rawdata2frame(char RawData[14])
{																											//"#4#22#22#0000#" Input Format
	int count_state=len_checking(RawData);
	if(count_state==1)
	{
	uds_req.length = ((int)RawData[1]-0x30);
	uds_req.function_id = (((int)RawData[3]-0x30)*10)+(((int)RawData[4]-0x30));
	uds_req.subfunc_id = (((int)RawData[6]-0x30)*10)+(((int)RawData[7]-0x30));
	}
	else
	{
		uds_req.length = ((int)RawData[1]-0x30);
		uds_req.function_id = (((int)RawData[3]-0x30)*10)+(((int)RawData[4]-0x30));
	}
}

//----------------------------------------------------------------------------------------------------------------------------------

void Service_id_function_calling(void)
{
	switch(uds_req.function_id)
	{
	case 0x84:
		service_id_0x84(uds_req);
		break;
	case 0x20:
		service_id_0x14(uds_req);
		break;
	case 0x2f:
		service_id_0x2f(uds_req);
		break;
	case 0x28:
		service_id_0x28(uds_req);
		break;
	case 0x38:
		service_id_0x38(uds_req);
		break;
	case 0x11:
		service_id_0x11(uds_req);
		break;
	case 0x83:
		service_id_0x83(uds_req);
		break;
	default:
		printf("\n\nEntered Function ID is Invalid\n\n");
	}
}







































/*
uds_req.service_id = (((int)RawData[6]-0x30)*10)+(((int)RawData[7]-0x30));
d1.recieved_data[0] = RawData[6];
d1.recieved_data[1] = RawData[7];
d1.recieved_data[2] = RawData[8];
d1.recieved_data[3] = RawData[9];
*/






//----------------------------------------------------------------------------------------------------------------------------------------------------------------
/*void response(char resdata[])
{
	printf("The Response from the server is :");
	char finalData[10];


}*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------


