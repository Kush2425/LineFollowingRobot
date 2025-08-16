/* --- Generated the 9/4/2025 at 6:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 21:23:9 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  long v_5;
  long v_3;
  long v_1;
  long v_20;
  long v_18;
  long v_16;
  long v_68;
  long v_66;
  long v_156;
  long v_145;
  long v_221;
  long v_210;
  Line_follower__st ck;
  long pnr;
  long lastcountwhite_1;
  long whiteavgsen4_1;
  long whiteavgsen3_1;
  long whiteavgsen2_1;
  long whiteavgsen1_1;
  long whiteavgsen0_1;
  long finalavg4_1;
  long finalavg3_1;
  long finalavg2_1;
  long finalavg1_1;
  long finalavg0_1;
  long rightCounter_1;
  long navigation_1;
  long checkparkhere_1;
  long parkingelapse_1;
  long parkdir_1;
  long parkrighttimer_1;
  long parklefttimer_1;
  long stopCounter_1;
  long objectLeftCounter_1;
  long objectCounter_1;
  long right_1;
  long left_1;
  long sum_1;
  long act4_1;
  long act3_1;
  long act2_1;
  long act1_1;
  long act0_1;
  long dir_1;
  long number_1;
  long pid_value_1;
  long d_1;
  long i_1;
  long p_1;
  long error_1;
  long uTurn_1;
  long rightTurn_1;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  long v_l;
  long v_r;
  long direction;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(long sen[5], long irsenLeft,
                                       long irsenFront, long irsenRight,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  long v_l;
  long v_r;
  long direction;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long irsenLeft, long irsenFront,
                              long irsenRight, Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
