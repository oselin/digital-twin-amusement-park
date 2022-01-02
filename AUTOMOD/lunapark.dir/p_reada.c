// P_reada.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	lunapark
// Model path:	C:\Users\danis\Documents\GitHub\lunaPark\AUTOMOD\lunapark.dir\
// Generated:	Sun Jan 02 12:31:12 2022
// Applied/AutoMod Licensee Confidential
// NO DISTRIBUTION OR REPRODUCTION RIGHTS GRANTED!
// Copyright (c) 1988-2015 Applied Materials All rights reserved.
//
// All Rights Reserved.  Reproduction or transmission in whole or
// in part, in any form or by any means, electronic, mechanical or
// otherwise, is prohibited without the prior written consent of
// copyright owner.
//
// Licensed Material - Property of Applied Materials, Inc.
//
// Applied Materials, Inc.
// 3050 Bowers Drive
// P.O. Box 58039
// Santa Clara, CA 95054-3299
// U.S.A.
//


#include "cdecls.h"


static int32
P_read_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			this->attribute->am2_flag = 0;
			EntityChanged(0x00000040);
		}
		{
			am2_karts = 0;
			EntityChanged(0x01000000);
		}
		{
			if (am2_karts == 0) {
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[1]), 50, queue*), 30);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[2]), 50, queue*), 30);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[3]), 50, queue*), 30);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[4]), 50, queue*), 30);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[5]), 50, queue*), 30);
					EntityChanged(0x00010000);
				}
				{
					am2_runtime = 4;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			if (am2_karts == 1) {
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[1]), 50, queue*), 25);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[2]), 50, queue*), 25);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[3]), 50, queue*), 25);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[4]), 50, queue*), 25);
					EntityChanged(0x00010000);
				}
				{
					QueSetCapacity(ValidPtr(&(am2_Q_roll[5]), 50, queue*), 25);
					EntityChanged(0x00010000);
				}
				{
					am2_runtime = 3;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			am2_V_pointer = OpenFilePtr(am_model.$sys, "lunaPark.arc/arrivalData.txt", "r");
		}
				{
			if (isFileValid(am2_V_pointer, 1)) {
				int rflag;
				static ReadRef st1;

				setupReadRef(&st1, 0, am_model.am_V_useless$var, am2_V_useless, NULL, -1, TRUE);
				rflag = readFile(am2_V_pointer->fp, ",", &st1, NULL);
				SetFileAtEof(am2_V_pointer, EOF, rflag);
			}
		}
		{
			{
				{
					Print_VarArr2Mesg(am_model.am_V_useless$var, NULL, NULL, 0, -1);
				}
			}
		}
		{
			while (FileGetEof(ValidPtr(am2_V_pointer, 24, iofile*)) == 0) {
								{
					if (isFileValid(am2_V_pointer, 1)) {
						int rflag;
						static ReadRef st1;
						static ReadRef st2;
						static ReadRef st3;
						static ReadRef st4;
						static ReadRef st5;

						setupReadRef(&st1, 1, am_model.am_arrival_time$att, &this->attribute->am2_arrival_time, NULL, -1, FALSE);
						setupReadRef(&st2, 1, am_model.am_id$att, &this->attribute->am2_id, NULL, -1, FALSE);
						setupReadRef(&st3, 1, am_model.am_ticket$att, &this->attribute->am2_ticket, NULL, -1, FALSE);
						setupReadRef(&st4, 1, am_model.am_roller$att, this->attribute->am2_roller, NULL, -1, TRUE);
						setupReadRef(&st5, 1, am_model.am_prior$att, this->attribute->am2_prior, NULL, -1, TRUE);
						rflag = readFile(am2_V_pointer->fp, ",", &st1, &st2, &st3, &st4, &st5, NULL);
						SetFileAtEof(am2_V_pointer, EOF, rflag);
					}
				}
				{
					if (waitfor(ToModelTime((this->attribute->am2_arrival_time - FromModelTime(ASIclock, UNITSECONDS)), UNITSECONDS), this, P_read_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					this->attribute->am2_cc = 1;
					EntityChanged(0x00000040);
				}
				{
					clone(this, 1, am2_P_engine, NULL);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_read_arriving */



/* init function for P_reada.m */
void
model_P_reada_init(struct model_struct* data)
{
	data->am_P_read->aprc = P_read_arriving;
}

