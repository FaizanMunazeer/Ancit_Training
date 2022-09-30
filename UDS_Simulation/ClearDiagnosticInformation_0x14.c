/*
 * ClearDiagnosticInformation_0x14.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Faizan Munazeer
 */

#include<stdio.h>
#include"main.h"

	void service_id_0x14(message uds_req)  //clear DTC [Delete the stored DTC]
	{
		if(uds_req.length==4)
		{
			printf("Positive Response\n\n");
			printf("Response Send to the Client is #2#51#01#0000#");
		}
		else
		{
			printf("Negative Response\n\n");
			printf("Response Send to the Client is #2#7F#12#\n\n");
		}

	}
