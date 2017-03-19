/**
  ******************************************************************************
  * File Name          : load_screens.c
  * Description        : Loads screen text & lines for system & demo screens
  ******************************************************************************
  *
  * COPYRIGHT(c) 2016 ContinuumBridge
  *
 **/

/* Includes ------------------------------------------------------------------*/
#include <string.h>
#include <stdlib.h>
#include "cbutils.h"
#include "nodeid.h"
#include "load_screens.h"

/* Code */

extern char 				screens[MAX_SCREEN][1][194];

void Load_Normal_Screens(void)
{
	// Not very elegant, but it does the job and it shouldn't need to change:
	int i, s;
	strcpy(screens[0][0], "F\x03" "Y\x18" "C\x08" "Screen 0\xFF" "Y\x56" "C\x0F" "Please reset me\xFF" "ES");
	strcpy(screens[1][0], "F\x03" "Y\x38" "C\x08" "Screen 1\xFF" "ES");
	strcpy(screens[2][0], "F\x03" "Y\x38" "C\x08" "Screen 2\xFF" "ES");
	strcpy(screens[3][0], "F\x03" "Y\x38" "C\x08" "Screen 3\xFF" "ES");
	strcpy(screens[4][0], "F\x03" "Y\x38" "C\x08" "Screen 4\xFF" "ES");
	strcpy(screens[5][0], "F\x03" "Y\x38" "C\x08" "Screen 5\xFF" "ES");
	strcpy(screens[6][0], "F\x03" "Y\x38" "C\x08" "Screen 6\xFF" "ES");
	strcpy(screens[7][0], "F\x03" "Y\x38" "C\x08" "Screen 7\xFF" "ES");
	strcpy(screens[8][0], "F\x03" "Y\x38" "C\x08" "Screen 8\xFF" "ES");
	strcpy(screens[9][0], "F\x03" "Y\x38" "C\x08" "Screen 9\xFF" "ES");
	strcpy(screens[10][0], "F\x03" "Y\x38" "C\x09" "Screen 10\xFF" "ES");
	strcpy(screens[11][0], "F\x03" "Y\x38" "C\x09" "Screen 11\xFF" "ES");
	strcpy(screens[12][0], "F\x03" "Y\x38" "C\x09" "Screen 12\xFF" "ES");
	strcpy(screens[13][0], "F\x03" "Y\x38" "C\x09" "Screen 13\xFF" "ES");
	strcpy(screens[14][0], "F\x03" "Y\x38" "C\x09" "Screen 14\xFF" "ES");
	strcpy(screens[15][0], "F\x03" "Y\x38" "C\x09" "Screen 15\xFF" "ES");
	strcpy(screens[16][0], "F\x03" "Y\x38" "C\x09" "Screen 16\xFF" "ES");
	strcpy(screens[17][0], "F\x03" "Y\x05" "C\x07" "Network\xFF" "Y\x20" "C\x07" "problem\xFF" "Y\x3D"
			              	  "C\x0A" "Not in use\xFF" "ES");
	strcpy(screens[18][0], "F\x02" "Y\x12" "C\x0B" "Working ...\xFF" "F\x03" "Y\x38" "C\x0B" "Please wait\xFF" "ES");
	sprintf(screens[19][0], "F\x02Y\x04G\x13Node ID: %d", node_id_int);
	screens[19][0][4] = 0x43;  // C
	strcpy(screens[19][0] + 26, "Y\x1A" "C\x1A" "Sign into portal.spur.site\xFF"
			              "Y\x30" "C\x17" "Enter Node ID then push\xFF" "Y\x46" "C\x1A" "here for 3 secs to connect\xFF" "ES");
	//strcpy(debug_buff, screens[19][0]);
	//DEBUG_TX(debug_buff);
	strcpy(screens[20][0], "F\x03" "Y\x05" "C\x0A" "Connecting\xFF" "Y\x20" "C\x0A" "to network\xFF" "Y\x3D"
						   "C\x0B" "Please wait\xFF" "ES");
	strcpy(screens[21][0], "F\x02" "Y\x05" "C\x14" "Connected to network\xFF" "F\x03" "Y\x20" "C\x11" "Updating software\xFF" "Y\x3D"
			              	 "C\x0B" "Please wait\xFF" "ES");
	strcpy(screens[22][0], "F\x02" "Y\x10" "C\x0B" "Spur button\xFF" "Y\x32" "C\x0E" "name not known\xFF" "ES");
	strcpy(screens[23][0], "F\x03" "Y\x05" "C\x0D" "Communication\xFF" "Y\x20" "C\x07" "problem\xFF" "Y\x3D"
		              	  "C\x0A" "Not in use\xFF" "ES");
	sprintf(screens[24][0], "F\x02Y\x04G\x13Node ID: %d", node_id_int);
	screens[24][0][4] = 0x43;  // C
	strcpy(screens[24][0] + 26, "Y\x1A" "C\x14" "ID not registered in\xFF"
			              "Y\x30" "C\x1A" "portal.spur.site. Enter it\xFF" "Y\x46" "C\x19" "then push here to connect\xFF" "ES");
	for(s=0; s<25; s++)
		for(i=0; i<128; i++)
			if(screens[s][0][i] == 0xFF)
				screens[s][0][i] = 0x00;
}

