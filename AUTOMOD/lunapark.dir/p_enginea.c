// P_enginea.c
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
P_engine_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	case Step 11: goto Label11;
	case Step 12: goto Label12;
	case Step 13: goto Label13;
	case Step 14: goto Label14;
	case Step 15: goto Label15;
	case Step 16: goto Label16;
	case Step 17: goto Label17;
	case Step 18: goto Label18;
	case Step 19: goto Label19;
	case Step 20: goto Label20;
	case Step 21: goto Label21;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			pushppa(this, P_engine_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_park);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			if (waitfor(ToModelTime(1, UNITSECONDS), this, P_engine_arriving, Step 3, am_localargs) == Delayed)
				return Delayed;
Label3: ; // Step 3
		}
		{
			pushppa(this, P_engine_arriving, Step 4, am_localargs);
			load_SetDestLoc(this, SysGetQualifier(am_model.am_conv.$sys, "sta_enter", this->attribute->am2_ticket, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label4: ; // Step 4
		}
		{
			if (this->attribute->am2_ticket == 0) {
				{
					pushppa(this, P_engine_arriving, Step 5, am_localargs);
					load_SetDestLoc(this, LocGetQualifier(am_model.am_conv.am_sta_desk_in, -9999));
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label5: ; // Step 5
				}
				{
					pushppa(this, P_engine_arriving, Step 6, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_desk);
					return Continue; // go move into territory
Label6: ; // Step 6
				}
				{
					if (waitfor(ToModelTime(normal1(am2_stream0, 30, 3), UNITSECONDS), this, P_engine_arriving, Step 7, am_localargs) == Delayed)
						return Delayed;
Label7: ; // Step 7
				}
				{
					pushppa(this, P_engine_arriving, Step 8, am_localargs);
					load_SetDestLoc(this, LocGetQualifier(am_model.am_conv.am_sta_desk_out, -9999));
					pushppa(this, move_in_loc, Step 1, NULL);
					return Continue; // go move into territory
Label8: ; // Step 8
				}
			}
		}
		{
			pushppa(this, P_engine_arriving, Step 9, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_conv.am_sta_gate_in, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label9: ; // Step 9
		}
		{
			pushppa(this, P_engine_arriving, Step 10, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_gate);
			return Continue; // go move into territory
Label10: ; // Step 10
		}
		{
			if (waitfor(ToModelTime(normal1(am2_stream0, 1, 0), UNITSECONDS), this, P_engine_arriving, Step 11, am_localargs) == Delayed)
				return Delayed;
Label11: ; // Step 11
		}
		{
			pushppa(this, P_engine_arriving, Step 12, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_conv.am_sta_gate_out, -9999));
			pushppa(this, move_in_loc, Step 1, NULL);
			return Continue; // go move into territory
Label12: ; // Step 12
		}
		{
			while (this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)] > 0) {
				{
					pushppa(this, P_engine_arriving, Step 13, am_localargs);
					load_SetDestLoc(this, SysGetQualifier(am_model.am_conv.$sys, "sta_roller_in", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], this->attribute->am2_prior[ValidIndex("am_model.am_prior", this->attribute->am2_cc, 10)], -9999));
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label13: ; // Step 13
				}
				{
					pushppa(this, P_engine_arriving, Step 14, am_localargs);
					load_SetDestLoc(this, SysGetQualifier(am_model.am_conv.$sys, "sta_roller_end", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], this->attribute->am2_prior[ValidIndex("am_model.am_prior", this->attribute->am2_cc, 10)], -9999));
					pushppa(this, travel_to_loc, Step 1, NULL);
					return Continue; // go move to location
Label14: ; // Step 14
				}
				{
					if (this->attribute->am2_prior[ValidIndex("am_model.am_prior", this->attribute->am2_cc, 10)] == 1) {
						{
							if (this->attribute->am2_flag == 0) {
								pushppa(this, P_engine_arriving, Step 15, am_localargs);
								pushppa(this, am2_S_priority, Step 1, NULL);
								return Continue;
Label15: ;
								if (!this->inLeaveProc && this->nextproc) {
									retval = Continue;
									goto LabelRet;
								}
							}
							else {
								pushppa(this, P_engine_arriving, Step 16, am_localargs);
								pushppa(this, am2_S_priority1, Step 1, NULL);
								return Continue;
Label16: ;
								if (!this->inLeaveProc && this->nextproc) {
									retval = Continue;
									goto LabelRet;
								}
							}
						}
					}
					else {
						{
							if (this->attribute->am2_flag == 0) {
								pushppa(this, P_engine_arriving, Step 17, am_localargs);
								pushppa(this, am2_S_normal, Step 1, NULL);
								return Continue;
Label17: ;
								if (!this->inLeaveProc && this->nextproc) {
									retval = Continue;
									goto LabelRet;
								}
							}
							else {
								pushppa(this, P_engine_arriving, Step 18, am_localargs);
								pushppa(this, am2_S_normal1, Step 1, NULL);
								return Continue;
Label18: ;
								if (!this->inLeaveProc && this->nextproc) {
									retval = Continue;
									goto LabelRet;
								}
							}
						}
					}
				}
				{
					if (waitfor(ToModelTime(am2_runtime, UNITMINUTES), this, P_engine_arriving, Step 19, am_localargs) == Delayed)
						return Delayed;
Label19: ; // Step 19
				}
				{
					pushppa(this, P_engine_arriving, Step 20, am_localargs);
					load_SetDestLoc(this, SysGetQualifier(am_model.am_conv.$sys, "sta_roller_out", this->attribute->am2_roller[ValidIndex("am_model.am_roller", this->attribute->am2_cc, 10)], -9999));
					pushppa(this, move_in_loc, Step 1, NULL);
					return Continue; // go move into territory
Label20: ; // Step 20
				}
				{
					this->attribute->am2_cc += 1;
					EntityChanged(0x00000040);
				}
			}
		}
		{
			pushppa(this, P_engine_arriving, Step 21, am_localargs);
			load_SetDestLoc(this, LocGetQualifier(am_model.am_conv.am_sta_out, -9999));
			pushppa(this, travel_to_loc, Step 1, NULL);
			return Continue; // go move to location
Label21: ; // Step 21
		}
		{
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_engine_arriving */



/* init function for P_enginea.m */
void
model_P_enginea_init(struct model_struct* data)
{
	data->am_P_engine->aprc = P_engine_arriving;
}

