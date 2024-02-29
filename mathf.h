/** \file mathf.h
	\brief Library of functions for computing integrals
	\author Giacomo Lanata

	first version of this software; all the functions are in this file
*/

/*! \mainpage
 *
 * \section intro_sec Introduction
 *
 * This is a software in C language for calculating numerical integration by adopting different techniques
 *
 * \section install_sec Installation
 *
 *
 *
 * etc...
 */

#ifndef _MATHF_H
#define _MATHF_H

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float Polynomial(float* coeff, int size, float in);

void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);

float Trapezoidal(float* values, int size, float stepsize);

#endif+