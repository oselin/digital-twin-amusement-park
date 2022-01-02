// lunapark~init1.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.12
// Model name:	lunapark
// Model path:	C:\Users\danis\Documents\GitHub\lunaPark\AUTOMOD\lunapark.dir\
// Generated:	Sun Jan 02 12:33:54 2022
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


#include "decls.h"

void
initglobs0()
{
	am_model.$sys = model;
	am_model.am_conv.$sys = symGetSystemDataByName(am_model.$sys, "conv");
	am_model.am_conv.am_sta_roller_out3 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_out3");
	am_model.am_conv.am_sta_roller_in1_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in1_1");
	am_model.am_conv.am_sta_roller_in2_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in2_0");
	am_model.am_conv.am_sta_out = symGetSystemDataByName(am_model.am_conv.$sys, "sta_out");
	am_model.am_conv.am_sta_enter1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_enter1");
	am_model.am_conv.am_sta_gate_in = symGetSystemDataByName(am_model.am_conv.$sys, "sta_gate_in");
	am_model.am_conv.am_sta_roller_out4 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_out4");
	am_model.am_conv.am_sta_roller_out5 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_out5");
	am_model.am_conv.am_sta_roller_in2_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in2_1");
	am_model.am_conv.am_sta_roller_in1_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in1_0");
	am_model.am_conv.am_sta_desk_in = symGetSystemDataByName(am_model.am_conv.$sys, "sta_desk_in");
	am_model.am_conv.am_sta_roller_out1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_out1");
	am_model.am_conv.am_sta_roller_out2 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_out2");
	am_model.am_conv.am_sta_enter0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_enter0");
	am_model.am_conv.am_sta_roller_end1_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end1_0");
	am_model.am_conv.am_sta_desk_out = symGetSystemDataByName(am_model.am_conv.$sys, "sta_desk_out");
	am_model.am_conv.am_sta_roller_end2_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end2_0");
	am_model.am_conv.am_sta_roller_end2_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end2_1");
	am_model.am_conv.am_sta_roller_end1_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end1_1");
	am_model.am_conv.am_parentsys = symGetSystemDataByName(am_model.am_conv.$sys, "parentsys");
	am_model.am_conv.am_sta_roller_in4_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in4_1");
	am_model.am_conv.am_sta_roller_end4_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end4_0");
	am_model.am_conv.am_sta_roller_in5_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in5_0");
	am_model.am_conv.am_sta_roller_in3_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in3_1");
	am_model.am_conv.am_sta_gate_out = symGetSystemDataByName(am_model.am_conv.$sys, "sta_gate_out");
	am_model.am_conv.am_sta_roller_end3_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end3_1");
	am_model.am_conv.am_sta_roller_end5_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end5_0");
	am_model.am_conv.am_sta_roller_end3_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end3_0");
	am_model.am_conv.am_sta_roller_in3_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in3_0");
	am_model.am_conv.am_sta_roller_end5_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end5_1");
	am_model.am_conv.am_sta_roller_end4_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_end4_1");
	am_model.am_conv.am_sta_roller_in4_0 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in4_0");
	am_model.am_conv.am_sta_roller_in5_1 = symGetSystemDataByName(am_model.am_conv.$sys, "sta_roller_in5_1");
	am_model.am_Q_park = symGetSystemDataByName(am_model.$sys, "Q_park");
	am_model.am_P_priority_first = symGetSystemDataByName(am_model.$sys, "P_priority_first");
	am_model.am_stream_R_desk_1 = symGetSystemDataByName(am_model.$sys, "stream_R_desk_1");
	am_model.am_die = symGetSystemDataByName(am_model.$sys, "die");
	am_model.am_runtime$var = symGetSystemDataByName(am_model.$sys, "runtime");
	am_model.am_runtime$var->data = (void*)&am_model.am_runtime;
	am_model.am_P_engine = symGetSystemDataByName(am_model.$sys, "P_engine");
	am_model.am_roller$att = symGetSystemDataByName(am_model.$sys, "roller");
	am_model.am_P_read = symGetSystemDataByName(am_model.$sys, "P_read");
	am_model.am_stream_L_person_1 = symGetSystemDataByName(am_model.$sys, "stream_L_person_1");
	am_model.am_Q_desk = symGetSystemDataByName(am_model.$sys, "Q_desk");
	am_model.am_S_normal1$sub = symGetSystemDataByName(am_model.$sys, "S_normal1");
	am_model.am_OPCTimestamp$var = symGetSystemDataByName(am_model.$sys, "OPCTimestamp");
	am_model.am_OPCTimestamp$var->data = (void*)&am_model.am_OPCTimestamp;
	am_model.am_que$var = symGetSystemDataByName(am_model.$sys, "que");
	am_model.am_que = (int32*)xcalloc(6, sizeof(*am_model.am_que));
	am_model.am_que$var->data = (void*)am_model.am_que;
	am_model.am_stream_L_person_2 = symGetSystemDataByName(am_model.$sys, "stream_L_person_2");
	am_model.am_P_normal = symGetSystemDataByName(am_model.$sys, "P_normal");
	am_model.am_flag$att = symGetSystemDataByName(am_model.$sys, "flag");
	am_model.am_S_normal$sub = symGetSystemDataByName(am_model.$sys, "S_normal");
	am_model.am_Q_roll = symGetSystemDataByName(am_model.$sys, "Q_roll");
	am_model.am_arrival_time$att = symGetSystemDataByName(am_model.$sys, "arrival_time");
	am_model.am_stream_R_gate_1 = symGetSystemDataByName(am_model.$sys, "stream_R_gate_1");
	am_model.am_V_useless$var = symGetSystemDataByName(am_model.$sys, "V_useless");
	am_model.am_V_useless = (char**)xcalloc(24, sizeof(*am_model.am_V_useless));
	am_model.am_V_useless$var->data = (void*)am_model.am_V_useless;
	am_model.am_prior$att = symGetSystemDataByName(am_model.$sys, "prior");
	am_model.am_modelsys = symGetSystemDataByName(am_model.$sys, "modelsys");
	am_model.am_V_pointer$var = symGetSystemDataByName(am_model.$sys, "V_pointer");
	am_model.am_V_pointer$var->data = (void*)&am_model.am_V_pointer;
	am_model.am_OL_roller = symGetSystemDataByName(am_model.$sys, "OL_roller");
	am_model.am_ticket$att = symGetSystemDataByName(am_model.$sys, "ticket");
	am_model.am_id$att = symGetSystemDataByName(am_model.$sys, "id");
	am_model.am_cc$att = symGetSystemDataByName(am_model.$sys, "cc");
	am_model.am_S_priority1$sub = symGetSystemDataByName(am_model.$sys, "S_priority1");
	am_model.am_S_priority$sub = symGetSystemDataByName(am_model.$sys, "S_priority");
	am_model.am_stream_L_dummy_1 = symGetSystemDataByName(am_model.$sys, "stream_L_dummy_1");
	am_model.am_stream0 = symGetSystemDataByName(am_model.$sys, "stream0");
	am_model.am_cont_logic$var = symGetSystemDataByName(am_model.$sys, "cont_logic");
	am_model.am_cont_logic$var->data = (void*)&am_model.am_cont_logic;
	am_model.am_stream_R_roll_1 = symGetSystemDataByName(am_model.$sys, "stream_R_roll_1");
	am_model.am_karts$var = symGetSystemDataByName(am_model.$sys, "karts");
	am_model.am_karts$var->data = (void*)&am_model.am_karts;
	am_model.am_numpriority$var = symGetSystemDataByName(am_model.$sys, "numpriority");
	am_model.am_numpriority = (int32*)xcalloc(6, sizeof(*am_model.am_numpriority));
	am_model.am_numpriority$var->data = (void*)am_model.am_numpriority;
	am_model.am_Q_gate = symGetSystemDataByName(am_model.$sys, "Q_gate");
	am_model.am_pty$var = symGetSystemDataByName(am_model.$sys, "pty");
	am_model.am_pty = (int32*)xcalloc(6, sizeof(*am_model.am_pty));
	am_model.am_pty$var->data = (void*)am_model.am_pty;
	am_model.am_OPCQuality$var = symGetSystemDataByName(am_model.$sys, "OPCQuality");
	am_model.am_OPCQuality$var->data = (void*)&am_model.am_OPCQuality;
	model_P_enginea_init(&am_model);
	model_P_normala_init(&am_model);
	model_P_priority_firsta_init(&am_model);
	model_P_reada_init(&am_model);
	model_S_priority_init(&am_model);
	model_S_normal_init(&am_model);
	model_S_priority1_init(&am_model);
	model_S_normal1_init(&am_model);
	{
		Iter(List, FileList) it = Begin(List, FileList, &((ProcSystem*)am_model.$sys)->files);

	}
	{
		Iter(List, AMTypeList) it = Begin(List, AMTypeList, &((ProcSystem*)am_model.$sys)->types);

		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Acceleration);
		IterValue(List, AMTypeList, it)->valstrfunc = Acceleration_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(block*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))BlockPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMBlockList*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASI_Color);
		IterValue(List, AMTypeList, it)->valstrfunc = Color_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Color_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Container*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ContainerPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMContainerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(counter*);
		IterValue(List, AMTypeList, it)->valstrfunc = CounterPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))CounterPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Distance);
		IterValue(List, AMTypeList, it)->valstrfunc = Distance_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(iofile*);
		IterValue(List, AMTypeList, it)->valstrfunc = FilePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))FilePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(bgraph*);
		IterValue(List, AMTypeList, it)->valstrfunc = GraphPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))GraphPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(int32);
		IterValue(List, AMTypeList, it)->valstrfunc = Integer_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(label*);
		IterValue(List, AMTypeList, it)->valstrfunc = LabelPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LabelPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(load*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLoadList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(loadtype*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(simloc*);
		IterValue(List, AMTypeList, it)->valstrfunc = Location_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Location_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(LocationType*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LocationTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(State_machine*);
		IterValue(List, AMTypeList, it)->valstrfunc = MonitorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MonitorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvMotor*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvMotorList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(MotorType*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMMotorTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ordlist*);
		IterValue(List, AMTypeList, it)->valstrfunc = OrderListPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))OrderListPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Path*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPathList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AgvPathType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMAgvPathTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Photoeye*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(PhotoeyeType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyeTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoeyeTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(process*);
		IterValue(List, AMTypeList, it)->valstrfunc = ProcessPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ProcessPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(queue*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueuePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))QueuePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMQueueList*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueueList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Rate);
		IterValue(List, AMTypeList, it)->valstrfunc = Rate_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(double);
		IterValue(List, AMTypeList, it)->valstrfunc = Real_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(resource*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourcePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ResourcePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMResourceList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourceList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(SchedJob*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SchedJobPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMSchedJobList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSection*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSectionType*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(States*);
		IterValue(List, AMTypeList, it)->valstrfunc = StatePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StatePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(rnstream*);
		IterValue(List, AMTypeList, it)->valstrfunc = StreamPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StreamPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(char*);
		IterValue(List, AMTypeList, it)->valstrfunc = String_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMStringList*);
		IterValue(List, AMTypeList, it)->valstrfunc = StringList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(System*);
		IterValue(List, AMTypeList, it)->valstrfunc = SystemPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SystemPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(table*);
		IterValue(List, AMTypeList, it)->valstrfunc = TablePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TablePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASITime);
		IterValue(List, AMTypeList, it)->valstrfunc = Time_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvTransfer*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(TransferType*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(vehicle*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehiclePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehiclePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehicleList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehicleList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(VehSeg*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehSegPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehSegList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Velocity);
		IterValue(List, AMTypeList, it)->valstrfunc = Velocity_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
	}

}

