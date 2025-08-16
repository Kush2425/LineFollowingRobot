/* --- Generated the 9/4/2025 at 6:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 21:23:9 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_WhitelineFollower")==0)) {
    return Line_follower__St_WhitelineFollower;
  };
  if ((strcmp(s, "St_Whiteline")==0)) {
    return Line_follower__St_Whiteline;
  };
  if ((strcmp(s, "St_Stopstate")==0)) {
    return Line_follower__St_Stopstate;
  };
  if ((strcmp(s, "St_Parkright")==0)) {
    return Line_follower__St_Parkright;
  };
  if ((strcmp(s, "St_Parkleft")==0)) {
    return Line_follower__St_Parkleft;
  };
  if ((strcmp(s, "St_ParkingState")==0)) {
    return Line_follower__St_ParkingState;
  };
  if ((strcmp(s, "St_ObstacleRight")==0)) {
    return Line_follower__St_ObstacleRight;
  };
  if ((strcmp(s, "St_ObstacleLeft")==0)) {
    return Line_follower__St_ObstacleLeft;
  };
  if ((strcmp(s, "St_ObstacleForward")==0)) {
    return Line_follower__St_ObstacleForward;
  };
  if ((strcmp(s, "St_ObstacleFinalRight")==0)) {
    return Line_follower__St_ObstacleFinalRight;
  };
  if ((strcmp(s, "St_LineSwitch")==0)) {
    return Line_follower__St_LineSwitch;
  };
  if ((strcmp(s, "St_Blackline")==0)) {
    return Line_follower__St_Blackline;
  };
  if ((strcmp(s, "St_BlackUturn")==0)) {
    return Line_follower__St_BlackUturn;
  };
  if ((strcmp(s, "St_BlackRight")==0)) {
    return Line_follower__St_BlackRight;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_WhitelineFollower:
      strcpy(buf, "St_WhitelineFollower");
      break;
    case Line_follower__St_Whiteline:
      strcpy(buf, "St_Whiteline");
      break;
    case Line_follower__St_Stopstate:
      strcpy(buf, "St_Stopstate");
      break;
    case Line_follower__St_Parkright:
      strcpy(buf, "St_Parkright");
      break;
    case Line_follower__St_Parkleft:
      strcpy(buf, "St_Parkleft");
      break;
    case Line_follower__St_ParkingState:
      strcpy(buf, "St_ParkingState");
      break;
    case Line_follower__St_ObstacleRight:
      strcpy(buf, "St_ObstacleRight");
      break;
    case Line_follower__St_ObstacleLeft:
      strcpy(buf, "St_ObstacleLeft");
      break;
    case Line_follower__St_ObstacleForward:
      strcpy(buf, "St_ObstacleForward");
      break;
    case Line_follower__St_ObstacleFinalRight:
      strcpy(buf, "St_ObstacleFinalRight");
      break;
    case Line_follower__St_LineSwitch:
      strcpy(buf, "St_LineSwitch");
      break;
    case Line_follower__St_Blackline:
      strcpy(buf, "St_Blackline");
      break;
    case Line_follower__St_BlackUturn:
      strcpy(buf, "St_BlackUturn");
      break;
    case Line_follower__St_BlackRight:
      strcpy(buf, "St_BlackRight");
      break;
    default:
      break;
  };
  return buf;
}

