/*
 * Service_ID_Functions.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Faizan Munzaeer
 */
#include<stdio.h>
#include"main.h"




//---------------------------------------------------------------------------------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------------------------------------------------------------------------------
	void service_id_0x2f(message uds_req)
	{

	}
//---------------------------------------------------------------------------------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------------------------------------------------------------------------------
	void service_id_0x38(message uds_req)
	{

	}
//---------------------------------------------------------------------------------------------------------------------------------------------------------
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
//---------------------------------------------------------------------------------------------------------------------------------------------------------
	void service_id_0x84(message uds_req)
	{


	}
//---------------------------------------------------------------------------------------------------------------------------------------------------------
