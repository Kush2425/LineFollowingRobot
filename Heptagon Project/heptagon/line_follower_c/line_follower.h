/* --- Generated the 9/4/2025 at 6:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 21:23:9 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__line_follower_mem {
  int v_5;
  int v_3;
  int v_1;
  int v_20;
  int v_18;
  int v_16;
  int v_68;
  int v_66;
  int v_156;
  int v_145;
  int v_221;
  int v_210;
  Line_follower__st ck;
  int pnr;
  int lastcountwhite_1;
  int whiteavgsen4_1;
  int whiteavgsen3_1;
  int whiteavgsen2_1;
  int whiteavgsen1_1;
  int whiteavgsen0_1;
  int finalavg4_1;
  int finalavg3_1;
  int finalavg2_1;
  int finalavg1_1;
  int finalavg0_1;
  int rightCounter_1;
  int navigation_1;
  int checkparkhere_1;
  int parkingelapse_1;
  int parkdir_1;
  int parkrighttimer_1;
  int parklefttimer_1;
  int stopCounter_1;
  int objectLeftCounter_1;
  int objectCounter_1;
  int right_1;
  int left_1;
  int sum_1;
  int act4_1;
  int act3_1;
  int act2_1;
  int act1_1;
  int act0_1;
  int dir_1;
  int number_1;
  int pid_value_1;
  int d_1;
  int i_1;
  int p_1;
  int error_1;
  int uTurn_1;
  int rightTurn_1;
} Line_follower__line_follower_mem;

typedef struct Line_follower__line_follower_out {
  int v_l;
  int v_r;
  int direction;
} Line_follower__line_follower_out;

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self);

void Line_follower__line_follower_step(int sen[5], int irsenLeft,
                                       int irsenFront, int irsenRight,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__line_follower_mem line_follower;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int direction;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int irsenLeft, int irsenFront,
                              int irsenRight, Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
