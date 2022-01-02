// decls.h
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


#ifndef __DECLS_H__
#define __DECLS_H__

#include "user.h"
struct model_conv_struct {
	System* $sys;
	LocHead* am_sta_roller_out3;
	LocHead* am_sta_roller_in1_1;
	LocHead* am_sta_roller_in2_0;
	LocHead* am_sta_out;
	LocHead* am_sta_enter1;
	LocHead* am_sta_gate_in;
	LocHead* am_sta_roller_out4;
	LocHead* am_sta_roller_out5;
	LocHead* am_sta_roller_in2_1;
	LocHead* am_sta_roller_in1_0;
	LocHead* am_sta_desk_in;
	LocHead* am_sta_roller_out1;
	LocHead* am_sta_roller_out2;
	LocHead* am_sta_enter0;
	LocHead* am_sta_roller_end1_0;
	LocHead* am_sta_desk_out;
	LocHead* am_sta_roller_end2_0;
	LocHead* am_sta_roller_end2_1;
	LocHead* am_sta_roller_end1_1;
	System* am_parentsys;
	LocHead* am_sta_roller_in4_1;
	LocHead* am_sta_roller_end4_0;
	LocHead* am_sta_roller_in5_0;
	LocHead* am_sta_roller_in3_1;
	LocHead* am_sta_gate_out;
	LocHead* am_sta_roller_end3_1;
	LocHead* am_sta_roller_end5_0;
	LocHead* am_sta_roller_end3_0;
	LocHead* am_sta_roller_in3_0;
	LocHead* am_sta_roller_end5_1;
	LocHead* am_sta_roller_end4_1;
	LocHead* am_sta_roller_in4_0;
	LocHead* am_sta_roller_in5_1;
};
char* Acceleration_valstrfunc(void*);
Acceleration Acceleration_strvalfunc(char*);
char* BlockPtr_valstrfunc(void*);
block* BlockPtr_strvalfunc(char*);
char* BlockList_valstrfunc(void*);
char* Color_valstrfunc(void*);
ASI_Color Color_strvalfunc(char*);
char* ContainerPtr_valstrfunc(void*);
Container* ContainerPtr_strvalfunc(char*);
char* ContainerList_valstrfunc(void*);
char* CounterPtr_valstrfunc(void*);
counter* CounterPtr_strvalfunc(char*);
char* Distance_valstrfunc(void*);
Distance Distance_strvalfunc(char*);
char* FilePtr_valstrfunc(void*);
iofile* FilePtr_strvalfunc(char*);
char* GraphPtr_valstrfunc(void*);
bgraph* GraphPtr_strvalfunc(char*);
char* Integer_valstrfunc(void*);
int32 Integer_strvalfunc(char*);
char* LabelPtr_valstrfunc(void*);
label* LabelPtr_strvalfunc(char*);
char* LoadPtr_valstrfunc(void*);
load* LoadPtr_strvalfunc(char*);
char* LoadList_valstrfunc(void*);
char* LoadTypePtr_valstrfunc(void*);
loadtype* LoadTypePtr_strvalfunc(char*);
char* Location_valstrfunc(void*);
simloc* Location_strvalfunc(char*);
char* LocationList_valstrfunc(void*);
char* LocationTypePtr_valstrfunc(void*);
LocationType* LocationTypePtr_strvalfunc(char*);
char* LocationTypeList_valstrfunc(void*);
char* MonitorPtr_valstrfunc(void*);
State_machine* MonitorPtr_strvalfunc(char*);
char* MotorPtr_valstrfunc(void*);
ConvMotor* MotorPtr_strvalfunc(char*);
char* MotorList_valstrfunc(void*);
char* MotorTypePtr_valstrfunc(void*);
MotorType* MotorTypePtr_strvalfunc(char*);
char* MotorTypeList_valstrfunc(void*);
char* OrderListPtr_valstrfunc(void*);
ordlist* OrderListPtr_strvalfunc(char*);
char* PathPtr_valstrfunc(void*);
Path* PathPtr_strvalfunc(char*);
char* PathList_valstrfunc(void*);
char* PathTypePtr_valstrfunc(void*);
AgvPathType* PathTypePtr_strvalfunc(char*);
char* PathTypeList_valstrfunc(void*);
char* PhotoeyePtr_valstrfunc(void*);
Photoeye* PhotoeyePtr_strvalfunc(char*);
char* PhotoeyeList_valstrfunc(void*);
char* PhotoeyeTypePtr_valstrfunc(void*);
PhotoeyeType* PhotoeyeTypePtr_strvalfunc(char*);
char* PhotoeyeTypeList_valstrfunc(void*);
char* ProcessPtr_valstrfunc(void*);
process* ProcessPtr_strvalfunc(char*);
char* QueuePtr_valstrfunc(void*);
queue* QueuePtr_strvalfunc(char*);
char* QueueList_valstrfunc(void*);
char* Rate_valstrfunc(void*);
Rate Rate_strvalfunc(char*);
char* Real_valstrfunc(void*);
double Real_strvalfunc(char*);
char* ResourcePtr_valstrfunc(void*);
resource* ResourcePtr_strvalfunc(char*);
char* ResourceList_valstrfunc(void*);
char* SchedJobPtr_valstrfunc(void*);
SchedJob* SchedJobPtr_strvalfunc(char*);
char* SchedJobList_valstrfunc(void*);
char* SectionPtr_valstrfunc(void*);
ConvSection* SectionPtr_strvalfunc(char*);
char* SectionList_valstrfunc(void*);
char* SectionTypePtr_valstrfunc(void*);
ConvSectionType* SectionTypePtr_strvalfunc(char*);
char* SectionTypeList_valstrfunc(void*);
char* StatePtr_valstrfunc(void*);
States* StatePtr_strvalfunc(char*);
char* StreamPtr_valstrfunc(void*);
rnstream* StreamPtr_strvalfunc(char*);
char* String_valstrfunc(void*);
char* String_strvalfunc(char*);
char* StringList_valstrfunc(void*);
char* SystemPtr_valstrfunc(void*);
System* SystemPtr_strvalfunc(char*);
char* TablePtr_valstrfunc(void*);
table* TablePtr_strvalfunc(char*);
char* Time_valstrfunc(void*);
ASITime Time_strvalfunc(char*);
char* TransferPtr_valstrfunc(void*);
ConvTransfer* TransferPtr_strvalfunc(char*);
char* TransferTypePtr_valstrfunc(void*);
TransferType* TransferTypePtr_strvalfunc(char*);
char* VehiclePtr_valstrfunc(void*);
vehicle* VehiclePtr_strvalfunc(char*);
char* VehicleList_valstrfunc(void*);
char* VehSegPtr_valstrfunc(void*);
VehSeg* VehSegPtr_strvalfunc(char*);
char* VehSegList_valstrfunc(void*);
char* Velocity_valstrfunc(void*);
Velocity Velocity_strvalfunc(char*);
struct model_struct {
	System* $sys;
	queue* am_Q_park;
	process* am_P_priority_first;
	rnstream* am_stream_R_desk_1;
	process* am_die;
	variable* am_runtime$var;
	int32 am_runtime;
	process* am_P_engine;
	attribute* am_roller$att;
	process* am_P_read;
	rnstream* am_stream_L_person_1;
	queue* am_Q_desk;
	subrtn* am_S_normal1$sub;
	int32 (*am_S_normal1)(load*, int32, void*);
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	variable* am_que$var;
	int32 *am_que;
	rnstream* am_stream_L_person_2;
	process* am_P_normal;
	attribute* am_flag$att;
	subrtn* am_S_normal$sub;
	int32 (*am_S_normal)(load*, int32, void*);
	queue* am_Q_roll;
	attribute* am_arrival_time$att;
	rnstream* am_stream_R_gate_1;
	variable* am_V_useless$var;
	char* *am_V_useless;
	attribute* am_prior$att;
	System* am_modelsys;
	variable* am_V_pointer$var;
	iofile* am_V_pointer;
	ordlist* am_OL_roller;
	attribute* am_ticket$att;
	attribute* am_id$att;
	attribute* am_cc$att;
	subrtn* am_S_priority1$sub;
	int32 (*am_S_priority1)(load*, int32, void*);
	subrtn* am_S_priority$sub;
	int32 (*am_S_priority)(load*, int32, void*);
	rnstream* am_stream_L_dummy_1;
	rnstream* am_stream0;
	variable* am_cont_logic$var;
	int32 am_cont_logic;
	rnstream* am_stream_R_roll_1;
	variable* am_karts$var;
	int32 am_karts;
	struct model_conv_struct am_conv;
	variable* am_numpriority$var;
	int32 *am_numpriority;
	queue* am_Q_gate;
	variable* am_pty$var;
	int32 *am_pty;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
};
extern struct model_struct am_model;
void initglobs0();
#endif // __DECLS_H__
