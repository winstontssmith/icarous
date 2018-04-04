//
// Created by research133 on 11/20/17.
//

#ifndef CFETOP_MSGIDS_H
#define CFETOP_MSGIDS_H

#define ICAROUS_WP_MID    0x0011
#define ICAROUS_WPREACHED_MID 0x0012
#define ICAROUS_GEOFENCE_MID 0x0013
#define ICAROUS_STARTMISSION_MID 0x0014
#define ICAROUS_RESET_MID 0x0015
#define ICAROUS_TRAFFIC_MID 0x0016
#define ICAROUS_POSITION_MID 0x0017
#define ICAROUS_ATTITUDE_MID 0x0018
#define ICAROUS_VELOCITY_MID 0x0019
#define ICAROUS_COMMANDS_MID 0x001A
#define ICAROUS_COMACK_MID 0x001B
#define ICAROUS_VISBAND_MID 0x001C
#define ICAROUS_RESETFP_MID 0x001D

#define AP_COMMANDS_MID 0X001A

#define INTERFACE_GS_WAKEUP_MID 0x0020
#define INTERFACE_AP_WAKEUP_MID 0x0021


#define PLEXIL_WAKEUP_MID 0x0032
#define SERVICE_INTERFACE_MID 0x0033
#define SERVICE_TRAJECTORY_MID 0x0034
#define SERVICE_GEOFENCE_MID 0x0035
#define SERVICE_TRAFFIC_MID 0x0036
#define SERVICE_DITCH_MID 0x0037
#define SERVICE_RESPONSE_MID 0x0031
#define SERVICE_INTERFACE_RESPONSE_MID 0x0039
#define SERVICE_TRAJECTORY_RESPONSE_MID 0x003A
#define SERVICE_GEOFENCE_RESPONSE_MID 0x003B
#define SERVICE_TRAFFIC_RESPONSE_MID 0x003C
#define SERVICE_DITCH_RESPONSE_MID 0x003C

#define SendSBMsg(msg)\
CFE_SB_TimeStampMsg((CFE_SB_Msg_t * ) &msg); \
CFE_SB_SendMsg((CFE_SB_Msg_t * ) &msg);


#endif //CFETOP_MSGIDS_H
