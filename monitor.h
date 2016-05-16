/*
 * monitor.h
 *
 *  Created on: Nov 12, 2014
 *      Author: joe--ngigi
 */

#ifndef MONITOR_H_
#define MONITOR_H_

#include "systemc.h"

SC_MODULE (monitor){

	sc_in<bool> m_a,m_b,m_c;
	void prc_monitor(){
		cout<<"  At "<<sc_time_stamp()<<" input m_a is: "<<m_a;
				cout<<" output m_b is: "<<m_b<<"  "<<" output m_c is: "<<m_c<<endl;

		}
	SC_CTOR(monitor){
		SC_METHOD(prc_monitor);
		sensitive<<m_b;

		}
};




#endif /* MONITOR_H_ */
