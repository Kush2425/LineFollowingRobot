/* --- Generated the 9/4/2025 at 6:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. feb. 11 21:23:9 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__line_follower_reset(Line_follower__line_follower_mem* self) {
  self->v_210 = true;
  self->v_145 = true;
  self->v_66 = true;
  self->v_16 = true;
  self->v_1 = true;
  self->lastcountwhite_1 = 0;
  self->whiteavgsen4_1 = 0;
  self->whiteavgsen3_1 = 0;
  self->whiteavgsen2_1 = 0;
  self->whiteavgsen1_1 = 0;
  self->whiteavgsen0_1 = 0;
  self->finalavg4_1 = 0;
  self->finalavg3_1 = 0;
  self->finalavg2_1 = 0;
  self->finalavg1_1 = 0;
  self->finalavg0_1 = 0;
  self->rightCounter_1 = 0;
  self->parkrighttimer_1 = 1;
  self->parklefttimer_1 = 1;
  self->stopCounter_1 = 0;
  self->objectLeftCounter_1 = 0;
  self->objectCounter_1 = 0;
  self->right_1 = 0;
  self->left_1 = 0;
  self->sum_1 = 0;
  self->act4_1 = 0;
  self->act3_1 = 0;
  self->act2_1 = 0;
  self->act1_1 = 0;
  self->act0_1 = 0;
  self->dir_1 = 0;
  self->number_1 = 20;
  self->pid_value_1 = 0;
  self->d_1 = 0;
  self->i_1 = 0;
  self->p_1 = 0;
  self->error_1 = 0;
  self->uTurn_1 = false;
  self->rightTurn_1 = false;
  self->pnr = false;
  self->ck = Line_follower__St_WhitelineFollower;
}

void Line_follower__line_follower_step(long sen[5], long irsenLeft,
                                       long irsenFront, long irsenRight,
                                       Line_follower__line_follower_out* _out,
                                       Line_follower__line_follower_mem* self) {
  
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_4;
  long v_2;
  long v;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_25;
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_19;
  long v_17;
  long v_15;
  long v_112;
  long v_111;
  long v_110;
  long v_109;
  long v_108;
  long v_107;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_102;
  long v_101;
  long v_100;
  long v_99;
  long v_98;
  long v_97;
  long v_96;
  long v_95;
  long v_94;
  long v_93;
  long v_92;
  long v_91;
  long v_90;
  long v_89;
  long v_88;
  long v_87;
  long v_86;
  long v_85;
  long v_84;
  long v_83;
  long v_82;
  long v_81;
  long v_80;
  long v_79;
  long v_78;
  long v_77;
  long v_76;
  long v_75;
  long v_74;
  long v_73;
  long v_72;
  long v_71;
  long v_70;
  long v_69;
  long v_67;
  long v_65;
  long v_64;
  long v_63;
  long v_62;
  long v_61;
  long v_60;
  long v_59;
  long v_58;
  long v_57;
  long v_56;
  long v_55;
  long v_54;
  long v_53;
  long v_52;
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_47;
  long v_46;
  long v_45;
  long v_44;
  long v_43;
  long v_42;
  long v_41;
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  Line_follower__st v_32;
  long v_31;
  long v_30;
  long v_126;
  long v_125;
  long v_124;
  long v_123;
  long v_122;
  long v_121;
  long v_120;
  long v_119;
  long v_118;
  long v_117;
  long v_116;
  long v_115;
  long v_114;
  long v_113;
  long v_159;
  long v_158;
  long v_157;
  long v_155;
  long v_154;
  long v_153;
  long v_152;
  long v_151;
  long v_150;
  long v_149;
  long v_148;
  long v_147;
  long v_146;
  long v_144;
  long v_143;
  long v_142;
  long v_141;
  long v_140;
  long v_139;
  long v_138;
  long v_137;
  long v_136;
  long v_135;
  long v_134;
  long v_133;
  long v_132;
  long v_131;
  Line_follower__st v_130;
  long v_129;
  long v_128;
  long v_127;
  long count_1;
  long v_226;
  long v_225;
  long v_224;
  long v_223;
  long v_222;
  long v_220;
  long v_219;
  long v_218;
  long v_217;
  long v_216;
  long v_215;
  long v_214;
  long v_213;
  long v_212;
  long v_211;
  long v_209;
  long v_208;
  long v_207;
  long v_206;
  long v_205;
  long v_204;
  long v_203;
  long v_202;
  long v_201;
  long v_200;
  long v_199;
  long v_198;
  long v_197;
  long v_196;
  long v_195;
  long v_194;
  long v_193;
  long v_192;
  long v_191;
  long v_190;
  long v_189;
  long v_188;
  long v_187;
  long v_186;
  long v_185;
  long v_184;
  long v_183;
  long v_182;
  long v_181;
  long v_180;
  long v_179;
  long v_178;
  long v_177;
  long v_176;
  long v_175;
  long v_174;
  long v_173;
  long v_172;
  long v_171;
  long v_170;
  long v_169;
  long v_168;
  long v_167;
  Line_follower__st v_166;
  long v_165;
  Line_follower__st v_164;
  long v_163;
  Line_follower__st v_162;
  long v_161;
  long v_160;
  long count;
  long v_242;
  long v_241;
  long v_240;
  long v_239;
  long v_238;
  long v_237;
  long v_236;
  long v_235;
  long v_234;
  long v_233;
  long v_232;
  long v_231;
  long v_230;
  long v_229;
  long v_228;
  long v_227;
  long v_267;
  long v_266;
  long v_265;
  long v_264;
  long v_263;
  long v_262;
  long v_261;
  long v_260;
  long v_259;
  long v_258;
  long v_257;
  long v_256;
  long v_255;
  long v_254;
  long v_253;
  long v_252;
  long v_251;
  long v_250;
  long v_249;
  Line_follower__st v_248;
  long v_247;
  Line_follower__st v_246;
  long v_245;
  long v_244;
  long v_243;
  long v_285;
  long v_284;
  long v_283;
  long v_282;
  long v_281;
  long v_280;
  long v_279;
  long v_278;
  long v_277;
  long v_276;
  long v_275;
  long v_274;
  long v_273;
  long v_272;
  Line_follower__st v_271;
  long v_270;
  long v_269;
  long v_268;
  long v_296;
  long v_295;
  long v_294;
  long v_293;
  long v_292;
  long v_291;
  long v_290;
  long v_289;
  long v_288;
  long v_287;
  long v_286;
  long v_337;
  long v_336;
  long v_335;
  long v_334;
  long v_333;
  long v_332;
  long v_331;
  long v_330;
  long v_329;
  long v_328;
  long v_327;
  long v_326;
  long v_325;
  long v_324;
  long v_323;
  long v_322;
  long v_321;
  long v_320;
  long v_319;
  long v_318;
  long v_317;
  long v_316;
  long v_315;
  long v_314;
  long v_313;
  long v_312;
  long v_311;
  long v_310;
  long v_309;
  long v_308;
  long v_307;
  long v_306;
  long v_305;
  long v_304;
  long v_303;
  long v_302;
  long v_301;
  long v_300;
  long v_299;
  long v_298;
  long v_297;
  long v_411;
  long v_410;
  long v_409;
  long v_408;
  long v_407;
  long v_406;
  long v_405;
  long v_404;
  long v_403;
  long v_402;
  long v_401;
  long v_400;
  long v_399;
  long v_398;
  long v_397;
  long v_396;
  long v_395;
  long v_394;
  long v_393;
  long v_392;
  long v_391;
  long v_390;
  long v_389;
  long v_388;
  long v_387;
  long v_386;
  long v_385;
  long v_384;
  long v_383;
  long v_382;
  long v_381;
  long v_380;
  long v_379;
  long v_378;
  long v_377;
  long v_376;
  long v_375;
  long v_374;
  long v_373;
  long v_372;
  long v_371;
  long v_370;
  long v_369;
  long v_368;
  long v_367;
  long v_366;
  long v_365;
  long v_364;
  long v_363;
  long v_362;
  long v_361;
  long v_360;
  long v_359;
  long v_358;
  long v_357;
  long v_356;
  long v_355;
  long v_354;
  long v_353;
  long v_352;
  long v_351;
  long v_350;
  long v_349;
  long v_348;
  long v_347;
  long v_346;
  long v_345;
  long v_344;
  long v_343;
  long v_342;
  long v_341;
  long v_340;
  long v_339;
  long v_338;
  long v_453;
  long v_452;
  long v_451;
  long v_450;
  long v_449;
  long v_448;
  long v_447;
  long v_446;
  long v_445;
  long v_444;
  long v_443;
  long v_442;
  long v_441;
  long v_440;
  long v_439;
  long v_438;
  long v_437;
  long v_436;
  long v_435;
  long v_434;
  long v_433;
  long v_432;
  long v_431;
  long v_430;
  long v_429;
  long v_428;
  long v_427;
  long v_426;
  long v_425;
  long v_424;
  long v_423;
  long v_422;
  long v_421;
  long v_420;
  long v_419;
  long v_418;
  long v_417;
  long v_416;
  long v_415;
  long v_414;
  long v_413;
  long v_412;
  long nr_St_Stopstate;
  Line_follower__st ns_St_Stopstate;
  long lastcountwhite_St_Stopstate;
  long whiteavgsen4_St_Stopstate;
  long whiteavgsen3_St_Stopstate;
  long whiteavgsen2_St_Stopstate;
  long whiteavgsen1_St_Stopstate;
  long whiteavgsen0_St_Stopstate;
  long finalavg4_St_Stopstate;
  long finalavg3_St_Stopstate;
  long finalavg2_St_Stopstate;
  long finalavg1_St_Stopstate;
  long finalavg0_St_Stopstate;
  long rightCounter_St_Stopstate;
  long navigation_St_Stopstate;
  long checkparkhere_St_Stopstate;
  long parkingelapse_St_Stopstate;
  long parkdir_St_Stopstate;
  long parkrighttimer_St_Stopstate;
  long parklefttimer_St_Stopstate;
  long stopCounter_St_Stopstate;
  long objectLeftCounter_St_Stopstate;
  long objectCounter_St_Stopstate;
  long right_St_Stopstate;
  long left_St_Stopstate;
  long sum_St_Stopstate;
  long act4_St_Stopstate;
  long act3_St_Stopstate;
  long act2_St_Stopstate;
  long act1_St_Stopstate;
  long act0_St_Stopstate;
  long dir_St_Stopstate;
  long number_St_Stopstate;
  long pid_value_St_Stopstate;
  long d_St_Stopstate;
  long i_St_Stopstate;
  long p_St_Stopstate;
  long error_St_Stopstate;
  long uTurn_St_Stopstate;
  long rightTurn_St_Stopstate;
  long direction_St_Stopstate;
  long v_r_St_Stopstate;
  long v_l_St_Stopstate;
  long nr_St_Parkright;
  Line_follower__st ns_St_Parkright;
  long lastcountwhite_St_Parkright;
  long whiteavgsen4_St_Parkright;
  long whiteavgsen3_St_Parkright;
  long whiteavgsen2_St_Parkright;
  long whiteavgsen1_St_Parkright;
  long whiteavgsen0_St_Parkright;
  long finalavg4_St_Parkright;
  long finalavg3_St_Parkright;
  long finalavg2_St_Parkright;
  long finalavg1_St_Parkright;
  long finalavg0_St_Parkright;
  long rightCounter_St_Parkright;
  long navigation_St_Parkright;
  long checkparkhere_St_Parkright;
  long parkingelapse_St_Parkright;
  long parkdir_St_Parkright;
  long parkrighttimer_St_Parkright;
  long parklefttimer_St_Parkright;
  long stopCounter_St_Parkright;
  long objectLeftCounter_St_Parkright;
  long objectCounter_St_Parkright;
  long right_St_Parkright;
  long left_St_Parkright;
  long sum_St_Parkright;
  long act4_St_Parkright;
  long act3_St_Parkright;
  long act2_St_Parkright;
  long act1_St_Parkright;
  long act0_St_Parkright;
  long dir_St_Parkright;
  long number_St_Parkright;
  long pid_value_St_Parkright;
  long d_St_Parkright;
  long i_St_Parkright;
  long p_St_Parkright;
  long error_St_Parkright;
  long uTurn_St_Parkright;
  long rightTurn_St_Parkright;
  long direction_St_Parkright;
  long v_r_St_Parkright;
  long v_l_St_Parkright;
  long nr_St_Parkleft;
  Line_follower__st ns_St_Parkleft;
  long lastcountwhite_St_Parkleft;
  long whiteavgsen4_St_Parkleft;
  long whiteavgsen3_St_Parkleft;
  long whiteavgsen2_St_Parkleft;
  long whiteavgsen1_St_Parkleft;
  long whiteavgsen0_St_Parkleft;
  long finalavg4_St_Parkleft;
  long finalavg3_St_Parkleft;
  long finalavg2_St_Parkleft;
  long finalavg1_St_Parkleft;
  long finalavg0_St_Parkleft;
  long rightCounter_St_Parkleft;
  long navigation_St_Parkleft;
  long checkparkhere_St_Parkleft;
  long parkingelapse_St_Parkleft;
  long parkdir_St_Parkleft;
  long parkrighttimer_St_Parkleft;
  long parklefttimer_St_Parkleft;
  long stopCounter_St_Parkleft;
  long objectLeftCounter_St_Parkleft;
  long objectCounter_St_Parkleft;
  long right_St_Parkleft;
  long left_St_Parkleft;
  long sum_St_Parkleft;
  long act4_St_Parkleft;
  long act3_St_Parkleft;
  long act2_St_Parkleft;
  long act1_St_Parkleft;
  long act0_St_Parkleft;
  long dir_St_Parkleft;
  long number_St_Parkleft;
  long pid_value_St_Parkleft;
  long d_St_Parkleft;
  long i_St_Parkleft;
  long p_St_Parkleft;
  long error_St_Parkleft;
  long uTurn_St_Parkleft;
  long rightTurn_St_Parkleft;
  long direction_St_Parkleft;
  long v_r_St_Parkleft;
  long v_l_St_Parkleft;
  long nr_St_ParkingState;
  Line_follower__st ns_St_ParkingState;
  long lastcountwhite_St_ParkingState;
  long whiteavgsen4_St_ParkingState;
  long whiteavgsen3_St_ParkingState;
  long whiteavgsen2_St_ParkingState;
  long whiteavgsen1_St_ParkingState;
  long whiteavgsen0_St_ParkingState;
  long finalavg4_St_ParkingState;
  long finalavg3_St_ParkingState;
  long finalavg2_St_ParkingState;
  long finalavg1_St_ParkingState;
  long finalavg0_St_ParkingState;
  long rightCounter_St_ParkingState;
  long navigation_St_ParkingState;
  long checkparkhere_St_ParkingState;
  long parkingelapse_St_ParkingState;
  long parkdir_St_ParkingState;
  long parkrighttimer_St_ParkingState;
  long parklefttimer_St_ParkingState;
  long stopCounter_St_ParkingState;
  long objectLeftCounter_St_ParkingState;
  long objectCounter_St_ParkingState;
  long right_St_ParkingState;
  long left_St_ParkingState;
  long sum_St_ParkingState;
  long act4_St_ParkingState;
  long act3_St_ParkingState;
  long act2_St_ParkingState;
  long act1_St_ParkingState;
  long act0_St_ParkingState;
  long dir_St_ParkingState;
  long number_St_ParkingState;
  long pid_value_St_ParkingState;
  long d_St_ParkingState;
  long i_St_ParkingState;
  long p_St_ParkingState;
  long error_St_ParkingState;
  long uTurn_St_ParkingState;
  long rightTurn_St_ParkingState;
  long direction_St_ParkingState;
  long v_r_St_ParkingState;
  long v_l_St_ParkingState;
  long nr_St_BlackUturn;
  Line_follower__st ns_St_BlackUturn;
  long lastcountwhite_St_BlackUturn;
  long whiteavgsen4_St_BlackUturn;
  long whiteavgsen3_St_BlackUturn;
  long whiteavgsen2_St_BlackUturn;
  long whiteavgsen1_St_BlackUturn;
  long whiteavgsen0_St_BlackUturn;
  long finalavg4_St_BlackUturn;
  long finalavg3_St_BlackUturn;
  long finalavg2_St_BlackUturn;
  long finalavg1_St_BlackUturn;
  long finalavg0_St_BlackUturn;
  long rightCounter_St_BlackUturn;
  long navigation_St_BlackUturn;
  long checkparkhere_St_BlackUturn;
  long parkingelapse_St_BlackUturn;
  long parkdir_St_BlackUturn;
  long parkrighttimer_St_BlackUturn;
  long parklefttimer_St_BlackUturn;
  long stopCounter_St_BlackUturn;
  long objectLeftCounter_St_BlackUturn;
  long objectCounter_St_BlackUturn;
  long right_St_BlackUturn;
  long left_St_BlackUturn;
  long sum_St_BlackUturn;
  long act4_St_BlackUturn;
  long act3_St_BlackUturn;
  long act2_St_BlackUturn;
  long act1_St_BlackUturn;
  long act0_St_BlackUturn;
  long dir_St_BlackUturn;
  long number_St_BlackUturn;
  long pid_value_St_BlackUturn;
  long d_St_BlackUturn;
  long i_St_BlackUturn;
  long p_St_BlackUturn;
  long error_St_BlackUturn;
  long uTurn_St_BlackUturn;
  long rightTurn_St_BlackUturn;
  long direction_St_BlackUturn;
  long v_r_St_BlackUturn;
  long v_l_St_BlackUturn;
  long nr_St_BlackRight;
  Line_follower__st ns_St_BlackRight;
  long lastcountwhite_St_BlackRight;
  long whiteavgsen4_St_BlackRight;
  long whiteavgsen3_St_BlackRight;
  long whiteavgsen2_St_BlackRight;
  long whiteavgsen1_St_BlackRight;
  long whiteavgsen0_St_BlackRight;
  long finalavg4_St_BlackRight;
  long finalavg3_St_BlackRight;
  long finalavg2_St_BlackRight;
  long finalavg1_St_BlackRight;
  long finalavg0_St_BlackRight;
  long rightCounter_St_BlackRight;
  long navigation_St_BlackRight;
  long checkparkhere_St_BlackRight;
  long parkingelapse_St_BlackRight;
  long parkdir_St_BlackRight;
  long parkrighttimer_St_BlackRight;
  long parklefttimer_St_BlackRight;
  long stopCounter_St_BlackRight;
  long objectLeftCounter_St_BlackRight;
  long objectCounter_St_BlackRight;
  long right_St_BlackRight;
  long left_St_BlackRight;
  long sum_St_BlackRight;
  long act4_St_BlackRight;
  long act3_St_BlackRight;
  long act2_St_BlackRight;
  long act1_St_BlackRight;
  long act0_St_BlackRight;
  long dir_St_BlackRight;
  long number_St_BlackRight;
  long pid_value_St_BlackRight;
  long d_St_BlackRight;
  long i_St_BlackRight;
  long p_St_BlackRight;
  long error_St_BlackRight;
  long uTurn_St_BlackRight;
  long rightTurn_St_BlackRight;
  long direction_St_BlackRight;
  long v_r_St_BlackRight;
  long v_l_St_BlackRight;
  long nr_St_Blackline;
  Line_follower__st ns_St_Blackline;
  long lastcountwhite_St_Blackline;
  long whiteavgsen4_St_Blackline;
  long whiteavgsen3_St_Blackline;
  long whiteavgsen2_St_Blackline;
  long whiteavgsen1_St_Blackline;
  long whiteavgsen0_St_Blackline;
  long finalavg4_St_Blackline;
  long finalavg3_St_Blackline;
  long finalavg2_St_Blackline;
  long finalavg1_St_Blackline;
  long finalavg0_St_Blackline;
  long rightCounter_St_Blackline;
  long navigation_St_Blackline;
  long checkparkhere_St_Blackline;
  long parkingelapse_St_Blackline;
  long parkdir_St_Blackline;
  long parkrighttimer_St_Blackline;
  long parklefttimer_St_Blackline;
  long stopCounter_St_Blackline;
  long objectLeftCounter_St_Blackline;
  long objectCounter_St_Blackline;
  long right_St_Blackline;
  long left_St_Blackline;
  long sum_St_Blackline;
  long act4_St_Blackline;
  long act3_St_Blackline;
  long act2_St_Blackline;
  long act1_St_Blackline;
  long act0_St_Blackline;
  long dir_St_Blackline;
  long number_St_Blackline;
  long pid_value_St_Blackline;
  long d_St_Blackline;
  long i_St_Blackline;
  long p_St_Blackline;
  long error_St_Blackline;
  long uTurn_St_Blackline;
  long rightTurn_St_Blackline;
  long direction_St_Blackline;
  long v_r_St_Blackline;
  long v_l_St_Blackline;
  long nr_St_ObstacleFinalRight;
  Line_follower__st ns_St_ObstacleFinalRight;
  long lastcountwhite_St_ObstacleFinalRight;
  long whiteavgsen4_St_ObstacleFinalRight;
  long whiteavgsen3_St_ObstacleFinalRight;
  long whiteavgsen2_St_ObstacleFinalRight;
  long whiteavgsen1_St_ObstacleFinalRight;
  long whiteavgsen0_St_ObstacleFinalRight;
  long finalavg4_St_ObstacleFinalRight;
  long finalavg3_St_ObstacleFinalRight;
  long finalavg2_St_ObstacleFinalRight;
  long finalavg1_St_ObstacleFinalRight;
  long finalavg0_St_ObstacleFinalRight;
  long rightCounter_St_ObstacleFinalRight;
  long navigation_St_ObstacleFinalRight;
  long checkparkhere_St_ObstacleFinalRight;
  long parkingelapse_St_ObstacleFinalRight;
  long parkdir_St_ObstacleFinalRight;
  long parkrighttimer_St_ObstacleFinalRight;
  long parklefttimer_St_ObstacleFinalRight;
  long stopCounter_St_ObstacleFinalRight;
  long objectLeftCounter_St_ObstacleFinalRight;
  long objectCounter_St_ObstacleFinalRight;
  long right_St_ObstacleFinalRight;
  long left_St_ObstacleFinalRight;
  long sum_St_ObstacleFinalRight;
  long act4_St_ObstacleFinalRight;
  long act3_St_ObstacleFinalRight;
  long act2_St_ObstacleFinalRight;
  long act1_St_ObstacleFinalRight;
  long act0_St_ObstacleFinalRight;
  long dir_St_ObstacleFinalRight;
  long number_St_ObstacleFinalRight;
  long pid_value_St_ObstacleFinalRight;
  long d_St_ObstacleFinalRight;
  long i_St_ObstacleFinalRight;
  long p_St_ObstacleFinalRight;
  long error_St_ObstacleFinalRight;
  long uTurn_St_ObstacleFinalRight;
  long rightTurn_St_ObstacleFinalRight;
  long direction_St_ObstacleFinalRight;
  long v_r_St_ObstacleFinalRight;
  long v_l_St_ObstacleFinalRight;
  long nr_St_ObstacleLeft;
  Line_follower__st ns_St_ObstacleLeft;
  long lastcountwhite_St_ObstacleLeft;
  long whiteavgsen4_St_ObstacleLeft;
  long whiteavgsen3_St_ObstacleLeft;
  long whiteavgsen2_St_ObstacleLeft;
  long whiteavgsen1_St_ObstacleLeft;
  long whiteavgsen0_St_ObstacleLeft;
  long finalavg4_St_ObstacleLeft;
  long finalavg3_St_ObstacleLeft;
  long finalavg2_St_ObstacleLeft;
  long finalavg1_St_ObstacleLeft;
  long finalavg0_St_ObstacleLeft;
  long rightCounter_St_ObstacleLeft;
  long navigation_St_ObstacleLeft;
  long checkparkhere_St_ObstacleLeft;
  long parkingelapse_St_ObstacleLeft;
  long parkdir_St_ObstacleLeft;
  long parkrighttimer_St_ObstacleLeft;
  long parklefttimer_St_ObstacleLeft;
  long stopCounter_St_ObstacleLeft;
  long objectLeftCounter_St_ObstacleLeft;
  long objectCounter_St_ObstacleLeft;
  long right_St_ObstacleLeft;
  long left_St_ObstacleLeft;
  long sum_St_ObstacleLeft;
  long act4_St_ObstacleLeft;
  long act3_St_ObstacleLeft;
  long act2_St_ObstacleLeft;
  long act1_St_ObstacleLeft;
  long act0_St_ObstacleLeft;
  long dir_St_ObstacleLeft;
  long number_St_ObstacleLeft;
  long pid_value_St_ObstacleLeft;
  long d_St_ObstacleLeft;
  long i_St_ObstacleLeft;
  long p_St_ObstacleLeft;
  long error_St_ObstacleLeft;
  long uTurn_St_ObstacleLeft;
  long rightTurn_St_ObstacleLeft;
  long direction_St_ObstacleLeft;
  long v_r_St_ObstacleLeft;
  long v_l_St_ObstacleLeft;
  long nr_St_ObstacleForward;
  Line_follower__st ns_St_ObstacleForward;
  long lastcountwhite_St_ObstacleForward;
  long whiteavgsen4_St_ObstacleForward;
  long whiteavgsen3_St_ObstacleForward;
  long whiteavgsen2_St_ObstacleForward;
  long whiteavgsen1_St_ObstacleForward;
  long whiteavgsen0_St_ObstacleForward;
  long finalavg4_St_ObstacleForward;
  long finalavg3_St_ObstacleForward;
  long finalavg2_St_ObstacleForward;
  long finalavg1_St_ObstacleForward;
  long finalavg0_St_ObstacleForward;
  long rightCounter_St_ObstacleForward;
  long navigation_St_ObstacleForward;
  long checkparkhere_St_ObstacleForward;
  long parkingelapse_St_ObstacleForward;
  long parkdir_St_ObstacleForward;
  long parkrighttimer_St_ObstacleForward;
  long parklefttimer_St_ObstacleForward;
  long stopCounter_St_ObstacleForward;
  long objectLeftCounter_St_ObstacleForward;
  long objectCounter_St_ObstacleForward;
  long right_St_ObstacleForward;
  long left_St_ObstacleForward;
  long sum_St_ObstacleForward;
  long act4_St_ObstacleForward;
  long act3_St_ObstacleForward;
  long act2_St_ObstacleForward;
  long act1_St_ObstacleForward;
  long act0_St_ObstacleForward;
  long dir_St_ObstacleForward;
  long number_St_ObstacleForward;
  long pid_value_St_ObstacleForward;
  long d_St_ObstacleForward;
  long i_St_ObstacleForward;
  long p_St_ObstacleForward;
  long error_St_ObstacleForward;
  long uTurn_St_ObstacleForward;
  long rightTurn_St_ObstacleForward;
  long direction_St_ObstacleForward;
  long v_r_St_ObstacleForward;
  long v_l_St_ObstacleForward;
  long nr_St_ObstacleRight;
  Line_follower__st ns_St_ObstacleRight;
  long lastcountwhite_St_ObstacleRight;
  long whiteavgsen4_St_ObstacleRight;
  long whiteavgsen3_St_ObstacleRight;
  long whiteavgsen2_St_ObstacleRight;
  long whiteavgsen1_St_ObstacleRight;
  long whiteavgsen0_St_ObstacleRight;
  long finalavg4_St_ObstacleRight;
  long finalavg3_St_ObstacleRight;
  long finalavg2_St_ObstacleRight;
  long finalavg1_St_ObstacleRight;
  long finalavg0_St_ObstacleRight;
  long rightCounter_St_ObstacleRight;
  long navigation_St_ObstacleRight;
  long checkparkhere_St_ObstacleRight;
  long parkingelapse_St_ObstacleRight;
  long parkdir_St_ObstacleRight;
  long parkrighttimer_St_ObstacleRight;
  long parklefttimer_St_ObstacleRight;
  long stopCounter_St_ObstacleRight;
  long objectLeftCounter_St_ObstacleRight;
  long objectCounter_St_ObstacleRight;
  long right_St_ObstacleRight;
  long left_St_ObstacleRight;
  long sum_St_ObstacleRight;
  long act4_St_ObstacleRight;
  long act3_St_ObstacleRight;
  long act2_St_ObstacleRight;
  long act1_St_ObstacleRight;
  long act0_St_ObstacleRight;
  long dir_St_ObstacleRight;
  long number_St_ObstacleRight;
  long pid_value_St_ObstacleRight;
  long d_St_ObstacleRight;
  long i_St_ObstacleRight;
  long p_St_ObstacleRight;
  long error_St_ObstacleRight;
  long uTurn_St_ObstacleRight;
  long rightTurn_St_ObstacleRight;
  long direction_St_ObstacleRight;
  long v_r_St_ObstacleRight;
  long v_l_St_ObstacleRight;
  long nr_St_LineSwitch;
  Line_follower__st ns_St_LineSwitch;
  long lastcountwhite_St_LineSwitch;
  long whiteavgsen4_St_LineSwitch;
  long whiteavgsen3_St_LineSwitch;
  long whiteavgsen2_St_LineSwitch;
  long whiteavgsen1_St_LineSwitch;
  long whiteavgsen0_St_LineSwitch;
  long finalavg4_St_LineSwitch;
  long finalavg3_St_LineSwitch;
  long finalavg2_St_LineSwitch;
  long finalavg1_St_LineSwitch;
  long finalavg0_St_LineSwitch;
  long rightCounter_St_LineSwitch;
  long navigation_St_LineSwitch;
  long checkparkhere_St_LineSwitch;
  long parkingelapse_St_LineSwitch;
  long parkdir_St_LineSwitch;
  long parkrighttimer_St_LineSwitch;
  long parklefttimer_St_LineSwitch;
  long stopCounter_St_LineSwitch;
  long objectLeftCounter_St_LineSwitch;
  long objectCounter_St_LineSwitch;
  long right_St_LineSwitch;
  long left_St_LineSwitch;
  long sum_St_LineSwitch;
  long act4_St_LineSwitch;
  long act3_St_LineSwitch;
  long act2_St_LineSwitch;
  long act1_St_LineSwitch;
  long act0_St_LineSwitch;
  long dir_St_LineSwitch;
  long number_St_LineSwitch;
  long pid_value_St_LineSwitch;
  long d_St_LineSwitch;
  long i_St_LineSwitch;
  long p_St_LineSwitch;
  long error_St_LineSwitch;
  long uTurn_St_LineSwitch;
  long rightTurn_St_LineSwitch;
  long direction_St_LineSwitch;
  long v_r_St_LineSwitch;
  long v_l_St_LineSwitch;
  long nr_St_Whiteline;
  Line_follower__st ns_St_Whiteline;
  long lastcountwhite_St_Whiteline;
  long whiteavgsen4_St_Whiteline;
  long whiteavgsen3_St_Whiteline;
  long whiteavgsen2_St_Whiteline;
  long whiteavgsen1_St_Whiteline;
  long whiteavgsen0_St_Whiteline;
  long finalavg4_St_Whiteline;
  long finalavg3_St_Whiteline;
  long finalavg2_St_Whiteline;
  long finalavg1_St_Whiteline;
  long finalavg0_St_Whiteline;
  long rightCounter_St_Whiteline;
  long navigation_St_Whiteline;
  long checkparkhere_St_Whiteline;
  long parkingelapse_St_Whiteline;
  long parkdir_St_Whiteline;
  long parkrighttimer_St_Whiteline;
  long parklefttimer_St_Whiteline;
  long stopCounter_St_Whiteline;
  long objectLeftCounter_St_Whiteline;
  long objectCounter_St_Whiteline;
  long right_St_Whiteline;
  long left_St_Whiteline;
  long sum_St_Whiteline;
  long act4_St_Whiteline;
  long act3_St_Whiteline;
  long act2_St_Whiteline;
  long act1_St_Whiteline;
  long act0_St_Whiteline;
  long dir_St_Whiteline;
  long number_St_Whiteline;
  long pid_value_St_Whiteline;
  long d_St_Whiteline;
  long i_St_Whiteline;
  long p_St_Whiteline;
  long error_St_Whiteline;
  long uTurn_St_Whiteline;
  long rightTurn_St_Whiteline;
  long direction_St_Whiteline;
  long v_r_St_Whiteline;
  long v_l_St_Whiteline;
  long nr_St_WhitelineFollower;
  Line_follower__st ns_St_WhitelineFollower;
  long lastcountwhite_St_WhitelineFollower;
  long whiteavgsen4_St_WhitelineFollower;
  long whiteavgsen3_St_WhitelineFollower;
  long whiteavgsen2_St_WhitelineFollower;
  long whiteavgsen1_St_WhitelineFollower;
  long whiteavgsen0_St_WhitelineFollower;
  long finalavg4_St_WhitelineFollower;
  long finalavg3_St_WhitelineFollower;
  long finalavg2_St_WhitelineFollower;
  long finalavg1_St_WhitelineFollower;
  long finalavg0_St_WhitelineFollower;
  long rightCounter_St_WhitelineFollower;
  long navigation_St_WhitelineFollower;
  long checkparkhere_St_WhitelineFollower;
  long parkingelapse_St_WhitelineFollower;
  long parkdir_St_WhitelineFollower;
  long parkrighttimer_St_WhitelineFollower;
  long parklefttimer_St_WhitelineFollower;
  long stopCounter_St_WhitelineFollower;
  long objectLeftCounter_St_WhitelineFollower;
  long objectCounter_St_WhitelineFollower;
  long right_St_WhitelineFollower;
  long left_St_WhitelineFollower;
  long sum_St_WhitelineFollower;
  long act4_St_WhitelineFollower;
  long act3_St_WhitelineFollower;
  long act2_St_WhitelineFollower;
  long act1_St_WhitelineFollower;
  long act0_St_WhitelineFollower;
  long dir_St_WhitelineFollower;
  long number_St_WhitelineFollower;
  long pid_value_St_WhitelineFollower;
  long d_St_WhitelineFollower;
  long i_St_WhitelineFollower;
  long p_St_WhitelineFollower;
  long error_St_WhitelineFollower;
  long uTurn_St_WhitelineFollower;
  long rightTurn_St_WhitelineFollower;
  long direction_St_WhitelineFollower;
  long v_r_St_WhitelineFollower;
  long v_l_St_WhitelineFollower;
  Line_follower__st ns;
  long r;
  long nr;
  long rightTurn;
  long uTurn;
  long error;
  long p;
  long i;
  long d;
  long pid_value;
  long number;
  long dir;
  long act0;
  long act1;
  long act2;
  long act3;
  long act4;
  long sum;
  long left;
  long right;
  long objectCounter;
  long objectLeftCounter;
  long stopCounter;
  long parklefttimer;
  long parkrighttimer;
  long parkdir;
  long parkingelapse;
  long checkparkhere;
  long navigation;
  long rightCounter;
  long finalavg0;
  long finalavg1;
  long finalavg2;
  long finalavg3;
  long finalavg4;
  long whiteavgsen0;
  long whiteavgsen1;
  long whiteavgsen2;
  long whiteavgsen3;
  long whiteavgsen4;
  long lastcountwhite;
  r = self->pnr;
  switch (self->ck) {
    case Line_follower__St_WhitelineFollower:
      rightCounter_St_WhitelineFollower = self->rightCounter_1;
      navigation_St_WhitelineFollower = self->navigation_1;
      checkparkhere_St_WhitelineFollower = self->checkparkhere_1;
      parkingelapse_St_WhitelineFollower = self->parkingelapse_1;
      parkdir_St_WhitelineFollower = self->parkdir_1;
      parkrighttimer_St_WhitelineFollower = self->parkrighttimer_1;
      parklefttimer_St_WhitelineFollower = self->parklefttimer_1;
      stopCounter_St_WhitelineFollower = self->stopCounter_1;
      objectLeftCounter_St_WhitelineFollower = self->objectLeftCounter_1;
      objectCounter_St_WhitelineFollower = self->objectCounter_1;
      right_St_WhitelineFollower = self->right_1;
      left_St_WhitelineFollower = self->left_1;
      sum_St_WhitelineFollower = self->sum_1;
      act4_St_WhitelineFollower = self->act4_1;
      act3_St_WhitelineFollower = self->act3_1;
      act2_St_WhitelineFollower = self->act2_1;
      act1_St_WhitelineFollower = self->act1_1;
      act0_St_WhitelineFollower = self->act0_1;
      dir_St_WhitelineFollower = self->dir_1;
      number_St_WhitelineFollower = self->number_1;
      pid_value_St_WhitelineFollower = self->pid_value_1;
      d_St_WhitelineFollower = self->d_1;
      i_St_WhitelineFollower = self->i_1;
      p_St_WhitelineFollower = self->p_1;
      error_St_WhitelineFollower = self->error_1;
      uTurn_St_WhitelineFollower = self->uTurn_1;
      rightTurn_St_WhitelineFollower = self->rightTurn_1;
      v_453 = (self->whiteavgsen4_1-150);
      v_451 = (self->whiteavgsen3_1-150);
      v_449 = (self->whiteavgsen2_1-150);
      v_447 = (self->whiteavgsen1_1-150);
      v_445 = (self->whiteavgsen0_1-150);
      v_r_St_WhitelineFollower = 35;
      v_l_St_WhitelineFollower = 35;
      v_441 = (self->whiteavgsen4_1/3000);
      v_438 = sen[4];
      v_439 = (self->whiteavgsen4_1+v_438);
      v_435 = (self->whiteavgsen3_1/3000);
      v_432 = sen[3];
      v_433 = (self->whiteavgsen3_1+v_432);
      v_429 = (self->whiteavgsen2_1/3000);
      v_426 = sen[2];
      v_427 = (self->whiteavgsen2_1+v_426);
      v_423 = (self->whiteavgsen1_1/3000);
      v_420 = sen[1];
      v_421 = (self->whiteavgsen1_1+v_420);
      v_417 = (self->whiteavgsen0_1/3000);
      v_414 = sen[0];
      v_415 = (self->whiteavgsen0_1+v_414);
      lastcountwhite_St_WhitelineFollower = (self->lastcountwhite_1+1);
      act0 = act0_St_WhitelineFollower;
      act1 = act1_St_WhitelineFollower;
      act2 = act2_St_WhitelineFollower;
      act3 = act3_St_WhitelineFollower;
      act4 = act4_St_WhitelineFollower;
      uTurn = uTurn_St_WhitelineFollower;
      error = error_St_WhitelineFollower;
      p = p_St_WhitelineFollower;
      i = i_St_WhitelineFollower;
      d = d_St_WhitelineFollower;
      pid_value = pid_value_St_WhitelineFollower;
      number = number_St_WhitelineFollower;
      dir = dir_St_WhitelineFollower;
      sum = sum_St_WhitelineFollower;
      left = left_St_WhitelineFollower;
      right = right_St_WhitelineFollower;
      objectCounter = objectCounter_St_WhitelineFollower;
      objectLeftCounter = objectLeftCounter_St_WhitelineFollower;
      parklefttimer = parklefttimer_St_WhitelineFollower;
      parkrighttimer = parkrighttimer_St_WhitelineFollower;
      parkingelapse = parkingelapse_St_WhitelineFollower;
      checkparkhere = checkparkhere_St_WhitelineFollower;
      parkdir = parkdir_St_WhitelineFollower;
      navigation = navigation_St_WhitelineFollower;
      _out->v_l = v_l_St_WhitelineFollower;
      _out->v_r = v_r_St_WhitelineFollower;
      rightCounter = rightCounter_St_WhitelineFollower;
      rightTurn = rightTurn_St_WhitelineFollower;
      stopCounter = stopCounter_St_WhitelineFollower;
      lastcountwhite = lastcountwhite_St_WhitelineFollower;
      v_452 = (lastcountwhite>3000);
      if (v_452) {
        finalavg4_St_WhitelineFollower = v_453;
      } else {
        finalavg4_St_WhitelineFollower = 0;
      };
      v_450 = (lastcountwhite>3000);
      if (v_450) {
        finalavg3_St_WhitelineFollower = v_451;
      } else {
        finalavg3_St_WhitelineFollower = 0;
      };
      v_448 = (lastcountwhite>3000);
      if (v_448) {
        finalavg2_St_WhitelineFollower = v_449;
      } else {
        finalavg2_St_WhitelineFollower = 0;
      };
      v_446 = (lastcountwhite>3000);
      if (v_446) {
        finalavg1_St_WhitelineFollower = v_447;
      } else {
        finalavg1_St_WhitelineFollower = 0;
      };
      v_444 = (lastcountwhite>3000);
      if (v_444) {
        finalavg0_St_WhitelineFollower = v_445;
      } else {
        finalavg0_St_WhitelineFollower = 0;
      };
      v_443 = (lastcountwhite<3000);
      if (v_443) {
        direction_St_WhitelineFollower = 2;
      } else {
        direction_St_WhitelineFollower = 100;
      };
      v_440 = (lastcountwhite==3000);
      if (v_440) {
        v_442 = v_441;
      } else {
        v_442 = self->whiteavgsen4_1;
      };
      v_437 = (lastcountwhite<3000);
      if (v_437) {
        whiteavgsen4_St_WhitelineFollower = v_439;
      } else {
        whiteavgsen4_St_WhitelineFollower = v_442;
      };
      v_434 = (lastcountwhite==3000);
      if (v_434) {
        v_436 = v_435;
      } else {
        v_436 = self->whiteavgsen3_1;
      };
      v_431 = (lastcountwhite<3000);
      if (v_431) {
        whiteavgsen3_St_WhitelineFollower = v_433;
      } else {
        whiteavgsen3_St_WhitelineFollower = v_436;
      };
      v_428 = (lastcountwhite==3000);
      if (v_428) {
        v_430 = v_429;
      } else {
        v_430 = self->whiteavgsen2_1;
      };
      v_425 = (lastcountwhite<3000);
      if (v_425) {
        whiteavgsen2_St_WhitelineFollower = v_427;
      } else {
        whiteavgsen2_St_WhitelineFollower = v_430;
      };
      v_422 = (lastcountwhite==3000);
      if (v_422) {
        v_424 = v_423;
      } else {
        v_424 = self->whiteavgsen1_1;
      };
      v_419 = (lastcountwhite<3000);
      if (v_419) {
        whiteavgsen1_St_WhitelineFollower = v_421;
      } else {
        whiteavgsen1_St_WhitelineFollower = v_424;
      };
      v_416 = (lastcountwhite==3000);
      if (v_416) {
        v_418 = v_417;
      } else {
        v_418 = self->whiteavgsen0_1;
      };
      v_413 = (lastcountwhite<3000);
      if (v_413) {
        whiteavgsen0_St_WhitelineFollower = v_415;
      } else {
        whiteavgsen0_St_WhitelineFollower = v_418;
      };
      v_412 = (lastcountwhite==5000);
      if (v_412) {
        nr_St_WhitelineFollower = true;
        ns_St_WhitelineFollower = Line_follower__St_Whiteline;
      } else {
        nr_St_WhitelineFollower = false;
        ns_St_WhitelineFollower = Line_follower__St_WhitelineFollower;
      };
      _out->direction = direction_St_WhitelineFollower;
      finalavg0 = finalavg0_St_WhitelineFollower;
      finalavg1 = finalavg1_St_WhitelineFollower;
      finalavg2 = finalavg2_St_WhitelineFollower;
      finalavg3 = finalavg3_St_WhitelineFollower;
      finalavg4 = finalavg4_St_WhitelineFollower;
      whiteavgsen0 = whiteavgsen0_St_WhitelineFollower;
      whiteavgsen1 = whiteavgsen1_St_WhitelineFollower;
      whiteavgsen2 = whiteavgsen2_St_WhitelineFollower;
      whiteavgsen3 = whiteavgsen3_St_WhitelineFollower;
      whiteavgsen4 = whiteavgsen4_St_WhitelineFollower;
      ns = ns_St_WhitelineFollower;
      nr = nr_St_WhitelineFollower;
      break;
    case Line_follower__St_Whiteline:
      lastcountwhite_St_Whiteline = self->lastcountwhite_1;
      whiteavgsen4_St_Whiteline = self->whiteavgsen4_1;
      whiteavgsen3_St_Whiteline = self->whiteavgsen3_1;
      whiteavgsen2_St_Whiteline = self->whiteavgsen2_1;
      whiteavgsen1_St_Whiteline = self->whiteavgsen1_1;
      whiteavgsen0_St_Whiteline = self->whiteavgsen0_1;
      finalavg4_St_Whiteline = self->finalavg4_1;
      finalavg3_St_Whiteline = self->finalavg3_1;
      finalavg2_St_Whiteline = self->finalavg2_1;
      finalavg1_St_Whiteline = self->finalavg1_1;
      finalavg0_St_Whiteline = self->finalavg0_1;
      rightCounter_St_Whiteline = self->rightCounter_1;
      navigation_St_Whiteline = self->navigation_1;
      checkparkhere_St_Whiteline = self->checkparkhere_1;
      parkingelapse_St_Whiteline = self->parkingelapse_1;
      parkdir_St_Whiteline = self->parkdir_1;
      parkrighttimer_St_Whiteline = self->parkrighttimer_1;
      parklefttimer_St_Whiteline = self->parklefttimer_1;
      stopCounter_St_Whiteline = self->stopCounter_1;
      objectLeftCounter_St_Whiteline = self->objectLeftCounter_1;
      objectCounter_St_Whiteline = self->objectCounter_1;
      uTurn_St_Whiteline = self->uTurn_1;
      rightTurn_St_Whiteline = self->rightTurn_1;
      v_384 = sen[4];
      v_382 = sen[3];
      v_380 = sen[2];
      v_378 = sen[1];
      v_377 = sen[0];
      v_379 = (v_377+v_378);
      v_381 = (v_379+v_380);
      v_383 = (v_381+v_382);
      sum_St_Whiteline = (v_383+v_384);
      v_375 = sen[4];
      v_376 = (v_375<=self->finalavg4_1);
      if (v_376) {
        act4_St_Whiteline = 0;
      } else {
        act4_St_Whiteline = 1;
      };
      v_373 = sen[3];
      v_374 = (v_373<=self->finalavg3_1);
      if (v_374) {
        act3_St_Whiteline = 0;
      } else {
        act3_St_Whiteline = 1;
      };
      v_371 = sen[2];
      v_372 = (v_371<=self->finalavg2_1);
      if (v_372) {
        act2_St_Whiteline = 0;
      } else {
        act2_St_Whiteline = 1;
      };
      v_369 = sen[1];
      v_370 = (v_369<=self->finalavg1_1);
      if (v_370) {
        act1_St_Whiteline = 0;
      } else {
        act1_St_Whiteline = 1;
      };
      v_367 = sen[0];
      v_368 = (v_367<=self->finalavg0_1);
      if (v_368) {
        act0_St_Whiteline = 0;
      } else {
        act0_St_Whiteline = 1;
      };
      act0 = act0_St_Whiteline;
      v_388 = (-10*act0);
      v_357 = (act0==1);
      v_347 = (act0==1);
      v_338 = (act0==1);
      act1 = act1_St_Whiteline;
      v_389 = (-5*act1);
      v_390 = (v_388+v_389);
      v_385 = (act0+act1);
      v_358 = (act1==1);
      v_359 = (v_357&&v_358);
      v_348 = (act1==1);
      v_349 = (v_347&&v_348);
      v_339 = (act1==0);
      v_340 = (v_338&&v_339);
      act2 = act2_St_Whiteline;
      v_391 = (0*act2);
      v_392 = (v_390+v_391);
      v_386 = (v_385+act2);
      v_360 = (act2==1);
      v_361 = (v_359&&v_360);
      v_350 = (act2==0);
      v_351 = (v_349&&v_350);
      v_341 = (act2==1);
      v_342 = (v_340&&v_341);
      act3 = act3_St_Whiteline;
      v_393 = (5*act3);
      v_394 = (v_392+v_393);
      v_387 = (v_386+act3);
      v_362 = (act3==0);
      v_363 = (v_361&&v_362);
      v_352 = (act3==1);
      v_353 = (v_351&&v_352);
      v_343 = (act3==1);
      v_344 = (v_342&&v_343);
      act4 = act4_St_Whiteline;
      v_395 = (10*act4);
      error_St_Whiteline = (v_394+v_395);
      number_St_Whiteline = (v_387+act4);
      v_364 = (act4==1);
      v_365 = (v_363&&v_364);
      v_354 = (act4==1);
      v_355 = (v_353&&v_354);
      v_345 = (act4==1);
      v_346 = (v_344&&v_345);
      v_356 = (v_346||v_355);
      v_366 = (v_356||v_365);
      if (v_366) {
        nr_St_Whiteline = true;
        ns_St_Whiteline = Line_follower__St_LineSwitch;
      } else {
        nr_St_Whiteline = false;
        ns_St_Whiteline = Line_follower__St_Whiteline;
      };
      uTurn = uTurn_St_Whiteline;
      error = error_St_Whiteline;
      v_410 = (error>5);
      if (v_410) {
        v_411 = 2;
      } else {
        v_411 = 0;
      };
      v_409 = (error<-5);
      if (v_409) {
        dir_St_Whiteline = 1;
      } else {
        dir_St_Whiteline = v_411;
      };
      v_404 = (error>5);
      v_403 = (error<-5);
      v_400 = (error>5);
      v_399 = (error<-5);
      d_St_Whiteline = (error-self->error_1);
      i_St_Whiteline = (self->i_1+error);
      p_St_Whiteline = error;
      p = p_St_Whiteline;
      v_396 = (3*p);
      i = i_St_Whiteline;
      v_397 = (i/1000);
      v_398 = (v_396+v_397);
      d = d_St_Whiteline;
      pid_value_St_Whiteline = (v_398+d);
      pid_value = pid_value_St_Whiteline;
      v_405 = (50-pid_value);
      if (v_404) {
        v_406 = 50;
      } else {
        v_406 = v_405;
      };
      if (v_403) {
        right_St_Whiteline = 50;
      } else {
        right_St_Whiteline = v_406;
      };
      v_401 = (50+pid_value);
      if (v_400) {
        v_402 = 50;
      } else {
        v_402 = v_401;
      };
      if (v_399) {
        left_St_Whiteline = 50;
      } else {
        left_St_Whiteline = v_402;
      };
      number = number_St_Whiteline;
      dir = dir_St_Whiteline;
      direction_St_Whiteline = dir;
      sum = sum_St_Whiteline;
      left = left_St_Whiteline;
      v_407 = (left<0);
      if (v_407) {
        v_l_St_Whiteline = 0;
      } else {
        v_l_St_Whiteline = left;
      };
      right = right_St_Whiteline;
      v_408 = (right<0);
      if (v_408) {
        v_r_St_Whiteline = 0;
      } else {
        v_r_St_Whiteline = right;
      };
      objectCounter = objectCounter_St_Whiteline;
      objectLeftCounter = objectLeftCounter_St_Whiteline;
      parklefttimer = parklefttimer_St_Whiteline;
      parkrighttimer = parkrighttimer_St_Whiteline;
      parkingelapse = parkingelapse_St_Whiteline;
      checkparkhere = checkparkhere_St_Whiteline;
      parkdir = parkdir_St_Whiteline;
      navigation = navigation_St_Whiteline;
      _out->v_l = v_l_St_Whiteline;
      _out->v_r = v_r_St_Whiteline;
      rightCounter = rightCounter_St_Whiteline;
      rightTurn = rightTurn_St_Whiteline;
      stopCounter = stopCounter_St_Whiteline;
      lastcountwhite = lastcountwhite_St_Whiteline;
      _out->direction = direction_St_Whiteline;
      finalavg0 = finalavg0_St_Whiteline;
      finalavg1 = finalavg1_St_Whiteline;
      finalavg2 = finalavg2_St_Whiteline;
      finalavg3 = finalavg3_St_Whiteline;
      finalavg4 = finalavg4_St_Whiteline;
      whiteavgsen0 = whiteavgsen0_St_Whiteline;
      whiteavgsen1 = whiteavgsen1_St_Whiteline;
      whiteavgsen2 = whiteavgsen2_St_Whiteline;
      whiteavgsen3 = whiteavgsen3_St_Whiteline;
      whiteavgsen4 = whiteavgsen4_St_Whiteline;
      ns = ns_St_Whiteline;
      nr = nr_St_Whiteline;
      break;
    case Line_follower__St_LineSwitch:
      lastcountwhite_St_LineSwitch = self->lastcountwhite_1;
      whiteavgsen4_St_LineSwitch = self->whiteavgsen4_1;
      whiteavgsen3_St_LineSwitch = self->whiteavgsen3_1;
      whiteavgsen2_St_LineSwitch = self->whiteavgsen2_1;
      whiteavgsen1_St_LineSwitch = self->whiteavgsen1_1;
      whiteavgsen0_St_LineSwitch = self->whiteavgsen0_1;
      finalavg4_St_LineSwitch = self->finalavg4_1;
      finalavg3_St_LineSwitch = self->finalavg3_1;
      finalavg2_St_LineSwitch = self->finalavg2_1;
      finalavg1_St_LineSwitch = self->finalavg1_1;
      finalavg0_St_LineSwitch = self->finalavg0_1;
      navigation_St_LineSwitch = self->navigation_1;
      checkparkhere_St_LineSwitch = self->checkparkhere_1;
      parkingelapse_St_LineSwitch = self->parkingelapse_1;
      parkdir_St_LineSwitch = self->parkdir_1;
      parkrighttimer_St_LineSwitch = self->parkrighttimer_1;
      parklefttimer_St_LineSwitch = self->parklefttimer_1;
      stopCounter_St_LineSwitch = self->stopCounter_1;
      objectLeftCounter_St_LineSwitch = self->objectLeftCounter_1;
      objectCounter_St_LineSwitch = self->objectCounter_1;
      uTurn_St_LineSwitch = self->uTurn_1;
      v_336 = (self->rightCounter_1+1);
      dir_St_LineSwitch = 0;
      v_314 = sen[4];
      v_312 = sen[3];
      v_310 = sen[2];
      v_308 = sen[1];
      v_307 = sen[0];
      v_309 = (v_307+v_308);
      v_311 = (v_309+v_310);
      v_313 = (v_311+v_312);
      sum_St_LineSwitch = (v_313+v_314);
      v_305 = sen[4];
      v_306 = (v_305<=self->finalavg4_1);
      if (v_306) {
        act4_St_LineSwitch = 1;
      } else {
        act4_St_LineSwitch = 0;
      };
      v_303 = sen[3];
      v_304 = (v_303<=self->finalavg3_1);
      if (v_304) {
        act3_St_LineSwitch = 1;
      } else {
        act3_St_LineSwitch = 0;
      };
      v_301 = sen[2];
      v_302 = (v_301<=self->finalavg2_1);
      if (v_302) {
        act2_St_LineSwitch = 1;
      } else {
        act2_St_LineSwitch = 0;
      };
      v_299 = sen[1];
      v_300 = (v_299<=self->finalavg1_1);
      if (v_300) {
        act1_St_LineSwitch = 1;
      } else {
        act1_St_LineSwitch = 0;
      };
      v_297 = sen[0];
      v_298 = (v_297<=self->finalavg0_1);
      if (v_298) {
        act0_St_LineSwitch = 1;
      } else {
        act0_St_LineSwitch = 0;
      };
      act0 = act0_St_LineSwitch;
      v_318 = (-4*act0);
      act1 = act1_St_LineSwitch;
      v_331 = (act1==1);
      v_319 = (-3*act1);
      v_320 = (v_318+v_319);
      v_315 = (act0+act1);
      act2 = act2_St_LineSwitch;
      v_332 = (act2==1);
      v_333 = (v_331&&v_332);
      v_321 = (0*act2);
      v_322 = (v_320+v_321);
      v_316 = (v_315+act2);
      act3 = act3_St_LineSwitch;
      v_334 = (act3==1);
      v_335 = (v_333&&v_334);
      if (v_335) {
        rightCounter_St_LineSwitch = v_336;
      } else {
        rightCounter_St_LineSwitch = 0;
      };
      v_323 = (3*act3);
      v_324 = (v_322+v_323);
      v_317 = (v_316+act3);
      act4 = act4_St_LineSwitch;
      v_325 = (4*act4);
      error_St_LineSwitch = (v_324+v_325);
      number_St_LineSwitch = (v_317+act4);
      uTurn = uTurn_St_LineSwitch;
      error = error_St_LineSwitch;
      d_St_LineSwitch = (error-self->error_1);
      i_St_LineSwitch = (self->i_1+error);
      p_St_LineSwitch = error;
      p = p_St_LineSwitch;
      v_326 = (2*p);
      i = i_St_LineSwitch;
      v_327 = (i/1000);
      v_328 = (v_326+v_327);
      d = d_St_LineSwitch;
      pid_value_St_LineSwitch = (v_328+d);
      pid_value = pid_value_St_LineSwitch;
      right_St_LineSwitch = (30-pid_value);
      left_St_LineSwitch = (30+pid_value);
      number = number_St_LineSwitch;
      dir = dir_St_LineSwitch;
      direction_St_LineSwitch = dir;
      sum = sum_St_LineSwitch;
      left = left_St_LineSwitch;
      v_329 = (left<0);
      if (v_329) {
        v_l_St_LineSwitch = 0;
      } else {
        v_l_St_LineSwitch = left;
      };
      right = right_St_LineSwitch;
      v_330 = (right<0);
      if (v_330) {
        v_r_St_LineSwitch = 0;
      } else {
        v_r_St_LineSwitch = right;
      };
      objectCounter = objectCounter_St_LineSwitch;
      objectLeftCounter = objectLeftCounter_St_LineSwitch;
      parklefttimer = parklefttimer_St_LineSwitch;
      parkrighttimer = parkrighttimer_St_LineSwitch;
      parkingelapse = parkingelapse_St_LineSwitch;
      checkparkhere = checkparkhere_St_LineSwitch;
      parkdir = parkdir_St_LineSwitch;
      navigation = navigation_St_LineSwitch;
      _out->v_l = v_l_St_LineSwitch;
      _out->v_r = v_r_St_LineSwitch;
      rightCounter = rightCounter_St_LineSwitch;
      v_337 = (rightCounter>50);
      if (v_337) {
        rightTurn_St_LineSwitch = true;
      } else {
        rightTurn_St_LineSwitch = false;
      };
      rightTurn = rightTurn_St_LineSwitch;
      if (rightTurn) {
        nr_St_LineSwitch = true;
        ns_St_LineSwitch = Line_follower__St_BlackRight;
      } else {
        nr_St_LineSwitch = false;
        ns_St_LineSwitch = Line_follower__St_LineSwitch;
      };
      stopCounter = stopCounter_St_LineSwitch;
      lastcountwhite = lastcountwhite_St_LineSwitch;
      _out->direction = direction_St_LineSwitch;
      finalavg0 = finalavg0_St_LineSwitch;
      finalavg1 = finalavg1_St_LineSwitch;
      finalavg2 = finalavg2_St_LineSwitch;
      finalavg3 = finalavg3_St_LineSwitch;
      finalavg4 = finalavg4_St_LineSwitch;
      whiteavgsen0 = whiteavgsen0_St_LineSwitch;
      whiteavgsen1 = whiteavgsen1_St_LineSwitch;
      whiteavgsen2 = whiteavgsen2_St_LineSwitch;
      whiteavgsen3 = whiteavgsen3_St_LineSwitch;
      whiteavgsen4 = whiteavgsen4_St_LineSwitch;
      ns = ns_St_LineSwitch;
      nr = nr_St_LineSwitch;
      break;
    case Line_follower__St_ObstacleRight:
      lastcountwhite_St_ObstacleRight = self->lastcountwhite_1;
      whiteavgsen4_St_ObstacleRight = self->whiteavgsen4_1;
      whiteavgsen3_St_ObstacleRight = self->whiteavgsen3_1;
      whiteavgsen2_St_ObstacleRight = self->whiteavgsen2_1;
      whiteavgsen1_St_ObstacleRight = self->whiteavgsen1_1;
      whiteavgsen0_St_ObstacleRight = self->whiteavgsen0_1;
      finalavg4_St_ObstacleRight = self->finalavg4_1;
      finalavg3_St_ObstacleRight = self->finalavg3_1;
      finalavg2_St_ObstacleRight = self->finalavg2_1;
      finalavg1_St_ObstacleRight = self->finalavg1_1;
      finalavg0_St_ObstacleRight = self->finalavg0_1;
      rightCounter_St_ObstacleRight = self->rightCounter_1;
      navigation_St_ObstacleRight = self->navigation_1;
      checkparkhere_St_ObstacleRight = self->checkparkhere_1;
      parkingelapse_St_ObstacleRight = self->parkingelapse_1;
      parkdir_St_ObstacleRight = self->parkdir_1;
      parkrighttimer_St_ObstacleRight = self->parkrighttimer_1;
      parklefttimer_St_ObstacleRight = self->parklefttimer_1;
      stopCounter_St_ObstacleRight = self->stopCounter_1;
      objectLeftCounter_St_ObstacleRight = self->objectLeftCounter_1;
      objectCounter_St_ObstacleRight = self->objectCounter_1;
      right_St_ObstacleRight = self->right_1;
      left_St_ObstacleRight = self->left_1;
      sum_St_ObstacleRight = self->sum_1;
      dir_St_ObstacleRight = self->dir_1;
      number_St_ObstacleRight = self->number_1;
      pid_value_St_ObstacleRight = self->pid_value_1;
      d_St_ObstacleRight = self->d_1;
      i_St_ObstacleRight = self->i_1;
      p_St_ObstacleRight = self->p_1;
      error_St_ObstacleRight = self->error_1;
      uTurn_St_ObstacleRight = self->uTurn_1;
      rightTurn_St_ObstacleRight = self->rightTurn_1;
      direction_St_ObstacleRight = 2;
      v_r_St_ObstacleRight = 30;
      v_l_St_ObstacleRight = 30;
      v_295 = sen[4];
      v_296 = (v_295<=self->finalavg4_1);
      if (v_296) {
        act4_St_ObstacleRight = 1;
      } else {
        act4_St_ObstacleRight = 0;
      };
      v_293 = sen[3];
      v_294 = (v_293<=self->finalavg3_1);
      if (v_294) {
        act3_St_ObstacleRight = 1;
      } else {
        act3_St_ObstacleRight = 0;
      };
      v_291 = sen[2];
      v_292 = (v_291<=self->finalavg2_1);
      if (v_292) {
        act2_St_ObstacleRight = 1;
      } else {
        act2_St_ObstacleRight = 0;
      };
      v_289 = sen[1];
      v_290 = (v_289<=self->finalavg1_1);
      if (v_290) {
        act1_St_ObstacleRight = 1;
      } else {
        act1_St_ObstacleRight = 0;
      };
      v_287 = sen[0];
      v_288 = (v_287<=self->finalavg0_1);
      if (v_288) {
        act0_St_ObstacleRight = 1;
      } else {
        act0_St_ObstacleRight = 0;
      };
      v_286 = !(irsenLeft);
      if (v_286) {
        nr_St_ObstacleRight = true;
        ns_St_ObstacleRight = Line_follower__St_ObstacleForward;
      } else {
        nr_St_ObstacleRight = false;
        ns_St_ObstacleRight = Line_follower__St_ObstacleRight;
      };
      act0 = act0_St_ObstacleRight;
      act1 = act1_St_ObstacleRight;
      act2 = act2_St_ObstacleRight;
      act3 = act3_St_ObstacleRight;
      act4 = act4_St_ObstacleRight;
      uTurn = uTurn_St_ObstacleRight;
      error = error_St_ObstacleRight;
      p = p_St_ObstacleRight;
      i = i_St_ObstacleRight;
      d = d_St_ObstacleRight;
      pid_value = pid_value_St_ObstacleRight;
      number = number_St_ObstacleRight;
      dir = dir_St_ObstacleRight;
      sum = sum_St_ObstacleRight;
      left = left_St_ObstacleRight;
      right = right_St_ObstacleRight;
      objectCounter = objectCounter_St_ObstacleRight;
      objectLeftCounter = objectLeftCounter_St_ObstacleRight;
      parklefttimer = parklefttimer_St_ObstacleRight;
      parkrighttimer = parkrighttimer_St_ObstacleRight;
      parkingelapse = parkingelapse_St_ObstacleRight;
      checkparkhere = checkparkhere_St_ObstacleRight;
      parkdir = parkdir_St_ObstacleRight;
      navigation = navigation_St_ObstacleRight;
      _out->v_l = v_l_St_ObstacleRight;
      _out->v_r = v_r_St_ObstacleRight;
      rightCounter = rightCounter_St_ObstacleRight;
      rightTurn = rightTurn_St_ObstacleRight;
      stopCounter = stopCounter_St_ObstacleRight;
      lastcountwhite = lastcountwhite_St_ObstacleRight;
      _out->direction = direction_St_ObstacleRight;
      finalavg0 = finalavg0_St_ObstacleRight;
      finalavg1 = finalavg1_St_ObstacleRight;
      finalavg2 = finalavg2_St_ObstacleRight;
      finalavg3 = finalavg3_St_ObstacleRight;
      finalavg4 = finalavg4_St_ObstacleRight;
      whiteavgsen0 = whiteavgsen0_St_ObstacleRight;
      whiteavgsen1 = whiteavgsen1_St_ObstacleRight;
      whiteavgsen2 = whiteavgsen2_St_ObstacleRight;
      whiteavgsen3 = whiteavgsen3_St_ObstacleRight;
      whiteavgsen4 = whiteavgsen4_St_ObstacleRight;
      ns = ns_St_ObstacleRight;
      nr = nr_St_ObstacleRight;
      break;
    case Line_follower__St_ObstacleForward:
      lastcountwhite_St_ObstacleForward = self->lastcountwhite_1;
      whiteavgsen4_St_ObstacleForward = self->whiteavgsen4_1;
      whiteavgsen3_St_ObstacleForward = self->whiteavgsen3_1;
      whiteavgsen2_St_ObstacleForward = self->whiteavgsen2_1;
      whiteavgsen1_St_ObstacleForward = self->whiteavgsen1_1;
      whiteavgsen0_St_ObstacleForward = self->whiteavgsen0_1;
      finalavg4_St_ObstacleForward = self->finalavg4_1;
      finalavg3_St_ObstacleForward = self->finalavg3_1;
      finalavg2_St_ObstacleForward = self->finalavg2_1;
      finalavg1_St_ObstacleForward = self->finalavg1_1;
      finalavg0_St_ObstacleForward = self->finalavg0_1;
      rightCounter_St_ObstacleForward = self->rightCounter_1;
      navigation_St_ObstacleForward = self->navigation_1;
      checkparkhere_St_ObstacleForward = self->checkparkhere_1;
      parkingelapse_St_ObstacleForward = self->parkingelapse_1;
      parkdir_St_ObstacleForward = self->parkdir_1;
      parkrighttimer_St_ObstacleForward = self->parkrighttimer_1;
      parklefttimer_St_ObstacleForward = self->parklefttimer_1;
      stopCounter_St_ObstacleForward = self->stopCounter_1;
      objectLeftCounter_St_ObstacleForward = self->objectLeftCounter_1;
      objectCounter_St_ObstacleForward = self->objectCounter_1;
      right_St_ObstacleForward = self->right_1;
      left_St_ObstacleForward = self->left_1;
      sum_St_ObstacleForward = self->sum_1;
      dir_St_ObstacleForward = self->dir_1;
      pid_value_St_ObstacleForward = self->pid_value_1;
      d_St_ObstacleForward = self->d_1;
      i_St_ObstacleForward = self->i_1;
      p_St_ObstacleForward = self->p_1;
      error_St_ObstacleForward = self->error_1;
      uTurn_St_ObstacleForward = self->uTurn_1;
      rightTurn_St_ObstacleForward = self->rightTurn_1;
      direction_St_ObstacleForward = 0;
      v_r_St_ObstacleForward = 30;
      v_l_St_ObstacleForward = 40;
      v_281 = sen[4];
      v_282 = (v_281<=self->finalavg4_1);
      if (v_282) {
        act4_St_ObstacleForward = 1;
      } else {
        act4_St_ObstacleForward = 0;
      };
      v_279 = sen[3];
      v_280 = (v_279<=self->finalavg3_1);
      if (v_280) {
        act3_St_ObstacleForward = 1;
      } else {
        act3_St_ObstacleForward = 0;
      };
      v_277 = sen[2];
      v_278 = (v_277<=self->finalavg2_1);
      if (v_278) {
        act2_St_ObstacleForward = 1;
      } else {
        act2_St_ObstacleForward = 0;
      };
      v_275 = sen[1];
      v_276 = (v_275<=self->finalavg1_1);
      if (v_276) {
        act1_St_ObstacleForward = 1;
      } else {
        act1_St_ObstacleForward = 0;
      };
      v_273 = sen[0];
      v_274 = (v_273<=self->finalavg0_1);
      if (v_274) {
        act0_St_ObstacleForward = 1;
      } else {
        act0_St_ObstacleForward = 0;
      };
      if (irsenLeft) {
        v_272 = true;
        v_271 = Line_follower__St_ObstacleLeft;
      } else {
        v_272 = false;
        v_271 = Line_follower__St_ObstacleForward;
      };
      act0 = act0_St_ObstacleForward;
      act1 = act1_St_ObstacleForward;
      v_283 = (act0+act1);
      act2 = act2_St_ObstacleForward;
      v_284 = (v_283+act2);
      act3 = act3_St_ObstacleForward;
      v_285 = (v_284+act3);
      act4 = act4_St_ObstacleForward;
      number_St_ObstacleForward = (v_285+act4);
      v_269 = (act4==1);
      uTurn = uTurn_St_ObstacleForward;
      error = error_St_ObstacleForward;
      p = p_St_ObstacleForward;
      i = i_St_ObstacleForward;
      d = d_St_ObstacleForward;
      pid_value = pid_value_St_ObstacleForward;
      number = number_St_ObstacleForward;
      v_268 = (number==1);
      v_270 = (v_268&&v_269);
      if (v_270) {
        nr_St_ObstacleForward = true;
        ns_St_ObstacleForward = Line_follower__St_ObstacleFinalRight;
      } else {
        nr_St_ObstacleForward = v_272;
        ns_St_ObstacleForward = v_271;
      };
      dir = dir_St_ObstacleForward;
      sum = sum_St_ObstacleForward;
      left = left_St_ObstacleForward;
      right = right_St_ObstacleForward;
      objectCounter = objectCounter_St_ObstacleForward;
      objectLeftCounter = objectLeftCounter_St_ObstacleForward;
      parklefttimer = parklefttimer_St_ObstacleForward;
      parkrighttimer = parkrighttimer_St_ObstacleForward;
      parkingelapse = parkingelapse_St_ObstacleForward;
      checkparkhere = checkparkhere_St_ObstacleForward;
      parkdir = parkdir_St_ObstacleForward;
      navigation = navigation_St_ObstacleForward;
      _out->v_l = v_l_St_ObstacleForward;
      _out->v_r = v_r_St_ObstacleForward;
      rightCounter = rightCounter_St_ObstacleForward;
      rightTurn = rightTurn_St_ObstacleForward;
      stopCounter = stopCounter_St_ObstacleForward;
      lastcountwhite = lastcountwhite_St_ObstacleForward;
      _out->direction = direction_St_ObstacleForward;
      finalavg0 = finalavg0_St_ObstacleForward;
      finalavg1 = finalavg1_St_ObstacleForward;
      finalavg2 = finalavg2_St_ObstacleForward;
      finalavg3 = finalavg3_St_ObstacleForward;
      finalavg4 = finalavg4_St_ObstacleForward;
      whiteavgsen0 = whiteavgsen0_St_ObstacleForward;
      whiteavgsen1 = whiteavgsen1_St_ObstacleForward;
      whiteavgsen2 = whiteavgsen2_St_ObstacleForward;
      whiteavgsen3 = whiteavgsen3_St_ObstacleForward;
      whiteavgsen4 = whiteavgsen4_St_ObstacleForward;
      ns = ns_St_ObstacleForward;
      nr = nr_St_ObstacleForward;
      break;
    case Line_follower__St_ObstacleLeft:
      lastcountwhite_St_ObstacleLeft = self->lastcountwhite_1;
      whiteavgsen4_St_ObstacleLeft = self->whiteavgsen4_1;
      whiteavgsen3_St_ObstacleLeft = self->whiteavgsen3_1;
      whiteavgsen2_St_ObstacleLeft = self->whiteavgsen2_1;
      whiteavgsen1_St_ObstacleLeft = self->whiteavgsen1_1;
      whiteavgsen0_St_ObstacleLeft = self->whiteavgsen0_1;
      finalavg4_St_ObstacleLeft = self->finalavg4_1;
      finalavg3_St_ObstacleLeft = self->finalavg3_1;
      finalavg2_St_ObstacleLeft = self->finalavg2_1;
      finalavg1_St_ObstacleLeft = self->finalavg1_1;
      finalavg0_St_ObstacleLeft = self->finalavg0_1;
      rightCounter_St_ObstacleLeft = self->rightCounter_1;
      navigation_St_ObstacleLeft = self->navigation_1;
      checkparkhere_St_ObstacleLeft = self->checkparkhere_1;
      parkingelapse_St_ObstacleLeft = self->parkingelapse_1;
      parkdir_St_ObstacleLeft = self->parkdir_1;
      parkrighttimer_St_ObstacleLeft = self->parkrighttimer_1;
      parklefttimer_St_ObstacleLeft = self->parklefttimer_1;
      stopCounter_St_ObstacleLeft = self->stopCounter_1;
      objectCounter_St_ObstacleLeft = self->objectCounter_1;
      right_St_ObstacleLeft = self->right_1;
      left_St_ObstacleLeft = self->left_1;
      sum_St_ObstacleLeft = self->sum_1;
      dir_St_ObstacleLeft = self->dir_1;
      pid_value_St_ObstacleLeft = self->pid_value_1;
      d_St_ObstacleLeft = self->d_1;
      i_St_ObstacleLeft = self->i_1;
      p_St_ObstacleLeft = self->p_1;
      error_St_ObstacleLeft = self->error_1;
      uTurn_St_ObstacleLeft = self->uTurn_1;
      rightTurn_St_ObstacleLeft = self->rightTurn_1;
      v_264 = !(irsenFront);
      if (v_264) {
        direction_St_ObstacleLeft = 0;
      } else {
        direction_St_ObstacleLeft = 1;
      };
      v_263 = !(irsenFront);
      if (v_263) {
        v_r_St_ObstacleLeft = 30;
      } else {
        v_r_St_ObstacleLeft = 40;
      };
      v_262 = !(irsenFront);
      if (v_262) {
        v_l_St_ObstacleLeft = 30;
      } else {
        v_l_St_ObstacleLeft = 20;
      };
      v_261 = (self->objectLeftCounter_1+1);
      v_260 = !(irsenFront);
      if (v_260) {
        objectLeftCounter_St_ObstacleLeft = v_261;
      } else {
        objectLeftCounter_St_ObstacleLeft = 0;
      };
      v_258 = sen[4];
      v_259 = (v_258<=self->finalavg4_1);
      if (v_259) {
        act4_St_ObstacleLeft = 1;
      } else {
        act4_St_ObstacleLeft = 0;
      };
      v_256 = sen[3];
      v_257 = (v_256<=self->finalavg3_1);
      if (v_257) {
        act3_St_ObstacleLeft = 1;
      } else {
        act3_St_ObstacleLeft = 0;
      };
      v_254 = sen[2];
      v_255 = (v_254<=self->finalavg2_1);
      if (v_255) {
        act2_St_ObstacleLeft = 1;
      } else {
        act2_St_ObstacleLeft = 0;
      };
      v_252 = sen[1];
      v_253 = (v_252<=self->finalavg1_1);
      if (v_253) {
        act1_St_ObstacleLeft = 1;
      } else {
        act1_St_ObstacleLeft = 0;
      };
      v_250 = sen[0];
      v_251 = (v_250<=self->finalavg0_1);
      if (v_251) {
        act0_St_ObstacleLeft = 1;
      } else {
        act0_St_ObstacleLeft = 0;
      };
      v_244 = !(irsenLeft);
      act0 = act0_St_ObstacleLeft;
      act1 = act1_St_ObstacleLeft;
      v_265 = (act0+act1);
      act2 = act2_St_ObstacleLeft;
      v_266 = (v_265+act2);
      act3 = act3_St_ObstacleLeft;
      v_267 = (v_266+act3);
      act4 = act4_St_ObstacleLeft;
      number_St_ObstacleLeft = (v_267+act4);
      uTurn = uTurn_St_ObstacleLeft;
      error = error_St_ObstacleLeft;
      p = p_St_ObstacleLeft;
      i = i_St_ObstacleLeft;
      d = d_St_ObstacleLeft;
      pid_value = pid_value_St_ObstacleLeft;
      number = number_St_ObstacleLeft;
      v_243 = (number>=1);
      dir = dir_St_ObstacleLeft;
      sum = sum_St_ObstacleLeft;
      left = left_St_ObstacleLeft;
      right = right_St_ObstacleLeft;
      objectCounter = objectCounter_St_ObstacleLeft;
      objectLeftCounter = objectLeftCounter_St_ObstacleLeft;
      v_245 = (objectLeftCounter>20);
      if (v_245) {
        v_247 = true;
      } else {
        v_247 = false;
      };
      if (v_244) {
        v_249 = true;
      } else {
        v_249 = v_247;
      };
      if (v_243) {
        nr_St_ObstacleLeft = true;
      } else {
        nr_St_ObstacleLeft = v_249;
      };
      if (v_245) {
        v_246 = Line_follower__St_ObstacleRight;
      } else {
        v_246 = Line_follower__St_ObstacleLeft;
      };
      if (v_244) {
        v_248 = Line_follower__St_ObstacleForward;
      } else {
        v_248 = v_246;
      };
      if (v_243) {
        ns_St_ObstacleLeft = Line_follower__St_ObstacleFinalRight;
      } else {
        ns_St_ObstacleLeft = v_248;
      };
      parklefttimer = parklefttimer_St_ObstacleLeft;
      parkrighttimer = parkrighttimer_St_ObstacleLeft;
      parkingelapse = parkingelapse_St_ObstacleLeft;
      checkparkhere = checkparkhere_St_ObstacleLeft;
      parkdir = parkdir_St_ObstacleLeft;
      navigation = navigation_St_ObstacleLeft;
      _out->v_l = v_l_St_ObstacleLeft;
      _out->v_r = v_r_St_ObstacleLeft;
      rightCounter = rightCounter_St_ObstacleLeft;
      rightTurn = rightTurn_St_ObstacleLeft;
      stopCounter = stopCounter_St_ObstacleLeft;
      lastcountwhite = lastcountwhite_St_ObstacleLeft;
      _out->direction = direction_St_ObstacleLeft;
      finalavg0 = finalavg0_St_ObstacleLeft;
      finalavg1 = finalavg1_St_ObstacleLeft;
      finalavg2 = finalavg2_St_ObstacleLeft;
      finalavg3 = finalavg3_St_ObstacleLeft;
      finalavg4 = finalavg4_St_ObstacleLeft;
      whiteavgsen0 = whiteavgsen0_St_ObstacleLeft;
      whiteavgsen1 = whiteavgsen1_St_ObstacleLeft;
      whiteavgsen2 = whiteavgsen2_St_ObstacleLeft;
      whiteavgsen3 = whiteavgsen3_St_ObstacleLeft;
      whiteavgsen4 = whiteavgsen4_St_ObstacleLeft;
      ns = ns_St_ObstacleLeft;
      nr = nr_St_ObstacleLeft;
      break;
    case Line_follower__St_ObstacleFinalRight:
      lastcountwhite_St_ObstacleFinalRight = self->lastcountwhite_1;
      whiteavgsen4_St_ObstacleFinalRight = self->whiteavgsen4_1;
      whiteavgsen3_St_ObstacleFinalRight = self->whiteavgsen3_1;
      whiteavgsen2_St_ObstacleFinalRight = self->whiteavgsen2_1;
      whiteavgsen1_St_ObstacleFinalRight = self->whiteavgsen1_1;
      whiteavgsen0_St_ObstacleFinalRight = self->whiteavgsen0_1;
      finalavg4_St_ObstacleFinalRight = self->finalavg4_1;
      finalavg3_St_ObstacleFinalRight = self->finalavg3_1;
      finalavg2_St_ObstacleFinalRight = self->finalavg2_1;
      finalavg1_St_ObstacleFinalRight = self->finalavg1_1;
      finalavg0_St_ObstacleFinalRight = self->finalavg0_1;
      rightCounter_St_ObstacleFinalRight = self->rightCounter_1;
      navigation_St_ObstacleFinalRight = self->navigation_1;
      checkparkhere_St_ObstacleFinalRight = self->checkparkhere_1;
      parkingelapse_St_ObstacleFinalRight = self->parkingelapse_1;
      parkdir_St_ObstacleFinalRight = self->parkdir_1;
      parkrighttimer_St_ObstacleFinalRight = self->parkrighttimer_1;
      parklefttimer_St_ObstacleFinalRight = self->parklefttimer_1;
      stopCounter_St_ObstacleFinalRight = self->stopCounter_1;
      objectLeftCounter_St_ObstacleFinalRight = self->objectLeftCounter_1;
      objectCounter_St_ObstacleFinalRight = self->objectCounter_1;
      right_St_ObstacleFinalRight = self->right_1;
      left_St_ObstacleFinalRight = self->left_1;
      sum_St_ObstacleFinalRight = self->sum_1;
      dir_St_ObstacleFinalRight = self->dir_1;
      pid_value_St_ObstacleFinalRight = self->pid_value_1;
      d_St_ObstacleFinalRight = self->d_1;
      i_St_ObstacleFinalRight = self->i_1;
      p_St_ObstacleFinalRight = self->p_1;
      error_St_ObstacleFinalRight = self->error_1;
      uTurn_St_ObstacleFinalRight = self->uTurn_1;
      rightTurn_St_ObstacleFinalRight = self->rightTurn_1;
      direction_St_ObstacleFinalRight = 0;
      v_r_St_ObstacleFinalRight = 0;
      v_l_St_ObstacleFinalRight = 40;
      v_238 = sen[4];
      v_239 = (v_238<=self->finalavg4_1);
      if (v_239) {
        act4_St_ObstacleFinalRight = 1;
      } else {
        act4_St_ObstacleFinalRight = 0;
      };
      v_236 = sen[3];
      v_237 = (v_236<=self->finalavg3_1);
      if (v_237) {
        act3_St_ObstacleFinalRight = 1;
      } else {
        act3_St_ObstacleFinalRight = 0;
      };
      v_234 = sen[2];
      v_235 = (v_234<=self->finalavg2_1);
      if (v_235) {
        act2_St_ObstacleFinalRight = 1;
      } else {
        act2_St_ObstacleFinalRight = 0;
      };
      v_232 = sen[1];
      v_233 = (v_232<=self->finalavg1_1);
      if (v_233) {
        act1_St_ObstacleFinalRight = 1;
      } else {
        act1_St_ObstacleFinalRight = 0;
      };
      v_230 = sen[0];
      v_231 = (v_230<=self->finalavg0_1);
      if (v_231) {
        act0_St_ObstacleFinalRight = 1;
      } else {
        act0_St_ObstacleFinalRight = 0;
      };
      act0 = act0_St_ObstacleFinalRight;
      v_227 = (act0==1);
      act1 = act1_St_ObstacleFinalRight;
      v_240 = (act0+act1);
      act2 = act2_St_ObstacleFinalRight;
      v_241 = (v_240+act2);
      act3 = act3_St_ObstacleFinalRight;
      v_242 = (v_241+act3);
      act4 = act4_St_ObstacleFinalRight;
      number_St_ObstacleFinalRight = (v_242+act4);
      v_228 = (act4==1);
      v_229 = (v_227||v_228);
      if (v_229) {
        nr_St_ObstacleFinalRight = true;
        ns_St_ObstacleFinalRight = Line_follower__St_Blackline;
      } else {
        nr_St_ObstacleFinalRight = false;
        ns_St_ObstacleFinalRight = Line_follower__St_ObstacleFinalRight;
      };
      uTurn = uTurn_St_ObstacleFinalRight;
      error = error_St_ObstacleFinalRight;
      p = p_St_ObstacleFinalRight;
      i = i_St_ObstacleFinalRight;
      d = d_St_ObstacleFinalRight;
      pid_value = pid_value_St_ObstacleFinalRight;
      number = number_St_ObstacleFinalRight;
      dir = dir_St_ObstacleFinalRight;
      sum = sum_St_ObstacleFinalRight;
      left = left_St_ObstacleFinalRight;
      right = right_St_ObstacleFinalRight;
      objectCounter = objectCounter_St_ObstacleFinalRight;
      objectLeftCounter = objectLeftCounter_St_ObstacleFinalRight;
      parklefttimer = parklefttimer_St_ObstacleFinalRight;
      parkrighttimer = parkrighttimer_St_ObstacleFinalRight;
      parkingelapse = parkingelapse_St_ObstacleFinalRight;
      checkparkhere = checkparkhere_St_ObstacleFinalRight;
      parkdir = parkdir_St_ObstacleFinalRight;
      navigation = navigation_St_ObstacleFinalRight;
      _out->v_l = v_l_St_ObstacleFinalRight;
      _out->v_r = v_r_St_ObstacleFinalRight;
      rightCounter = rightCounter_St_ObstacleFinalRight;
      rightTurn = rightTurn_St_ObstacleFinalRight;
      stopCounter = stopCounter_St_ObstacleFinalRight;
      lastcountwhite = lastcountwhite_St_ObstacleFinalRight;
      _out->direction = direction_St_ObstacleFinalRight;
      finalavg0 = finalavg0_St_ObstacleFinalRight;
      finalavg1 = finalavg1_St_ObstacleFinalRight;
      finalavg2 = finalavg2_St_ObstacleFinalRight;
      finalavg3 = finalavg3_St_ObstacleFinalRight;
      finalavg4 = finalavg4_St_ObstacleFinalRight;
      whiteavgsen0 = whiteavgsen0_St_ObstacleFinalRight;
      whiteavgsen1 = whiteavgsen1_St_ObstacleFinalRight;
      whiteavgsen2 = whiteavgsen2_St_ObstacleFinalRight;
      whiteavgsen3 = whiteavgsen3_St_ObstacleFinalRight;
      whiteavgsen4 = whiteavgsen4_St_ObstacleFinalRight;
      ns = ns_St_ObstacleFinalRight;
      nr = nr_St_ObstacleFinalRight;
      break;
    case Line_follower__St_Blackline:
      lastcountwhite_St_Blackline = self->lastcountwhite_1;
      whiteavgsen4_St_Blackline = self->whiteavgsen4_1;
      whiteavgsen3_St_Blackline = self->whiteavgsen3_1;
      whiteavgsen2_St_Blackline = self->whiteavgsen2_1;
      whiteavgsen1_St_Blackline = self->whiteavgsen1_1;
      whiteavgsen0_St_Blackline = self->whiteavgsen0_1;
      finalavg4_St_Blackline = self->finalavg4_1;
      finalavg3_St_Blackline = self->finalavg3_1;
      finalavg2_St_Blackline = self->finalavg2_1;
      finalavg1_St_Blackline = self->finalavg1_1;
      finalavg0_St_Blackline = self->finalavg0_1;
      navigation_St_Blackline = self->navigation_1;
      checkparkhere_St_Blackline = self->checkparkhere_1;
      parkingelapse_St_Blackline = self->parkingelapse_1;
      parkdir_St_Blackline = self->parkdir_1;
      parkrighttimer_St_Blackline = self->parkrighttimer_1;
      parklefttimer_St_Blackline = self->parklefttimer_1;
      objectLeftCounter_St_Blackline = self->objectLeftCounter_1;
      v_226 = (self->objectCounter_1+1);
      v_225 = !(irsenFront);
      if (v_225) {
        objectCounter_St_Blackline = v_226;
      } else {
        objectCounter_St_Blackline = 0;
      };
      v_222 = (self->v_221+1);
      if (self->v_210) {
        v_211 = true;
      } else {
        v_211 = r;
      };
      v_209 = (self->stopCounter_1+1);
      v_207 = (self->rightCounter_1+1);
      dir_St_Blackline = 0;
      v_185 = sen[4];
      v_183 = sen[3];
      v_181 = sen[2];
      v_179 = sen[1];
      v_178 = sen[0];
      v_180 = (v_178+v_179);
      v_182 = (v_180+v_181);
      v_184 = (v_182+v_183);
      sum_St_Blackline = (v_184+v_185);
      v_176 = sen[4];
      v_177 = (v_176<=self->finalavg4_1);
      if (v_177) {
        act4_St_Blackline = 1;
      } else {
        act4_St_Blackline = 0;
      };
      v_174 = sen[3];
      v_175 = (v_174<=self->finalavg3_1);
      if (v_175) {
        act3_St_Blackline = 1;
      } else {
        act3_St_Blackline = 0;
      };
      v_172 = sen[2];
      v_173 = (v_172<=self->finalavg2_1);
      if (v_173) {
        act2_St_Blackline = 1;
      } else {
        act2_St_Blackline = 0;
      };
      v_170 = sen[1];
      v_171 = (v_170<=self->finalavg1_1);
      if (v_171) {
        act1_St_Blackline = 1;
      } else {
        act1_St_Blackline = 0;
      };
      v_168 = sen[0];
      v_169 = (v_168<=self->finalavg0_1);
      if (v_169) {
        act0_St_Blackline = 1;
      } else {
        act0_St_Blackline = 0;
      };
      act0 = act0_St_Blackline;
      v_212 = (act0==0);
      v_189 = (-4*act0);
      act1 = act1_St_Blackline;
      v_213 = (act1==0);
      v_214 = (v_212&&v_213);
      v_202 = (act1==1);
      v_190 = (-3*act1);
      v_191 = (v_189+v_190);
      v_186 = (act0+act1);
      act2 = act2_St_Blackline;
      v_215 = (act2==0);
      v_216 = (v_214&&v_215);
      v_203 = (act2==1);
      v_204 = (v_202&&v_203);
      v_192 = (0*act2);
      v_193 = (v_191+v_192);
      v_187 = (v_186+act2);
      act3 = act3_St_Blackline;
      v_217 = (act3==0);
      v_218 = (v_216&&v_217);
      v_205 = (act3==1);
      v_206 = (v_204&&v_205);
      if (v_206) {
        rightCounter_St_Blackline = v_207;
      } else {
        rightCounter_St_Blackline = 0;
      };
      v_194 = (3*act3);
      v_195 = (v_193+v_194);
      v_188 = (v_187+act3);
      act4 = act4_St_Blackline;
      v_219 = (act4==0);
      v_220 = (v_218&&v_219);
      if (v_220) {
        v_223 = v_222;
      } else {
        v_223 = 0;
      };
      if (v_211) {
        count = 0;
      } else {
        count = v_223;
      };
      v_224 = (count>100);
      if (v_224) {
        uTurn_St_Blackline = true;
      } else {
        uTurn_St_Blackline = false;
      };
      v_196 = (4*act4);
      error_St_Blackline = (v_195+v_196);
      number_St_Blackline = (v_188+act4);
      uTurn = uTurn_St_Blackline;
      if (uTurn) {
        v_163 = true;
        v_162 = Line_follower__St_BlackUturn;
      } else {
        v_163 = false;
        v_162 = Line_follower__St_Blackline;
      };
      error = error_St_Blackline;
      d_St_Blackline = (error-self->error_1);
      i_St_Blackline = (self->i_1+error);
      p_St_Blackline = error;
      p = p_St_Blackline;
      v_197 = (3*p);
      i = i_St_Blackline;
      v_198 = (i/1000);
      v_199 = (v_197+v_198);
      d = d_St_Blackline;
      pid_value_St_Blackline = (v_199+d);
      pid_value = pid_value_St_Blackline;
      right_St_Blackline = (40-pid_value);
      left_St_Blackline = (40+pid_value);
      number = number_St_Blackline;
      dir = dir_St_Blackline;
      direction_St_Blackline = dir;
      sum = sum_St_Blackline;
      left = left_St_Blackline;
      v_200 = (left<0);
      if (v_200) {
        v_l_St_Blackline = 0;
      } else {
        v_l_St_Blackline = left;
      };
      right = right_St_Blackline;
      v_201 = (right<0);
      if (v_201) {
        v_r_St_Blackline = 0;
      } else {
        v_r_St_Blackline = right;
      };
      objectCounter = objectCounter_St_Blackline;
      v_161 = (objectCounter>100);
      objectLeftCounter = objectLeftCounter_St_Blackline;
      parklefttimer = parklefttimer_St_Blackline;
      parkrighttimer = parkrighttimer_St_Blackline;
      parkingelapse = parkingelapse_St_Blackline;
      checkparkhere = checkparkhere_St_Blackline;
      parkdir = parkdir_St_Blackline;
      navigation = navigation_St_Blackline;
      _out->v_l = v_l_St_Blackline;
      _out->v_r = v_r_St_Blackline;
      rightCounter = rightCounter_St_Blackline;
      v_208 = (rightCounter>10);
      if (v_208) {
        rightTurn_St_Blackline = true;
      } else {
        rightTurn_St_Blackline = false;
      };
      rightTurn = rightTurn_St_Blackline;
      if (rightTurn) {
        stopCounter_St_Blackline = v_209;
        v_165 = true;
      } else {
        stopCounter_St_Blackline = self->stopCounter_1;
        v_165 = v_163;
      };
      if (v_161) {
        v_167 = true;
      } else {
        v_167 = v_165;
      };
      if (rightTurn) {
        v_164 = Line_follower__St_BlackRight;
      } else {
        v_164 = v_162;
      };
      if (v_161) {
        v_166 = Line_follower__St_ObstacleRight;
      } else {
        v_166 = v_164;
      };
      stopCounter = stopCounter_St_Blackline;
      v_160 = (stopCounter==9);
      if (v_160) {
        nr_St_Blackline = true;
        ns_St_Blackline = Line_follower__St_ParkingState;
      } else {
        nr_St_Blackline = v_167;
        ns_St_Blackline = v_166;
      };
      lastcountwhite = lastcountwhite_St_Blackline;
      _out->direction = direction_St_Blackline;
      finalavg0 = finalavg0_St_Blackline;
      finalavg1 = finalavg1_St_Blackline;
      finalavg2 = finalavg2_St_Blackline;
      finalavg3 = finalavg3_St_Blackline;
      finalavg4 = finalavg4_St_Blackline;
      whiteavgsen0 = whiteavgsen0_St_Blackline;
      whiteavgsen1 = whiteavgsen1_St_Blackline;
      whiteavgsen2 = whiteavgsen2_St_Blackline;
      whiteavgsen3 = whiteavgsen3_St_Blackline;
      whiteavgsen4 = whiteavgsen4_St_Blackline;
      ns = ns_St_Blackline;
      nr = nr_St_Blackline;
      self->v_221 = count;
      self->v_210 = false;
      break;
    case Line_follower__St_BlackRight:
      lastcountwhite_St_BlackRight = self->lastcountwhite_1;
      whiteavgsen4_St_BlackRight = self->whiteavgsen4_1;
      whiteavgsen3_St_BlackRight = self->whiteavgsen3_1;
      whiteavgsen2_St_BlackRight = self->whiteavgsen2_1;
      whiteavgsen1_St_BlackRight = self->whiteavgsen1_1;
      whiteavgsen0_St_BlackRight = self->whiteavgsen0_1;
      finalavg4_St_BlackRight = self->finalavg4_1;
      finalavg3_St_BlackRight = self->finalavg3_1;
      finalavg2_St_BlackRight = self->finalavg2_1;
      finalavg1_St_BlackRight = self->finalavg1_1;
      finalavg0_St_BlackRight = self->finalavg0_1;
      rightCounter_St_BlackRight = self->rightCounter_1;
      navigation_St_BlackRight = self->navigation_1;
      checkparkhere_St_BlackRight = self->checkparkhere_1;
      parkingelapse_St_BlackRight = self->parkingelapse_1;
      parkdir_St_BlackRight = self->parkdir_1;
      parkrighttimer_St_BlackRight = self->parkrighttimer_1;
      parklefttimer_St_BlackRight = self->parklefttimer_1;
      stopCounter_St_BlackRight = self->stopCounter_1;
      objectLeftCounter_St_BlackRight = self->objectLeftCounter_1;
      objectCounter_St_BlackRight = self->objectCounter_1;
      right_St_BlackRight = self->right_1;
      left_St_BlackRight = self->left_1;
      sum_St_BlackRight = self->sum_1;
      dir_St_BlackRight = self->dir_1;
      pid_value_St_BlackRight = self->pid_value_1;
      d_St_BlackRight = self->d_1;
      i_St_BlackRight = self->i_1;
      p_St_BlackRight = self->p_1;
      error_St_BlackRight = self->error_1;
      rightTurn_St_BlackRight = self->rightTurn_1;
      v_157 = (self->v_156+1);
      if (self->v_145) {
        v_146 = true;
      } else {
        v_146 = r;
      };
      direction_St_BlackRight = 0;
      v_r_St_BlackRight = 0;
      v_l_St_BlackRight = 50;
      v_140 = sen[4];
      v_141 = (v_140<=self->finalavg4_1);
      if (v_141) {
        act4_St_BlackRight = 1;
      } else {
        act4_St_BlackRight = 0;
      };
      v_138 = sen[3];
      v_139 = (v_138<=self->finalavg3_1);
      if (v_139) {
        act3_St_BlackRight = 1;
      } else {
        act3_St_BlackRight = 0;
      };
      v_136 = sen[2];
      v_137 = (v_136<=self->finalavg2_1);
      if (v_137) {
        act2_St_BlackRight = 1;
      } else {
        act2_St_BlackRight = 0;
      };
      v_134 = sen[1];
      v_135 = (v_134<=self->finalavg1_1);
      if (v_135) {
        act1_St_BlackRight = 1;
      } else {
        act1_St_BlackRight = 0;
      };
      v_132 = sen[0];
      v_133 = (v_132<=self->finalavg0_1);
      if (v_133) {
        act0_St_BlackRight = 1;
      } else {
        act0_St_BlackRight = 0;
      };
      act0 = act0_St_BlackRight;
      v_147 = (act0==0);
      act1 = act1_St_BlackRight;
      v_148 = (act1==0);
      v_149 = (v_147&&v_148);
      v_142 = (act0+act1);
      act2 = act2_St_BlackRight;
      v_150 = (act2==0);
      v_151 = (v_149&&v_150);
      v_143 = (v_142+act2);
      v_128 = (act2==1);
      act3 = act3_St_BlackRight;
      v_152 = (act3==0);
      v_153 = (v_151&&v_152);
      v_144 = (v_143+act3);
      act4 = act4_St_BlackRight;
      v_154 = (act4==0);
      v_155 = (v_153&&v_154);
      if (v_155) {
        v_158 = v_157;
      } else {
        v_158 = 0;
      };
      if (v_146) {
        count_1 = 0;
      } else {
        count_1 = v_158;
      };
      v_159 = (count_1>200);
      if (v_159) {
        uTurn_St_BlackRight = true;
      } else {
        uTurn_St_BlackRight = false;
      };
      number_St_BlackRight = (v_144+act4);
      uTurn = uTurn_St_BlackRight;
      if (uTurn) {
        v_131 = true;
        v_130 = Line_follower__St_BlackUturn;
      } else {
        v_131 = false;
        v_130 = Line_follower__St_BlackRight;
      };
      error = error_St_BlackRight;
      p = p_St_BlackRight;
      i = i_St_BlackRight;
      d = d_St_BlackRight;
      pid_value = pid_value_St_BlackRight;
      number = number_St_BlackRight;
      v_127 = (number==1);
      v_129 = (v_127&&v_128);
      if (v_129) {
        nr_St_BlackRight = true;
        ns_St_BlackRight = Line_follower__St_Blackline;
      } else {
        nr_St_BlackRight = v_131;
        ns_St_BlackRight = v_130;
      };
      dir = dir_St_BlackRight;
      sum = sum_St_BlackRight;
      left = left_St_BlackRight;
      right = right_St_BlackRight;
      objectCounter = objectCounter_St_BlackRight;
      objectLeftCounter = objectLeftCounter_St_BlackRight;
      parklefttimer = parklefttimer_St_BlackRight;
      parkrighttimer = parkrighttimer_St_BlackRight;
      parkingelapse = parkingelapse_St_BlackRight;
      checkparkhere = checkparkhere_St_BlackRight;
      parkdir = parkdir_St_BlackRight;
      navigation = navigation_St_BlackRight;
      _out->v_l = v_l_St_BlackRight;
      _out->v_r = v_r_St_BlackRight;
      rightCounter = rightCounter_St_BlackRight;
      rightTurn = rightTurn_St_BlackRight;
      stopCounter = stopCounter_St_BlackRight;
      lastcountwhite = lastcountwhite_St_BlackRight;
      _out->direction = direction_St_BlackRight;
      finalavg0 = finalavg0_St_BlackRight;
      finalavg1 = finalavg1_St_BlackRight;
      finalavg2 = finalavg2_St_BlackRight;
      finalavg3 = finalavg3_St_BlackRight;
      finalavg4 = finalavg4_St_BlackRight;
      whiteavgsen0 = whiteavgsen0_St_BlackRight;
      whiteavgsen1 = whiteavgsen1_St_BlackRight;
      whiteavgsen2 = whiteavgsen2_St_BlackRight;
      whiteavgsen3 = whiteavgsen3_St_BlackRight;
      whiteavgsen4 = whiteavgsen4_St_BlackRight;
      ns = ns_St_BlackRight;
      nr = nr_St_BlackRight;
      self->v_156 = count_1;
      self->v_145 = false;
      break;
    case Line_follower__St_BlackUturn:
      lastcountwhite_St_BlackUturn = self->lastcountwhite_1;
      whiteavgsen4_St_BlackUturn = self->whiteavgsen4_1;
      whiteavgsen3_St_BlackUturn = self->whiteavgsen3_1;
      whiteavgsen2_St_BlackUturn = self->whiteavgsen2_1;
      whiteavgsen1_St_BlackUturn = self->whiteavgsen1_1;
      whiteavgsen0_St_BlackUturn = self->whiteavgsen0_1;
      finalavg4_St_BlackUturn = self->finalavg4_1;
      finalavg3_St_BlackUturn = self->finalavg3_1;
      finalavg2_St_BlackUturn = self->finalavg2_1;
      finalavg1_St_BlackUturn = self->finalavg1_1;
      finalavg0_St_BlackUturn = self->finalavg0_1;
      rightCounter_St_BlackUturn = self->rightCounter_1;
      navigation_St_BlackUturn = self->navigation_1;
      checkparkhere_St_BlackUturn = self->checkparkhere_1;
      parkingelapse_St_BlackUturn = self->parkingelapse_1;
      parkdir_St_BlackUturn = self->parkdir_1;
      parkrighttimer_St_BlackUturn = self->parkrighttimer_1;
      parklefttimer_St_BlackUturn = self->parklefttimer_1;
      stopCounter_St_BlackUturn = self->stopCounter_1;
      objectLeftCounter_St_BlackUturn = self->objectLeftCounter_1;
      objectCounter_St_BlackUturn = self->objectCounter_1;
      right_St_BlackUturn = self->right_1;
      left_St_BlackUturn = self->left_1;
      sum_St_BlackUturn = self->sum_1;
      dir_St_BlackUturn = self->dir_1;
      pid_value_St_BlackUturn = self->pid_value_1;
      d_St_BlackUturn = self->d_1;
      i_St_BlackUturn = self->i_1;
      p_St_BlackUturn = self->p_1;
      error_St_BlackUturn = self->error_1;
      uTurn_St_BlackUturn = self->uTurn_1;
      rightTurn_St_BlackUturn = self->rightTurn_1;
      direction_St_BlackUturn = 1;
      v_r_St_BlackUturn = 40;
      v_l_St_BlackUturn = 40;
      v_122 = sen[4];
      v_123 = (v_122<=self->finalavg4_1);
      if (v_123) {
        act4_St_BlackUturn = 1;
      } else {
        act4_St_BlackUturn = 0;
      };
      v_120 = sen[3];
      v_121 = (v_120<=self->finalavg3_1);
      if (v_121) {
        act3_St_BlackUturn = 1;
      } else {
        act3_St_BlackUturn = 0;
      };
      v_118 = sen[2];
      v_119 = (v_118<=self->finalavg2_1);
      if (v_119) {
        act2_St_BlackUturn = 1;
      } else {
        act2_St_BlackUturn = 0;
      };
      v_116 = sen[1];
      v_117 = (v_116<=self->finalavg1_1);
      if (v_117) {
        act1_St_BlackUturn = 1;
      } else {
        act1_St_BlackUturn = 0;
      };
      v_114 = sen[0];
      v_115 = (v_114<=self->finalavg0_1);
      if (v_115) {
        act0_St_BlackUturn = 1;
      } else {
        act0_St_BlackUturn = 0;
      };
      act0 = act0_St_BlackUturn;
      act1 = act1_St_BlackUturn;
      v_124 = (act0+act1);
      act2 = act2_St_BlackUturn;
      v_125 = (v_124+act2);
      v_113 = (act2==1);
      if (v_113) {
        nr_St_BlackUturn = true;
        ns_St_BlackUturn = Line_follower__St_Blackline;
      } else {
        nr_St_BlackUturn = false;
        ns_St_BlackUturn = Line_follower__St_BlackUturn;
      };
      act3 = act3_St_BlackUturn;
      v_126 = (v_125+act3);
      act4 = act4_St_BlackUturn;
      number_St_BlackUturn = (v_126+act4);
      uTurn = uTurn_St_BlackUturn;
      error = error_St_BlackUturn;
      p = p_St_BlackUturn;
      i = i_St_BlackUturn;
      d = d_St_BlackUturn;
      pid_value = pid_value_St_BlackUturn;
      number = number_St_BlackUturn;
      dir = dir_St_BlackUturn;
      sum = sum_St_BlackUturn;
      left = left_St_BlackUturn;
      right = right_St_BlackUturn;
      objectCounter = objectCounter_St_BlackUturn;
      objectLeftCounter = objectLeftCounter_St_BlackUturn;
      parklefttimer = parklefttimer_St_BlackUturn;
      parkrighttimer = parkrighttimer_St_BlackUturn;
      parkingelapse = parkingelapse_St_BlackUturn;
      checkparkhere = checkparkhere_St_BlackUturn;
      parkdir = parkdir_St_BlackUturn;
      navigation = navigation_St_BlackUturn;
      _out->v_l = v_l_St_BlackUturn;
      _out->v_r = v_r_St_BlackUturn;
      rightCounter = rightCounter_St_BlackUturn;
      rightTurn = rightTurn_St_BlackUturn;
      stopCounter = stopCounter_St_BlackUturn;
      lastcountwhite = lastcountwhite_St_BlackUturn;
      _out->direction = direction_St_BlackUturn;
      finalavg0 = finalavg0_St_BlackUturn;
      finalavg1 = finalavg1_St_BlackUturn;
      finalavg2 = finalavg2_St_BlackUturn;
      finalavg3 = finalavg3_St_BlackUturn;
      finalavg4 = finalavg4_St_BlackUturn;
      whiteavgsen0 = whiteavgsen0_St_BlackUturn;
      whiteavgsen1 = whiteavgsen1_St_BlackUturn;
      whiteavgsen2 = whiteavgsen2_St_BlackUturn;
      whiteavgsen3 = whiteavgsen3_St_BlackUturn;
      whiteavgsen4 = whiteavgsen4_St_BlackUturn;
      ns = ns_St_BlackUturn;
      nr = nr_St_BlackUturn;
      break;
    case Line_follower__St_ParkingState:
      lastcountwhite_St_ParkingState = self->lastcountwhite_1;
      whiteavgsen4_St_ParkingState = self->whiteavgsen4_1;
      whiteavgsen3_St_ParkingState = self->whiteavgsen3_1;
      whiteavgsen2_St_ParkingState = self->whiteavgsen2_1;
      whiteavgsen1_St_ParkingState = self->whiteavgsen1_1;
      whiteavgsen0_St_ParkingState = self->whiteavgsen0_1;
      finalavg4_St_ParkingState = self->finalavg4_1;
      finalavg3_St_ParkingState = self->finalavg3_1;
      finalavg2_St_ParkingState = self->finalavg2_1;
      finalavg1_St_ParkingState = self->finalavg1_1;
      finalavg0_St_ParkingState = self->finalavg0_1;
      rightCounter_St_ParkingState = self->rightCounter_1;
      parkrighttimer_St_ParkingState = self->parkrighttimer_1;
      parklefttimer_St_ParkingState = self->parklefttimer_1;
      stopCounter_St_ParkingState = self->stopCounter_1;
      objectLeftCounter_St_ParkingState = self->objectLeftCounter_1;
      objectCounter_St_ParkingState = self->objectCounter_1;
      uTurn_St_ParkingState = self->uTurn_1;
      rightTurn_St_ParkingState = self->rightTurn_1;
      v_101 = (irsenRight==true);
      v_100 = (irsenLeft==true);
      v_102 = (v_100&&v_101);
      if (v_102) {
        v_103 = 1;
      } else {
        v_103 = 0;
      };
      v_98 = (irsenRight==false);
      v_97 = (irsenLeft==true);
      v_99 = (v_97&&v_98);
      if (v_99) {
        v_104 = 1;
      } else {
        v_104 = v_103;
      };
      v_95 = (irsenRight==true);
      v_94 = (irsenLeft==false);
      v_96 = (v_94&&v_95);
      if (v_96) {
        v_105 = 2;
      } else {
        v_105 = v_104;
      };
      v_92 = (irsenRight==false);
      v_91 = (irsenLeft==false);
      v_93 = (v_91&&v_92);
      if (v_93) {
        v_106 = 0;
      } else {
        v_106 = v_105;
      };
      v_69 = (self->v_68+1);
      if (self->v_66) {
        v_67 = true;
      } else {
        v_67 = r;
      };
      if (v_67) {
        parkingelapse_St_ParkingState = 1;
      } else {
        parkingelapse_St_ParkingState = v_69;
      };
      dir_St_ParkingState = 0;
      v_51 = sen[4];
      v_49 = sen[3];
      v_47 = sen[2];
      v_45 = sen[1];
      v_44 = sen[0];
      v_46 = (v_44+v_45);
      v_48 = (v_46+v_47);
      v_50 = (v_48+v_49);
      sum_St_ParkingState = (v_50+v_51);
      v_42 = sen[4];
      v_43 = (v_42<=self->finalavg4_1);
      if (v_43) {
        act4_St_ParkingState = 1;
      } else {
        act4_St_ParkingState = 0;
      };
      v_40 = sen[3];
      v_41 = (v_40<=self->finalavg3_1);
      if (v_41) {
        act3_St_ParkingState = 1;
      } else {
        act3_St_ParkingState = 0;
      };
      v_38 = sen[2];
      v_39 = (v_38<=self->finalavg2_1);
      if (v_39) {
        act2_St_ParkingState = 1;
      } else {
        act2_St_ParkingState = 0;
      };
      v_36 = sen[1];
      v_34 = sen[0];
      v_37 = (v_36<=self->finalavg1_1);
      if (v_37) {
        act1_St_ParkingState = 1;
      } else {
        act1_St_ParkingState = 0;
      };
      v_35 = (v_34<=self->finalavg0_1);
      if (v_35) {
        act0_St_ParkingState = 1;
      } else {
        act0_St_ParkingState = 0;
      };
      act0 = act0_St_ParkingState;
      v_55 = (-4*act0);
      act1 = act1_St_ParkingState;
      v_56 = (-3*act1);
      v_57 = (v_55+v_56);
      v_52 = (act0+act1);
      act2 = act2_St_ParkingState;
      v_58 = (0*act2);
      v_59 = (v_57+v_58);
      v_53 = (v_52+act2);
      act3 = act3_St_ParkingState;
      v_60 = (3*act3);
      v_61 = (v_59+v_60);
      v_54 = (v_53+act3);
      act4 = act4_St_ParkingState;
      v_62 = (4*act4);
      error_St_ParkingState = (v_61+v_62);
      number_St_ParkingState = (v_54+act4);
      uTurn = uTurn_St_ParkingState;
      error = error_St_ParkingState;
      d_St_ParkingState = (error-self->error_1);
      i_St_ParkingState = (self->i_1+error);
      p_St_ParkingState = error;
      p = p_St_ParkingState;
      v_63 = (3*p);
      i = i_St_ParkingState;
      v_64 = (i/1000);
      v_65 = (v_63+v_64);
      d = d_St_ParkingState;
      pid_value_St_ParkingState = (v_65+d);
      pid_value = pid_value_St_ParkingState;
      right_St_ParkingState = (40-pid_value);
      left_St_ParkingState = (40+pid_value);
      number = number_St_ParkingState;
      dir = dir_St_ParkingState;
      direction_St_ParkingState = dir;
      sum = sum_St_ParkingState;
      left = left_St_ParkingState;
      v_108 = (left<0);
      if (v_108) {
        v_109 = 0;
      } else {
        v_109 = left;
      };
      right = right_St_ParkingState;
      v_111 = (right<0);
      if (v_111) {
        v_112 = 0;
      } else {
        v_112 = right;
      };
      objectCounter = objectCounter_St_ParkingState;
      objectLeftCounter = objectLeftCounter_St_ParkingState;
      parklefttimer = parklefttimer_St_ParkingState;
      parkrighttimer = parkrighttimer_St_ParkingState;
      parkingelapse = parkingelapse_St_ParkingState;
      v_87 = (parkingelapse>3500);
      if (v_87) {
        v_88 = 1;
      } else {
        v_88 = 0;
      };
      v_85 = (parkingelapse<2550);
      v_84 = (parkingelapse>2500);
      v_86 = (v_84&&v_85);
      if (v_86) {
        v_89 = 1;
      } else {
        v_89 = v_88;
      };
      v_82 = (parkingelapse<950);
      v_81 = (parkingelapse>900);
      v_83 = (v_81&&v_82);
      if (v_83) {
        checkparkhere_St_ParkingState = 1;
      } else {
        checkparkhere_St_ParkingState = v_89;
      };
      v_75 = (parkingelapse<3700);
      if (v_75) {
        v_76 = 4;
      } else {
        v_76 = 0;
      };
      v_74 = (parkingelapse<3400);
      if (v_74) {
        v_77 = 0;
      } else {
        v_77 = v_76;
      };
      v_73 = (parkingelapse<2700);
      if (v_73) {
        v_78 = 4;
      } else {
        v_78 = v_77;
      };
      v_72 = (parkingelapse<2300);
      if (v_72) {
        v_79 = 0;
      } else {
        v_79 = v_78;
      };
      v_71 = (parkingelapse<1200);
      if (v_71) {
        v_80 = 4;
      } else {
        v_80 = v_79;
      };
      v_70 = (parkingelapse<800);
      if (v_70) {
        navigation_St_ParkingState = 0;
      } else {
        navigation_St_ParkingState = v_80;
      };
      checkparkhere = checkparkhere_St_ParkingState;
      v_90 = (checkparkhere==1);
      if (v_90) {
        parkdir_St_ParkingState = v_106;
      } else {
        parkdir_St_ParkingState = 0;
      };
      parkdir = parkdir_St_ParkingState;
      v_31 = (parkdir==2);
      if (v_31) {
        v_33 = true;
        v_32 = Line_follower__St_Parkright;
      } else {
        v_33 = false;
        v_32 = Line_follower__St_ParkingState;
      };
      v_30 = (parkdir==1);
      if (v_30) {
        nr_St_ParkingState = true;
        ns_St_ParkingState = Line_follower__St_Parkleft;
      } else {
        nr_St_ParkingState = v_33;
        ns_St_ParkingState = v_32;
      };
      navigation = navigation_St_ParkingState;
      v_110 = (navigation==4);
      if (v_110) {
        v_r_St_ParkingState = 0;
      } else {
        v_r_St_ParkingState = v_112;
      };
      v_107 = (navigation==4);
      if (v_107) {
        v_l_St_ParkingState = 0;
      } else {
        v_l_St_ParkingState = v_109;
      };
      _out->v_l = v_l_St_ParkingState;
      _out->v_r = v_r_St_ParkingState;
      rightCounter = rightCounter_St_ParkingState;
      rightTurn = rightTurn_St_ParkingState;
      stopCounter = stopCounter_St_ParkingState;
      lastcountwhite = lastcountwhite_St_ParkingState;
      _out->direction = direction_St_ParkingState;
      finalavg0 = finalavg0_St_ParkingState;
      finalavg1 = finalavg1_St_ParkingState;
      finalavg2 = finalavg2_St_ParkingState;
      finalavg3 = finalavg3_St_ParkingState;
      finalavg4 = finalavg4_St_ParkingState;
      whiteavgsen0 = whiteavgsen0_St_ParkingState;
      whiteavgsen1 = whiteavgsen1_St_ParkingState;
      whiteavgsen2 = whiteavgsen2_St_ParkingState;
      whiteavgsen3 = whiteavgsen3_St_ParkingState;
      whiteavgsen4 = whiteavgsen4_St_ParkingState;
      ns = ns_St_ParkingState;
      nr = nr_St_ParkingState;
      self->v_68 = parkingelapse;
      self->v_66 = false;
      break;
    case Line_follower__St_Parkleft:
      lastcountwhite_St_Parkleft = self->lastcountwhite_1;
      whiteavgsen4_St_Parkleft = self->whiteavgsen4_1;
      whiteavgsen3_St_Parkleft = self->whiteavgsen3_1;
      whiteavgsen2_St_Parkleft = self->whiteavgsen2_1;
      whiteavgsen1_St_Parkleft = self->whiteavgsen1_1;
      whiteavgsen0_St_Parkleft = self->whiteavgsen0_1;
      finalavg4_St_Parkleft = self->finalavg4_1;
      finalavg3_St_Parkleft = self->finalavg3_1;
      finalavg2_St_Parkleft = self->finalavg2_1;
      finalavg1_St_Parkleft = self->finalavg1_1;
      finalavg0_St_Parkleft = self->finalavg0_1;
      rightCounter_St_Parkleft = self->rightCounter_1;
      navigation_St_Parkleft = self->navigation_1;
      checkparkhere_St_Parkleft = self->checkparkhere_1;
      parkingelapse_St_Parkleft = self->parkingelapse_1;
      parkdir_St_Parkleft = self->parkdir_1;
      parkrighttimer_St_Parkleft = self->parkrighttimer_1;
      stopCounter_St_Parkleft = self->stopCounter_1;
      objectLeftCounter_St_Parkleft = self->objectLeftCounter_1;
      objectCounter_St_Parkleft = self->objectCounter_1;
      right_St_Parkleft = self->right_1;
      left_St_Parkleft = self->left_1;
      sum_St_Parkleft = self->sum_1;
      act4_St_Parkleft = self->act4_1;
      act3_St_Parkleft = self->act3_1;
      act2_St_Parkleft = self->act2_1;
      act1_St_Parkleft = self->act1_1;
      act0_St_Parkleft = self->act0_1;
      dir_St_Parkleft = self->dir_1;
      number_St_Parkleft = self->number_1;
      pid_value_St_Parkleft = self->pid_value_1;
      d_St_Parkleft = self->d_1;
      i_St_Parkleft = self->i_1;
      p_St_Parkleft = self->p_1;
      error_St_Parkleft = self->error_1;
      uTurn_St_Parkleft = self->uTurn_1;
      rightTurn_St_Parkleft = self->rightTurn_1;
      v_21 = (self->v_20+1);
      v_19 = (self->v_18==1801);
      if (v_19) {
        v_22 = 1;
      } else {
        v_22 = v_21;
      };
      if (self->v_16) {
        v_17 = true;
      } else {
        v_17 = r;
      };
      if (v_17) {
        parklefttimer_St_Parkleft = 1;
      } else {
        parklefttimer_St_Parkleft = v_22;
      };
      act0 = act0_St_Parkleft;
      act1 = act1_St_Parkleft;
      act2 = act2_St_Parkleft;
      act3 = act3_St_Parkleft;
      act4 = act4_St_Parkleft;
      uTurn = uTurn_St_Parkleft;
      error = error_St_Parkleft;
      p = p_St_Parkleft;
      i = i_St_Parkleft;
      d = d_St_Parkleft;
      pid_value = pid_value_St_Parkleft;
      number = number_St_Parkleft;
      dir = dir_St_Parkleft;
      sum = sum_St_Parkleft;
      left = left_St_Parkleft;
      right = right_St_Parkleft;
      objectCounter = objectCounter_St_Parkleft;
      objectLeftCounter = objectLeftCounter_St_Parkleft;
      parklefttimer = parklefttimer_St_Parkleft;
      v_29 = (parklefttimer<500);
      if (v_29) {
        direction_St_Parkleft = 0;
      } else {
        direction_St_Parkleft = 3;
      };
      v_27 = (parklefttimer<1700);
      if (v_27) {
        v_28 = 45;
      } else {
        v_28 = 40;
      };
      v_26 = (parklefttimer<500);
      if (v_26) {
        v_r_St_Parkleft = 40;
      } else {
        v_r_St_Parkleft = v_28;
      };
      v_24 = (parklefttimer<1700);
      if (v_24) {
        v_25 = 25;
      } else {
        v_25 = 40;
      };
      v_23 = (parklefttimer<500);
      if (v_23) {
        v_l_St_Parkleft = 40;
      } else {
        v_l_St_Parkleft = v_25;
      };
      v_15 = (parklefttimer==1800);
      if (v_15) {
        nr_St_Parkleft = true;
        ns_St_Parkleft = Line_follower__St_Stopstate;
      } else {
        nr_St_Parkleft = false;
        ns_St_Parkleft = Line_follower__St_Parkleft;
      };
      parkrighttimer = parkrighttimer_St_Parkleft;
      parkingelapse = parkingelapse_St_Parkleft;
      checkparkhere = checkparkhere_St_Parkleft;
      parkdir = parkdir_St_Parkleft;
      navigation = navigation_St_Parkleft;
      _out->v_l = v_l_St_Parkleft;
      _out->v_r = v_r_St_Parkleft;
      rightCounter = rightCounter_St_Parkleft;
      rightTurn = rightTurn_St_Parkleft;
      stopCounter = stopCounter_St_Parkleft;
      lastcountwhite = lastcountwhite_St_Parkleft;
      _out->direction = direction_St_Parkleft;
      finalavg0 = finalavg0_St_Parkleft;
      finalavg1 = finalavg1_St_Parkleft;
      finalavg2 = finalavg2_St_Parkleft;
      finalavg3 = finalavg3_St_Parkleft;
      finalavg4 = finalavg4_St_Parkleft;
      whiteavgsen0 = whiteavgsen0_St_Parkleft;
      whiteavgsen1 = whiteavgsen1_St_Parkleft;
      whiteavgsen2 = whiteavgsen2_St_Parkleft;
      whiteavgsen3 = whiteavgsen3_St_Parkleft;
      whiteavgsen4 = whiteavgsen4_St_Parkleft;
      ns = ns_St_Parkleft;
      nr = nr_St_Parkleft;
      self->v_20 = parklefttimer;
      self->v_18 = parklefttimer;
      self->v_16 = false;
      break;
    case Line_follower__St_Parkright:
      lastcountwhite_St_Parkright = self->lastcountwhite_1;
      whiteavgsen4_St_Parkright = self->whiteavgsen4_1;
      whiteavgsen3_St_Parkright = self->whiteavgsen3_1;
      whiteavgsen2_St_Parkright = self->whiteavgsen2_1;
      whiteavgsen1_St_Parkright = self->whiteavgsen1_1;
      whiteavgsen0_St_Parkright = self->whiteavgsen0_1;
      finalavg4_St_Parkright = self->finalavg4_1;
      finalavg3_St_Parkright = self->finalavg3_1;
      finalavg2_St_Parkright = self->finalavg2_1;
      finalavg1_St_Parkright = self->finalavg1_1;
      finalavg0_St_Parkright = self->finalavg0_1;
      rightCounter_St_Parkright = self->rightCounter_1;
      navigation_St_Parkright = self->navigation_1;
      checkparkhere_St_Parkright = self->checkparkhere_1;
      parkingelapse_St_Parkright = self->parkingelapse_1;
      parkdir_St_Parkright = self->parkdir_1;
      parklefttimer_St_Parkright = self->parklefttimer_1;
      stopCounter_St_Parkright = self->stopCounter_1;
      objectLeftCounter_St_Parkright = self->objectLeftCounter_1;
      objectCounter_St_Parkright = self->objectCounter_1;
      right_St_Parkright = self->right_1;
      left_St_Parkright = self->left_1;
      sum_St_Parkright = self->sum_1;
      act4_St_Parkright = self->act4_1;
      act3_St_Parkright = self->act3_1;
      act2_St_Parkright = self->act2_1;
      act1_St_Parkright = self->act1_1;
      act0_St_Parkright = self->act0_1;
      dir_St_Parkright = self->dir_1;
      number_St_Parkright = self->number_1;
      pid_value_St_Parkright = self->pid_value_1;
      d_St_Parkright = self->d_1;
      i_St_Parkright = self->i_1;
      p_St_Parkright = self->p_1;
      error_St_Parkright = self->error_1;
      uTurn_St_Parkright = self->uTurn_1;
      rightTurn_St_Parkright = self->rightTurn_1;
      v_6 = (self->v_5+1);
      v_4 = (self->v_3==1801);
      if (v_4) {
        v_7 = 2;
      } else {
        v_7 = v_6;
      };
      if (self->v_1) {
        v_2 = true;
      } else {
        v_2 = r;
      };
      if (v_2) {
        parkrighttimer_St_Parkright = 1;
      } else {
        parkrighttimer_St_Parkright = v_7;
      };
      act0 = act0_St_Parkright;
      act1 = act1_St_Parkright;
      act2 = act2_St_Parkright;
      act3 = act3_St_Parkright;
      act4 = act4_St_Parkright;
      uTurn = uTurn_St_Parkright;
      error = error_St_Parkright;
      p = p_St_Parkright;
      i = i_St_Parkright;
      d = d_St_Parkright;
      pid_value = pid_value_St_Parkright;
      number = number_St_Parkright;
      dir = dir_St_Parkright;
      sum = sum_St_Parkright;
      left = left_St_Parkright;
      right = right_St_Parkright;
      objectCounter = objectCounter_St_Parkright;
      objectLeftCounter = objectLeftCounter_St_Parkright;
      parklefttimer = parklefttimer_St_Parkright;
      parkrighttimer = parkrighttimer_St_Parkright;
      v_14 = (parkrighttimer<500);
      if (v_14) {
        direction_St_Parkright = 0;
      } else {
        direction_St_Parkright = 3;
      };
      v_12 = (parkrighttimer<1700);
      if (v_12) {
        v_13 = 25;
      } else {
        v_13 = 40;
      };
      v_11 = (parkrighttimer<500);
      if (v_11) {
        v_r_St_Parkright = 40;
      } else {
        v_r_St_Parkright = v_13;
      };
      v_9 = (parkrighttimer<1700);
      if (v_9) {
        v_10 = 45;
      } else {
        v_10 = 40;
      };
      v_8 = (parkrighttimer<500);
      if (v_8) {
        v_l_St_Parkright = 40;
      } else {
        v_l_St_Parkright = v_10;
      };
      v = (parkrighttimer==1800);
      if (v) {
        nr_St_Parkright = true;
        ns_St_Parkright = Line_follower__St_Stopstate;
      } else {
        nr_St_Parkright = false;
        ns_St_Parkright = Line_follower__St_Parkright;
      };
      parkingelapse = parkingelapse_St_Parkright;
      checkparkhere = checkparkhere_St_Parkright;
      parkdir = parkdir_St_Parkright;
      navigation = navigation_St_Parkright;
      _out->v_l = v_l_St_Parkright;
      _out->v_r = v_r_St_Parkright;
      rightCounter = rightCounter_St_Parkright;
      rightTurn = rightTurn_St_Parkright;
      stopCounter = stopCounter_St_Parkright;
      lastcountwhite = lastcountwhite_St_Parkright;
      _out->direction = direction_St_Parkright;
      finalavg0 = finalavg0_St_Parkright;
      finalavg1 = finalavg1_St_Parkright;
      finalavg2 = finalavg2_St_Parkright;
      finalavg3 = finalavg3_St_Parkright;
      finalavg4 = finalavg4_St_Parkright;
      whiteavgsen0 = whiteavgsen0_St_Parkright;
      whiteavgsen1 = whiteavgsen1_St_Parkright;
      whiteavgsen2 = whiteavgsen2_St_Parkright;
      whiteavgsen3 = whiteavgsen3_St_Parkright;
      whiteavgsen4 = whiteavgsen4_St_Parkright;
      ns = ns_St_Parkright;
      nr = nr_St_Parkright;
      self->v_5 = parkrighttimer;
      self->v_3 = parkrighttimer;
      self->v_1 = false;
      break;
    case Line_follower__St_Stopstate:
      lastcountwhite_St_Stopstate = self->lastcountwhite_1;
      whiteavgsen4_St_Stopstate = self->whiteavgsen4_1;
      whiteavgsen3_St_Stopstate = self->whiteavgsen3_1;
      whiteavgsen2_St_Stopstate = self->whiteavgsen2_1;
      whiteavgsen1_St_Stopstate = self->whiteavgsen1_1;
      whiteavgsen0_St_Stopstate = self->whiteavgsen0_1;
      finalavg4_St_Stopstate = self->finalavg4_1;
      finalavg3_St_Stopstate = self->finalavg3_1;
      finalavg2_St_Stopstate = self->finalavg2_1;
      finalavg1_St_Stopstate = self->finalavg1_1;
      finalavg0_St_Stopstate = self->finalavg0_1;
      rightCounter_St_Stopstate = self->rightCounter_1;
      navigation_St_Stopstate = self->navigation_1;
      checkparkhere_St_Stopstate = self->checkparkhere_1;
      parkingelapse_St_Stopstate = self->parkingelapse_1;
      parkdir_St_Stopstate = self->parkdir_1;
      parkrighttimer_St_Stopstate = self->parkrighttimer_1;
      parklefttimer_St_Stopstate = self->parklefttimer_1;
      stopCounter_St_Stopstate = self->stopCounter_1;
      objectLeftCounter_St_Stopstate = self->objectLeftCounter_1;
      objectCounter_St_Stopstate = self->objectCounter_1;
      right_St_Stopstate = self->right_1;
      left_St_Stopstate = self->left_1;
      sum_St_Stopstate = self->sum_1;
      act4_St_Stopstate = self->act4_1;
      act3_St_Stopstate = self->act3_1;
      act2_St_Stopstate = self->act2_1;
      act1_St_Stopstate = self->act1_1;
      act0_St_Stopstate = self->act0_1;
      dir_St_Stopstate = self->dir_1;
      number_St_Stopstate = self->number_1;
      pid_value_St_Stopstate = self->pid_value_1;
      d_St_Stopstate = self->d_1;
      i_St_Stopstate = self->i_1;
      p_St_Stopstate = self->p_1;
      error_St_Stopstate = self->error_1;
      uTurn_St_Stopstate = self->uTurn_1;
      rightTurn_St_Stopstate = self->rightTurn_1;
      direction_St_Stopstate = 100;
      v_r_St_Stopstate = 0;
      v_l_St_Stopstate = 0;
      if (true) {
        nr_St_Stopstate = true;
      } else {
        nr_St_Stopstate = false;
      };
      if (true) {
        ns_St_Stopstate = Line_follower__St_Stopstate;
      } else {
        ns_St_Stopstate = Line_follower__St_Stopstate;
      };
      act0 = act0_St_Stopstate;
      act1 = act1_St_Stopstate;
      act2 = act2_St_Stopstate;
      act3 = act3_St_Stopstate;
      act4 = act4_St_Stopstate;
      uTurn = uTurn_St_Stopstate;
      error = error_St_Stopstate;
      p = p_St_Stopstate;
      i = i_St_Stopstate;
      d = d_St_Stopstate;
      pid_value = pid_value_St_Stopstate;
      number = number_St_Stopstate;
      dir = dir_St_Stopstate;
      sum = sum_St_Stopstate;
      left = left_St_Stopstate;
      right = right_St_Stopstate;
      objectCounter = objectCounter_St_Stopstate;
      objectLeftCounter = objectLeftCounter_St_Stopstate;
      parklefttimer = parklefttimer_St_Stopstate;
      parkrighttimer = parkrighttimer_St_Stopstate;
      parkingelapse = parkingelapse_St_Stopstate;
      checkparkhere = checkparkhere_St_Stopstate;
      parkdir = parkdir_St_Stopstate;
      navigation = navigation_St_Stopstate;
      _out->v_l = v_l_St_Stopstate;
      _out->v_r = v_r_St_Stopstate;
      rightCounter = rightCounter_St_Stopstate;
      rightTurn = rightTurn_St_Stopstate;
      stopCounter = stopCounter_St_Stopstate;
      lastcountwhite = lastcountwhite_St_Stopstate;
      _out->direction = direction_St_Stopstate;
      finalavg0 = finalavg0_St_Stopstate;
      finalavg1 = finalavg1_St_Stopstate;
      finalavg2 = finalavg2_St_Stopstate;
      finalavg3 = finalavg3_St_Stopstate;
      finalavg4 = finalavg4_St_Stopstate;
      whiteavgsen0 = whiteavgsen0_St_Stopstate;
      whiteavgsen1 = whiteavgsen1_St_Stopstate;
      whiteavgsen2 = whiteavgsen2_St_Stopstate;
      whiteavgsen3 = whiteavgsen3_St_Stopstate;
      whiteavgsen4 = whiteavgsen4_St_Stopstate;
      ns = ns_St_Stopstate;
      nr = nr_St_Stopstate;
      break;
    default:
      break;
  };
  self->lastcountwhite_1 = lastcountwhite;
  self->whiteavgsen4_1 = whiteavgsen4;
  self->whiteavgsen3_1 = whiteavgsen3;
  self->whiteavgsen2_1 = whiteavgsen2;
  self->whiteavgsen1_1 = whiteavgsen1;
  self->whiteavgsen0_1 = whiteavgsen0;
  self->finalavg4_1 = finalavg4;
  self->finalavg3_1 = finalavg3;
  self->finalavg2_1 = finalavg2;
  self->finalavg1_1 = finalavg1;
  self->finalavg0_1 = finalavg0;
  self->rightCounter_1 = rightCounter;
  self->navigation_1 = navigation;
  self->checkparkhere_1 = checkparkhere;
  self->parkingelapse_1 = parkingelapse;
  self->parkdir_1 = parkdir;
  self->parkrighttimer_1 = parkrighttimer;
  self->parklefttimer_1 = parklefttimer;
  self->stopCounter_1 = stopCounter;
  self->objectLeftCounter_1 = objectLeftCounter;
  self->objectCounter_1 = objectCounter;
  self->right_1 = right;
  self->left_1 = left;
  self->sum_1 = sum;
  self->act4_1 = act4;
  self->act3_1 = act3;
  self->act2_1 = act2;
  self->act1_1 = act1;
  self->act0_1 = act0;
  self->dir_1 = dir;
  self->number_1 = number;
  self->pid_value_1 = pid_value;
  self->d_1 = d;
  self->i_1 = i;
  self->p_1 = p;
  self->error_1 = error;
  self->uTurn_1 = uTurn;
  self->rightTurn_1 = rightTurn;
  self->pnr = nr;
  self->ck = ns;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__line_follower_reset(&self->line_follower);
}

void Line_follower__main_step(long sen0, long sen1, long sen2, long sen3,
                              long sen4, long irsenLeft, long irsenFront,
                              long irsenRight, Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__line_follower_out Line_follower__line_follower_out_st;
  
  long sen[5];
  sen[0] = sen0;
  sen[1] = sen1;
  sen[2] = sen2;
  sen[3] = sen3;
  sen[4] = sen4;
  Line_follower__line_follower_step(sen, irsenLeft, irsenFront, irsenRight,
                                    &Line_follower__line_follower_out_st,
                                    &self->line_follower);
  _out->v_l = Line_follower__line_follower_out_st.v_l;
  _out->v_r = Line_follower__line_follower_out_st.v_r;
  _out->direction = Line_follower__line_follower_out_st.direction;;
}

