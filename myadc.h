/*
 * myadc.h
 *
 *  Created on: Apr 21, 2017
 *      Author: kiran
 */

#include <msp430.h>

#ifndef MYADC_H_
#define MYADC_H_

//The following is the average and sd of each PH
//#define PH1 214,10
//#define PH2 214,11//////////
//#define PH3 130,20
//#define PH4 188,12
//#define PH5 228,20
//#define PH6 240,4
//#define PH7 263,3
///////////////////////////////
//#define PH8 214,11
//#define PH9 214,11
//#define PH10 214,11
//#define PH11 214,11
//#define PH12 214,11
//#define PH13 214,11
//#define PH14 214,11

#define AVGDATA 20
#define SAMPLES 200
//int inline MAXPH(int AVG,int SD);
//int inline MINPH(int AVG,int SD);

void myADCinit();
int takeSamples();

void  ADCstartConv();

void  ADCstopConv();





#endif /* MYADC_H_ */