void Load_Demo_Screens(void)
{
	int i, s;
	strcpy(screens[0][0], "F\x03" "Y\x04" "C\x0B" "This is the\xFF" "Y\x22" "C\x09" "Spur demo\xFF"
	                	   "Y\x40" "C\x1D" "push to begin\xFF" "ES");
	strcpy(screens[1][0], "F\x03" "Y\x04" "C\x13" "Push here to report\xFF" "Y\x22" "C\x0C" "a fault with\xFF"
	                      "Y\x40" "C\x0E" "this appliance\xFF" "ES");
	strcpy(screens[2][0], "F\x03" "Y\x04" "C\x11" "A fault with this\xFF" "Y\x22" "C\x0D" "appliance has\xFF"
	                      "Y\x40" "C\x0D" "been reported\xFF" "ES");
	strcpy(screens[3][0], "F\x03" "Y\x04" "C\x0C" "Push here if\xFF" "Y\x22" "C\x0D" "this washroom\xFF"
	  		               "Y\x40" "C\x1D" "needs cleaning\xFF" "ES");
	strcpy(screens[4][0], "F\x03" "Y\x04" "C\x0E" "A cleaner will\xFF" "Y\x22" "C\x07" "be here\xFF"
	  		               "Y\x40" "C\x04" "soon\xFF" "ES");
	strcpy(screens[5][0], "F\x03" "Y\x04" "C\x09" "Push here\xFF" "Y\x22" "C\x0B" "to call for\xFF" "Y\x40" "C\x08" "a server\xFF" "ES");
	strcpy(screens[6][0], "F\x03" "Y\x04" "C\x08" "A server\xFF" "Y\x22" "C\x0C" "will be with\xFF" "Y\x40" "C\x08" "you soon\xFF" "ES");
	/*
	strcpy(screens[7][0], "F\x03" "Y\x0E" "l\x04" "Push\xFF" "Y\x22" "l\x08" "left for\xFF"
	                      "Y\x40" "l\x04" "bill\xFF" "F\x04" "Y\x0E" "r\x04" "Push\xFF" "Y\x22"
	                      "r\x09" "right for\xFF" "Y\x40" "r\x07" "service\xFF"
                          "X\x01" "Y\x01" "B\x62\x5C" "X\x02" "Y\x02" "B\x60\x5A"
	  	  	              "X\x65" "Y\x01" "B\x62\x5C" "X\x66" "Y\x02" "B\x60\x5A"
			              "ES");
	*/
	strcpy(screens[7][0], "F\x03" "Y\x04" "l\x04" "Push\xFF" "Y\x22" "l\x08" "left for\xFF"
	                      "Y\x40" "l\x04" "bill\xFF" "F\x04" "Y\x04" "r\x04" "Push\xFF" "Y\x22"
	                      "r\x09" "right for\xFF" "Y\x40" "r\x07" "service\xFF"
                          "X\x01" "Y\x01" "B\x62\x5C" "X\x02" "Y\x02" "B\x60\x5A"
	  	  	              "X\x65" "Y\x01" "B\x62\x5C" "X\x66" "Y\x02" "B\x60\x5A"
			              "ES");
	strcpy(screens[8][0], "F\x02" "Y\2" "C\x0D" "Do you have a\xFF" "Y\x16" "C\x0D" "loyalty card?\xFF"
	 		               "F\x03""Y\x39" "l\x02" "No\xFF"
	                       "F\x03" "Y\x39" "r\x03" "Yes\xFF"
	 		               "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
	 		               "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[9][0], "F\x03" "Y\x04" "C\x08" "A server\xFF" "Y\x22" "C\x0C" "will be with\xFF" "Y\x40" "C\x08" "you soon\xFF" "ES");
	strcpy(screens[10][0], "F\x02" "Y\2" "C\x0B" "How was our\xFF" "Y\x16" "C\x0E" "service today?\xFF"
			              "Y\x31" "l\x09" "Push left\xFF"
			  	  	  	  "Y\x47" "l\x07" "for bad\xFF" "Y\x31" "r\x0A" "Push right\xFF"
			              "Y\x47" "r\x08" "for good\xFF" "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
			              "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[11][0], "F\x03" "Y\x04" "C\x11" "Push here if this\xFF" "Y\x22" "C\x11" "spot welder needs\xFF"
	                      "Y\x40" "C\x09" "attention\xFF" "ES");
	strcpy(screens[12][0], "F\x02" "Y\x0E" "l\x04" "Push\xFF" "Y\x24" "l\x08" "left for\xFF"
	 		               "Y\x3C" "l\x0A" "electrodes\xFF" "Y\x0E" "r\x04" "Push\xFF" "Y\x24"
	 		               "r\x09" "right for\xFF" "Y\x3C" "r\x06" "repair\xFF"
	 		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	           	  	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	 		               "ES");
	strcpy(screens[13][0], "F\x03" "Y\x04" "C\x0F" "A repairer will\xFF" "Y\x22" "C\x13" "attend this machine\xFF"
	                      "Y\x40" "C\x11" "by 10:30, Tuesday\xFF" "ES");
	strcpy(screens[14][0], "F\x02" "Y\x0E" "l\x09" "Push left\xFF" "Y\x24" "l\x0A" "if you are\xFF"
	 		               "Y\x3C" "l\x07" "too hot\xFF" "Y\x0E" "r\x0A" "Push right\xFF" "Y\x24"
	 		               "r\x0A" "if you are\xFF" "Y\x3C" "r\x08" "too cold\xFF"
	 		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	           	  	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	 		               "ES");
	strcpy(screens[15][0], "F\x03" "Y\x04" "C\x0C" "Push here to\xFF" "Y\x22" "C\x0A" "order more\xFF"
	                      "Y\x40" "C\x09" "batteries\xFF" "ES");
	strcpy(screens[16][0], "F\x03" "Y\x04" "l\x04" "Push\xFF" "Y\x22" "l\x08" "left for\xFF"
	 		               "Y\x40" "l\x02" "AA\xFF" "Y\x04" "r\x04" "Push\xFF" "Y\x22"
	 		               "r\x09" "right for\xFF" "Y\x40" "r\x03" "AAA\xFF"
	 		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	           	  	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	 		               "ES");
	strcpy(screens[17][0], "F\x02" "Y\2" "C\x16" "20 AA already on order\xFF" "Y\x16" "C\x0B" "Order more?\xFF"
			              "Y\x31" "l\x08" "Push for\xFF"
			  	  	  	  "Y\x47" "l\x02" "NO\xFF" "Y\x31" "r\x08" "Push for\xFF"
			              "Y\x47" "r\x03" "YES\xFF" "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
			              "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[18][0], "F\x02" "Y\x05" "C\x19" "First Floor Recycling Bin\xFF" "F\x03" "Y\x20" "C\x0C" "Push here if\xFF"
	                	   "Y\x3D" "C\x10" "this bin is full\xFF" "ES");
	strcpy(screens[19][0], "F\x02" "Y\x10" "C\x19" "First Floor Recycling Bin\xFF" "F\x03" "Y\x32" "C\x09" "Thank you\xFF" "ES");
	/*
	strcpy(screens[20][0], "F\x03" "Y\x05" "C\x09" "Push here\xFF" "Y\x20" "C\x0A" "to request\xFF"
	    		           "Y\x3D" "C\x06" "a taxi\xFF" "ES");
	strcpy(screens[21][0], "F\x02" "Y\x04" "C\x0E" "Taxi requested\xFF" "Y\x1A" "C\x11" "Taxi will be here\xFF"
			               "Y\x30" "C\x0F" "at approx 11:35\xFF" "Y\x46" "C\x14" "Push again to cancel\xFF" "ES");
    */
	strcpy(screens[20][0], "F\x02" "Y\x02" "C\x12" "How was your stay?\xFF"
			               "Y\x1A" "l\x07" "Service\xFF" "Y\x30" "l\x05" "needs\xFF" "Y\x46" "l\x0B" "improvement\xFF"
                           "Y\x1A" "r\x07" "My stay\xFF" "Y\x30" "r\x03" "was\xFF" "Y\x46" "r\x05" "great\xFF"
			               "X\x01" "Y\x18" "B\x62\x48" "X\x02" "Y\x19" "B\x60\x46"
			               "X\x65" "Y\x18" "B\x62\x48" "X\x66" "Y\x19" "B\x60\x46" "ES");
	strcpy(screens[21][0], "F\x03" "Y\x04" "C\x09" "Thank you\xFF" "Y\x22" "C\x08" "for your\xFF"
				               "Y\x40" "C\x08" "feedback\xFF" "ES");
	strcpy(screens[22][0], "F\x03" "Y\x04" "C\x0F" "Push to request\xFF" "Y\x22" "C\x13" "an AV technician in\xFF"
	    		           "Y\x40" "C\x0E" "meeting room 1\xFF" "ES");
	strcpy(screens[23][0], "F\x03" "Y\x10" "C\x0D" "AV technician\xFF" "Y\x32" "C\x09" "requested\xFF" "ES");
	strcpy(screens[24][0], "F\x03" "Y\x04" "C\x05" "An AV\xFF" "Y\x22" "C\x0D" "technician is\xFF"
			               "Y\x40" "C\x0C" "on their way\xFF" "ES");
	strcpy(screens[25][0], "F\x03" "Y\x10" "C\x0C" "Push here if\xFF" "Y\x32" "C\x09" "you're OK\xFF" "ES");
	strcpy(screens[26][0], "F\x03" "Y\x04" "C\x0C" "Thanks. I'll\xFF" "Y\x22" "C\x0D" "call you this\xFF" "Y\x40" "C\x0A" "PM - Peter\xFF" "ES");
	strcpy(screens[27][0], "F\x03" "Y\x04" "C\x0C" "Push here to\xFF" "Y\x22" "C\x0C" "request more\xFF"
	      		           "Y\x40" "C\x0F" "coffee capsules\xFF" "ES");
	strcpy(screens[28][0], "F\x03" "Y\x04" "C\x0B" "More coffee\xFF" "Y\x22" "C\x0D" "capsules have\xFF"
	      		           "Y\x40" "C\x0E" "been requested\xFF" "ES");
	strcpy(screens[29][0], "F\x03" "Y\x04" "C\x0C" "Push here if\xFF" "Y\x22" "C\x10" "you want a carer\xFF"
	       		           "Y\x40" "C\x0C" "to visit you\xFF" "ES");
	strcpy(screens[30][0], "F\x03" "Y\x10" "C\x0C" "Your request\xFF" "Y\x32" "C\x0D" "has been sent\xFF" "ES");
	strcpy(screens[31][0], "F\x03" "Y\x04" "C\x0C" "A carer will\xFF" "Y\x22" "C\x11" "visit you between\xFF"
	         		       "Y\x40" "C\x0F" "11:00 and 12:00\xFF" "ES");
	strcpy(screens[32][0], "F\x03" "Y\x04" "C\x0C" "Push here if\xFF" "Y\x22" "C\x10" "printer supplies\xFF"
	        		       "Y\x40" "C\x07" "are low\xFF" "ES");
	strcpy(screens[33][0], "F\x03" "Y\x04" "l\x04" "Push\xFF" "Y\x22" "l\x08" "left for\xFF"
	 		               "Y\x40" "l\x05" "paper\xFF" "Y\x04" "r\x04" "Push\xFF" "Y\x22"
	 		               "r\x09" "right for\xFF" "Y\x40" "r\x05" "toner\xFF"
	 		               "X\x01" "Y\x01" "B\x62\x5C" "X\x02" "Y\x02" "B\x60\x5A"
	           	  	  	   "X\x65" "Y\x01" "B\x62\x5C" "X\x66" "Y\x02" "B\x60\x5A"
	 		               "ES");
	/*
	strcpy(screens[34][0], "F\x02" "Y\x0E" "l\x04" "Push\xFF" "Y\x24" "l\x08" "left for\xFF"
	  		               "Y\x3C" "l\x05" "black\xFF" "Y\x0E" "r\x04" "Push\xFF" "Y\x24"
	  		               "r\x09" "right for\xFF" "Y\x3C" "r\x07" "Y/Cy/Mg\xFF"
	  		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	            	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	  		               "ES");
	*/
	strcpy(screens[34][0], "F\x02" "Y\x04" "C\x09" "Low toner\xFF" "Y\x1A" "C\x08" "reported\xFF"
	 		               "Y\x30" "C\x12" "Push here if other\xFF" "Y\x46" "C\x14" "printer supplies low\xFF" "ES");
	strcpy(screens[35][0], "F\x03" "Y\x12" "C\x0C" "Push here if\xFF" "Y\x38" "C\x0D" "you need help\xFF" "ES");
	strcpy(screens[36][0], "F\x03" "Y\x12" "C\x09" "Push here\xFF" "Y\x38" "C\x0B" "for service\xFF" "ES");
	for(s=0; s<37; s++)
		for(i=0; i<128; i++)
			if(screens[s][0][i] == 0xFF)
				screens[s][0][i] = 0x00;
}

/*
void Load_Demo_Screens(void)
{
	int i, s;
	strcpy(screens[0][0], "F\x03" "Y\x05" "C\x0B" "This is the\xFF" "Y\x20" "C\x09" "Spur demo\xFF"
	                	   "Y\x3D" "C\x1D" "push to begin\xFF" "ES");
	strcpy(screens[1][0], "F\x03" "Y\x10" "C\x0C" "Push here to\xFF" "Y\x32" "C\x0E" "report a fault\xFF" "ES");
	strcpy(screens[2][0], "F\x03" "Y\x05" "C\x0F" "Fault with this\xFF" "Y\x20" "C\x0D" "appliance has\xFF"
	                      "Y\x3D" "C\x0D" "been reported\xFF" "ES");
	strcpy(screens[3][0], "F\x03" "Y\x05" "C\x09" "Push here\xFF" "Y\x20" "C\x09" "for table\xFF" "Y\x3D" "C\x07" "service\xFF" "ES");
	strcpy(screens[4][0], "F\x03" "Y\x05" "C\x08" "A waiter\xFF" "Y\x20" "C\x0C" "will be with\xFF" "Y\x3D" "C\x08" "you soon\xFF" "ES");
	strcpy(screens[5][0], "F\x02" "X\x18" "Y\x0E" "T\x04" "Push\xFF" "X\x08" "Y\x24" "T\x08" "left for\xFF"
	                      "X\x20" "Y\x3C" "T\x04" "bill\xFF" "F\x02" "X\x7D" "Y\x0E" "T\x04" "Push\xFF" "X\x6D" "Y\x24"
	                      "T\x09" "right for\xFF" "X\x70" "Y\x3C" "T\x07" "service\xFF"
			              "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	          	  	  	  "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
			              "ES");
	strcpy(screens[6][0], "F\x02" "Y\2" "C\x0D" "Do you have a\xFF" "Y\x16" "C\x0D" "loyalty card?\xFF"
	 		               "F\x03" "X\x1C" "Y\x39" "T\x02" "No\xFF"
	                       "F\x03" "X\x7A" "Y\x39" "T\x03" "Yes\xFF"
	 		               "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
	 		               "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[7][0], "F\x03" "Y\x05" "C\x08" "A waiter\xFF" "Y\x20" "C\x0C" "will be with\xFF" "Y\x3D" "C\x08" "you soon\xFF" "ES");
	strcpy(screens[8][0], "F\x02" "Y\2" "C\x0B" "How was our\xFF" "Y\x16" "C\x0E" "service today?\xFF"
			              "X\x08" "Y\x31" "T\x08" "Push for\xFF"
			  	  	  	  "X\x1A" "Y\x47" "T\x03" "bad\xFF" "X\x6D" "Y\x31" "T\x08" "Push for\xFF" "X\x7E"
			              "Y\x47" "T\x04" "good\xFF" "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
			              "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[9][0], "F\x03" "Y\x10" "C\x0D" "Thank you for\xFF" "Y\x32" "C\x0D" "your feedback\xFF" "ES");
	strcpy(screens[10][0], "F\x02" "Y\2" "C\x0B" "How was our\xFF" "Y\x16" "C\x0E" "service today?\xFF"
			               "X\x08" "Y\x31" "T\x08" "Push for\xFF"
			  	  	   	   "X\x1A" "Y\x47" "T\x03" "bad\xFF" "X\x6D" "Y\x31" "T\x08" "Push for\xFF" "X\x7E"
			               "Y\x47" "T\x04" "good\xFF" "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
			               "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[11][0], "F\x02" "Y\x05" "C\x13" "Push here to report\xFF" "Y\x20" "C\x0E" "a problem with\xFF"
	  		               "Y\x3D" "C\x10" "these facilities\xFF" "ES");
	strcpy(screens[12][0], "F\x02" "Y\x05" "C\x0C" "Problem with\xFF" "Y\x20" "C\x10" "these facilities\xFF"
	    		           "Y\x3D" "C\x11" "has been reported\xFF" "ES");
	strcpy(screens[13][0], "F\x03" "Y\x05" "C\x09" "Push here\xFF" "Y\x20" "C\x0A" "to request\xFF"
	    		           "Y\x3D" "C\x06" "a taxi\xFF" "ES");
	strcpy(screens[14][0], "F\x02" "Y\x04" "C\x0E" "Taxi requested\xFF" "Y\x1A" "C\x11" "Taxi will be here\xFF"
			               "Y\x30" "C\x0F" "at approx 11:35\xFF" "Y\x46" "C\x14" "Push again to cancel\xFF" "ES");
	strcpy(screens[15][0], "F\x02" "Y\x05" "C\x0F" "Push to send an\xFF" "Y\x22" "C\x10" "AV technician to\xFF"
	    		           "Y\x3D" "C\x0E" "meeting room 1\xFF" "ES");
	strcpy(screens[16][0], "F\x03" "Y\x10" "C\x0D" "AV technician\xFF" "Y\x32" "C\x09" "requested\xFF" "ES");
	strcpy(screens[17][0], "F\x03" "Y\x05" "C\x05" "An AV\xFF" "Y\x20" "C\x0D" "technician is\xFF"
			               "Y\x3D" "C\x0C" "on their way\xFF" "ES");
	strcpy(screens[18][0], "F\x03" "Y\x10" "C\x0C" "Push here if\xFF" "Y\x32" "C\x09" "you're OK\xFF" "ES");
	strcpy(screens[19][0], "F\x03" "Y\x05" "C\x0C" "Thanks. I'll\xFF" "Y\x20" "C\x0D" "call you this\xFF" "Y\x3D" "C\x0A" "PM - Peter\xFF" "ES");
	strcpy(screens[20][0], "F\x02" "Y\x05" "C\x0C" "Push here to\xFF" "Y\x20" "C\x0C" "request more\xFF"
	      		           "Y\x3D" "C\x0F" "coffee capsules\xFF" "ES");
	strcpy(screens[21][0], "F\x02" "Y\x05" "C\x0B" "More coffee\xFF" "Y\x20" "C\x0D" "capsules have\xFF"
	      		           "Y\x3D" "C\x0E" "been requested\xFF" "ES");
	strcpy(screens[22][0], "F\x02" "Y\x05" "C\x0C" "Push here if\xFF" "Y\x20" "C\x10" "you want a carer\xFF"
	       		           "Y\x3D" "C\x0C" "to visit you\xFF" "ES");
	strcpy(screens[23][0], "F\x03" "Y\x10" "C\x0C" "Your request\xFF" "Y\x32" "C\x0D" "has been sent\xFF" "ES");
	strcpy(screens[24][0], "F\x02" "Y\x05" "C\x0C" "A carer will\xFF" "Y\x20" "C\x11" "visit you between\xFF"
	         		       "Y\x3D" "C\x0F" "11:00 and 12:00\xFF" "ES");
	strcpy(screens[25][0], "F\x02" "Y\2" "C\x0B" "Are you OK?\xFF" "Y\x16" "C\x11" "Please push below\xFF"
	 		               "F\x03" "X\x1C" "Y\x39" "T\x02" "No\xFF"
	                       "F\x03" "X\x7A" "Y\x39" "T\x03" "Yes\xFF"
	 		               "X\x02" "Y\x2D" "B\x5A\x32" "X\x03" "Y\x2E" "B\x5A\x32"
	 		               "X\x68" "Y\x2D" "B\x5A\x32" "X\x69" "Y\x2E" "B\x5A\x32" "ES");
	strcpy(screens[26][0], "F\x02" "Y\x05" "C\x0C" "Push here if\xFF" "Y\x20" "C\x10" "printer supplies\xFF"
	        		       "Y\x3D" "C\x07" "are low\xFF" "ES");
	strcpy(screens[27][0], "F\x02" "X\x18" "Y\x0E" "T\x04" "Push\xFF" "X\x08" "Y\x24" "T\x08" "here for\xFF"
	 		               "X\x16" "Y\x3C" "T\x05" "paper\xFF" "X\x7D" "Y\x0E" "T\x04" "Push\xFF" "X\x6D" "Y\x24"
	 		               "T\x08" "here for\xFF" "X\x7B" "Y\x3C" "T\x05" "toner\xFF"
	 		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	           	  	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	 		               "ES");
	strcpy(screens[28][0], "F\x02" "X\x18" "Y\x0E" "T\x04" "Push\xFF" "X\x08" "Y\x24" "T\x08" "here for\xFF"
	  		               "X\x16" "Y\x3C" "T\x05" "black\xFF" "X\x7D" "Y\x0E" "T\x04" "Push\xFF" "X\x6D" "Y\x24"
	  		               "T\x08" "here for\xFF" "X\x6D" "Y\x3C" "T\x07" "Y/Cy/Mg\xFF"
	  		               "X\x02" "Y\x02" "B\x5A\x5C" "X\x03" "Y\x03" "B\x58\x5A"
	            	  	   "X\x68" "Y\x02" "B\x5A\x5C" "X\x69" "Y\x03" "B\x58\x5A"
	  		               "ES");
	strcpy(screens[29][0], "F\x02" "Y\x04" "C\x0F" "Low black toner\xFF" "Y\x1A" "C\x08" "reported\xFF"
	 		               "Y\x30" "C\x12" "Push here if other\xFF" "Y\x46" "C\x14" "printer supplies low\xFF" "ES");
	strcpy(screens[30][0], "F\x03" "Y\x10" "C\x0C" "Push here if\xFF" "Y\x32" "C\x0D" "you need help\xFF" "ES");
	strcpy(screens[31][0], "F\x03" "Y\x10" "C\x0D" "I'm on my way\xFF" "Y\x32" "C\x07" "- Sarah\xFF" "ES");

	for(s=0; s<32; s++)
		for(i=0; i<128; i++)
			if(screens[s][0][i] == 0xFF)
				screens[s][0][i] = 0x00;
}
*/
