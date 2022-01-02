// P_normala.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	lunapark
// Model path:	C:\Users\danis\Documents\GitHub\lunaPark\AUTOMOD\lunapark.dir\
// Generated:	Fri Dec 31 15:21:03 2021
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
P_normal_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	int32 retval = Continue;
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	return retval;
} /* end of P_normal_arriving */



/* init function for P_normala.m */
void
model_P_normala_init(struct model_struct* data)
{
	data->am_P_normal->aprc = P_normal_arriving;
}

