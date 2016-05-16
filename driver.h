/*
 * driver.h
 *
 *  Created on: Nov 12, 2014
 *      Author: joe--ngigi
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include "systemc.h"

SC_MODULE (driver){
	sc_out<bool>d_a;

	void prc_drivea(){
	
			int count;
			for(count=0;count<100;count++)
			{
				d_a.write((bool)true);
				wait(5,SC_NS);
				d_a.write((bool)false);
				wait(5,SC_NS);
			}
	}
	SC_CTOR (driver){
		SC_THREAD (prc_drivea);

	}

	};





#endif /* DRIVER_H_ */
