// S_normal1.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	lunapark
// Model path:	C:\Users\danis\Documents\GitHub\lunaPark\AUTOMOD\lunapark.dir\
// Generated:	Sun Jan 02 12:35:28 2022
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
am_S_normal1(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			while (!(SecGetCurConts(ValidPtr(SysGetQualifier(am_model.am_conv.$sys, "sec_roller", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], -9999), 43, ConvSection*)) == 0 || am2_numpriority[ValidIndex("am_model.am_numpriority", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)] > 9)) { // wait until ...
				return waituntil(this, am_S_normal1, Step 2, am_localargs, 0x01201040);
Label2: ; // Step 2
			}
		}
		{
			pushppa(this, am_S_normal1, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_roll[ValidIndex("am_model.am_Q_roll", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)]));
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			if (am2_que[ValidIndex("am_model.am_que", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)] < QueGetCapacity(ValidPtr(&(am2_Q_roll[ValidIndex("am_model.am_Q_roll", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)]), 50, queue*)) - 1) {
				{
					am2_que[ValidIndex("am_model.am_que", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)] += 1;
					EntityChanged(0x01000000);
				}
				{
					return waitorder(&(am2_OL_roller[ValidIndex("am_model.am_OL_roller", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)]), this, am_S_normal1, Step 4, am_localargs);
Label4: ; // Step 4
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
			}
			else {
				{
					am2_que[ValidIndex("am_model.am_que", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)] = 0;
					EntityChanged(0x01000000);
				}
				{
					am2_numpriority[ValidIndex("am_model.am_numpriority", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)] = 0;
					EntityChanged(0x01000000);
				}
				{
					order(QueGetCapacity(ValidPtr(&(am2_Q_roll[ValidIndex("am_model.am_Q_roll", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)]), 50, queue*)), &(am2_OL_roller[ValidIndex("am_model.am_OL_roller", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], 5)]), NULL, NULL);		// Place an order
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of am_S_normal1 */



/* init function for S_normal1.m */
void
model_S_normal1_init(struct model_struct* data)
{
	data->am_S_normal1 = am_S_normal1;
}

