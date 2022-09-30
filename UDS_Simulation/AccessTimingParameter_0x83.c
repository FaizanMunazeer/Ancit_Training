/*
 * AccessTimingParameter_0x83.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Faizan Munazeer
 */


#include<stdio.h>
#include"main.h"

void service_id_0x83(message uds_req)
	{
		if(uds_req.length==02)
		{
			if(uds_req.subfunc_id==01)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#C3#01#");
			}
			else if(uds_req.subfunc_id==02)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#C3#02#");
			}
			else if(uds_req.subfunc_id==03)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#C3#03#");
			}
			else if(uds_req.subfunc_id==04)
			{
				printf("Positive Response\n\n");
				printf("Response Send to the Client is #02#C3#04#");
			}
			else
			{
				printf("Negative Response\n\n");
				printf("Response Send to the Client is #03#7F#83#12#\n\n");
			}
	    }
		else
		{
			printf("Negative Response\n\n");
			printf("Response Send to the Client is #03#7F#83#13#\n\n");
		}

	}
