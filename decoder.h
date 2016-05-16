/*
 * decoder.h
 *
 *  Created on: Nov 12, 2014
 *      Author: joe--ngigi
 */


#include "systemc.h"

SC_MODULE (decoder1by2) {
	sc_in<bool>a;
	sc_out<bool>b, c;

	void decode(){
		if(a==0) {
			b=1;
			c=a;
		 }
		else{
			b=0;
			c=a;

			}
		}
	SC_CTOR (decoder1by2){

		SC_METHOD(decode);
		sensitive<<a;
	}
};







