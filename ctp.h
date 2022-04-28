/*
 * ctp.h - MemTest-86  Version 5.31b
 * 
 * Released under version 2 of the Gnu Public License.
 * By Chris Brady
 * 
 * CTP tests by yflelite@gmail.com
 */

/* 
 * File:   ctp.h
 * Author: gnu
 *
 * Created on April 23, 2022, 7:26 PM
 */

#ifndef CTP_H
#define CTP_H

#ifdef __cplusplus
extern "C" {
#endif

unsigned long ctp_set(void); 
unsigned long ctp_set_top(void); 
unsigned long ctp_rst(void); 
unsigned long ctp_rst_zero(void); 
unsigned long ctp_up(void); 
unsigned long ctp_down(void); 
unsigned long ctp_getnxt (void); 
unsigned long ctp_getprv (void); 
unsigned long ctp_rand(void); 

#ifdef __cplusplus
}
#endif

#endif /* CTP_H */

