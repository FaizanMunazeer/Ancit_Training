/*
 * CommunicationControl_0x28.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Faizan Munazeer
 */

#include<stdio.h>
#include"main.h"

void service_id_0x28(message uds_req)
	{
		if(uds_req.length==03)
		{
			if(uds_req.subfunc_id==00)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#68#00#");
			}
			else if(uds_req.subfunc_id==01)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#68#00#");
			}
			else if(uds_req.subfunc_id==02)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#68#00#");
			}
			else if(uds_req.subfunc_id==03)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#68#00#");
			}
			else
			{
				printf("Negative Response\n\n");
				printf("Response Send to the Client is #03#7F#28#12#\n\n");
			}
		}
		else
		{
			printf("Negative Response\n\n");
			printf("Response Send to the Client is #03#7F#28#13#\n\n");
		}

	}

