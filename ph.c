/*
 * ph.c
 *
 *  Created on: May 2, 2017
 *      Author: kiran
 */

#include "ph.h"
#include "myuart.h"

#define PH1 0,64
#define PH2 65,89//////////
#define PH3 90,119
#define PH4 120,160
#define PH5 136,202/////
#define PH6 207,243///
#define PH7 232,262/////
/////////////////////////////
#define PH8 263,284///
#define PH9 286,340////
#define PH10 340,400
#define PH11 401,420
#define PH12 430,480
#define PH13 482,540
#define PH14 541,650

int calibrate(int result){

	if(result >= MINPH(PH1) && result <= MAXPH(PH1)){
			//myuart_tx_string("PH1");
			//myuart_tx_byte('\r');
		return 1;
	} else
	if(result >= MINPH(PH2) && result <= MAXPH(PH2)){
			//myuart_tx_string("PH2");
			//myuart_tx_byte('\r');
		return 2;
	}else
	if(result >= MINPH(PH3) && result <= MAXPH(PH3)){
			//myuart_tx_string("PH3");
		//	myuart_tx_byte('\r');
		return 3;
	}else
	if(result >= MINPH(PH4) && result <= MAXPH(PH4)){
			//myuart_tx_string("PH4");
			//myuart_tx_byte('\r');
		return 4;
	}else
	if(result >= MINPH(PH5) && result <= MAXPH(PH5)){
			//myuart_tx_string("PH5");
		//	myuart_tx_byte('\r');
		return 5;
	}else
	if(result >= MINPH(PH6) && result <= MAXPH(PH6)){
			//myuart_tx_string("PH6");
		//	myuart_tx_byte('\r');
		return 6;
	}else
	if(result >= MINPH(PH7) && result <= MAXPH(PH7)){
			//myuart_tx_string("PH7");
			//myuart_tx_byte('\r');
		return 7;
	}else
	if(result >= MINPH(PH8) && result <= MAXPH(PH8)){
		//	myuart_tx_string("PH8");
		//	myuart_tx_byte('\r');
		return 8;
	}else

	if(result >= MINPH(PH9) && result <= MAXPH(PH9)){
		//	myuart_tx_string("PH9");
		//	myuart_tx_byte('\r');
		return 9;
	}else
	if(result >= MINPH(PH10) && result <= MAXPH(PH10)){
		//	myuart_tx_string("PH10");
		//	myuart_tx_byte('\r');
		return 10;
	}else
	if(result >= MINPH(PH11) && result <= MAXPH(PH11)){
		//myuart_tx_string("PH11");
		//myuart_tx_byte('\r');
		return 11;
	}else
		if(result >= MINPH(PH12) && result <= MAXPH(PH12)){
		//	myuart_tx_string("PH12");
			//myuart_tx_byte('\r');
			return 12;
	}else
	if(result >= MINPH(PH13) && result <= MAXPH(PH13)){
		//	myuart_tx_string("PH13");
		//	myuart_tx_byte('\r');
		return 13;
	}else
		if(result >= MINPH(PH14) && result <= MAXPH(PH14)){
		//	myuart_tx_string("PH14");
		//	myuart_tx_byte('\r');
			return 14;
	}else{
		//	myuart_tx_string("XX");
		//	myuart_tx_byte('\r');
		return 0;
	}
}
