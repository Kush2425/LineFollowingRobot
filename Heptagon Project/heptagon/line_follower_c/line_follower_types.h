/* --- Generated the 9/4/2025 at 6:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 21:23:9 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Line_follower__St_WhitelineFollower,
  Line_follower__St_Whiteline,
  Line_follower__St_Stopstate,
  Line_follower__St_Parkright,
  Line_follower__St_Parkleft,
  Line_follower__St_ParkingState,
  Line_follower__St_ObstacleRight,
  Line_follower__St_ObstacleLeft,
  Line_follower__St_ObstacleForward,
  Line_follower__St_ObstacleFinalRight,
  Line_follower__St_LineSwitch,
  Line_follower__St_Blackline,
  Line_follower__St_BlackUturn,
  Line_follower__St_BlackRight
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

#endif // LINE_FOLLOWER_TYPES_H
