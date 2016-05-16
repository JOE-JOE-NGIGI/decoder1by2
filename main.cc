/*
 * main.cc
 *
 *  Created on: Nov 12, 2014
 *      Author: joe--ngigi
 */

#include "systemc.h"
#include "monitor.h"
#include "driver.h"
#include "decoder.h"

int sc_main(int argc, char* argv[])
{
	
	sc_signal<bool>t_a, t_b, t_c;
	sc_trace_file*tf;

	driver d1 ("driver");

	d1.d_a(t_a);


	decoder1by2 l1("decoder1by2");
	l1.a(t_a);
	l1.b(t_b);
	l1.c(t_c);


	monitor m1("monitor");
	m1.m_a(t_a);
	m1.m_b(t_b);
	m1.m_c(t_c);


	tf=sc_create_vcd_trace_file("decoder_waveforms");
	sc_trace(tf,t_a,"t_a");
	sc_trace(tf,t_b,"t_b");
	sc_trace(tf,t_c,"t_c");
	sc_start(100,SC_NS);//start the simulation and run for 100 Ns
	sc_close_vcd_trace_file(tf);

	return 0;
};






