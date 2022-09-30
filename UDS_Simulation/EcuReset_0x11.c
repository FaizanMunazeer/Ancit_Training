/*
 * EcuReset_0x11.c
 *
 *  Created on: 30-Sep-2022
 *      Author: Faizan
 */
#include<stdio.h>
#include"main.h"

void service_id_0x11(message uds_req)													//ECU RESET
	{
		if(uds_req.length==02)
				{
					if(uds_req.subfunc_id==01)
					{
						printf("Positive Response\n\n");
						printf("Response Send to the Client is #02#51#01#");
				}

					else if(uds_req.subfunc_id==02)											//key ON-Off Reset
					{
						printf("Positive Response\n\n");
						printf("Response Send to the Client is #02#51#02#");
					}
					else if(uds_req.subfunc_id==03)											// Soft Reset
					{
						printf("Positive Response\n\n");
						printf("Response Send to the Client is #02#51#03#");
					}
					else if(uds_req.subfunc_id==04)											// Enable Rapid Power Shutdown
					{
						printf("Positive Response\n\n");
						printf("Response Send to the Client is #02#51#04#");
					}
					else if(uds_req.subfunc_id==05)											// Disable Rapid Power Shutdown
					{
						printf("Positive Response\n\n");
						printf("Response Send to the Client is #02#51#05#");
					}
					else if(uds_req.subfunc_id==81 || uds_req.subfunc_id==82 || uds_req.subfunc_id==83)
					{

						printf("Positive Response\n\n");
						printf("Response Send to the Client is ____________");
					}
					else
					{
						printf("Negative Response\n\n");
						printf("Response Send to the Client is #03#7F#11#12#\n\n");			//sub function not supported-
					}
				}
				else
				{
					printf("Negative Response\n\n");
					printf("Response Send to the Client is #03#7F#11#13#\n\n");
				}

	}
