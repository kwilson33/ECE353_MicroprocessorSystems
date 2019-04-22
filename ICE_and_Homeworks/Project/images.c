#include "images.h"
/* 
**  Image data for hotdog man
*/


/* Bitmap sizes*/
const uint8_t hotdog_width = 24;
const uint8_t hotdog_height = 32;
const uint8_t hotdog_Bitmap[] =
{
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x80, 0xff, 	/*Color of index 1*/
  0xff, 0x80, 0xff, 
  0xff, 0x7f, 0x7f, 
  0xfe, 0xff, 0x8f, 
  0xf8, 0xdd, 0x27, 
  0xf4, 0xaa, 0x3b, 
  0xec, 0xff, 0x3b, 
  0xec, 0xff, 0x3b, 
  0xec, 0x5d, 0x3b, 
  0xee, 0xa2, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0xbe, 0xbb, 
  0xee, 0x7f, 0x3b, 
  0xf6, 0x00, 0x3b, 
  0xf8, 0xdd, 0x87, 
  0xfe, 0xdd, 0xbf, 
  0xfe, 0xdd, 0xbf, 
  0xfe, 0xdd, 0xbf, 
  0xfe, 0xdd, 0xbf, 
  0xfe, 0xdd, 0xbf, 
  0xf8, 0x1c, 0x0f, 
  0xf8, 0x1c, 0x0f, 
  0xff, 0xff, 0xff, 
};    



const uint8_t space_shipBitmaps[];
const uint8_t space_shipWidthPages;
const uint8_t space_shipWidthPixels = 52;
const uint8_t space_shipHeightPixels =36;
const uint8_t space_shipBitmaps[] =
{
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //                                                     
	0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, //                       ########                      
	0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, //                     ############                    
	0x00, 0x00, 0x38, 0xFF, 0x80, 0x00, 0x00, //                   ###   #########                   
	0x00, 0x00, 0x60, 0xFF, 0xC0, 0x00, 0x00, //                  ##     ##########                  
	0x00, 0x00, 0x41, 0xFF, 0xE0, 0x00, 0x00, //                  #     ############                 
	0x00, 0x00, 0xC1, 0xFF, 0xE0, 0x00, 0x00, //                 ##     ############                 
	0x00, 0x00, 0x83, 0xFF, 0xF0, 0x00, 0x00, //                 #     ##############                
	0x00, 0x01, 0x83, 0xFF, 0xF0, 0x00, 0x00, //                ##     ##############                
	0x00, 0x05, 0x83, 0xFF, 0xF2, 0x00, 0x00, //              # ##     ##############  #             
	0x00, 0x3D, 0x83, 0xFF, 0xF7, 0x80, 0x00, //           #### ##     ############## ####           
	0x00, 0xFC, 0x83, 0xFF, 0xF7, 0xE0, 0x00, //         ######  #     ############## ######         
	0x01, 0xFC, 0xC3, 0xFF, 0xE7, 0xF8, 0x00, //        #######  ##    #############  ########       
	0x07, 0xFE, 0x63, 0xFF, 0xCF, 0xFE, 0x00, //      ##########  ##   ############  ###########     
	0x0F, 0xFF, 0x3F, 0xFF, 0x8F, 0xFF, 0x00, //     ############  ###############   ############    
	0x1F, 0xFF, 0x8F, 0xFE, 0x1F, 0xFF, 0x80, //    ##############   ###########    ##############   
	0x3C, 0x7F, 0xC0, 0x00, 0x7F, 0xC7, 0xC0, //   ####   #########               #########   #####  
	0x7C, 0x3F, 0xF0, 0x03, 0xFF, 0x87, 0xE0, //  #####    ##########          ###########    ###### 
	0x3E, 0x3F, 0xFF, 0xFF, 0xFF, 0x87, 0xC0, //   #####   ###############################    #####  
	0x1F, 0xF8, 0x7F, 0xFF, 0x87, 0xFF, 0x80, //    ##########    ################    ############   
	0x0F, 0xFC, 0x3E, 0x1F, 0x87, 0xFF, 0x00, //     ##########    #####    ######    ###########    
	0x07, 0xFE, 0x7E, 0x1F, 0x8F, 0xFE, 0x00, //      ##########  ######    ######   ###########     
	0x01, 0xFF, 0xFF, 0x1F, 0xFF, 0xFC, 0x00, //        #################   ###################      
	0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, //         #####################################       
	0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, //           ##################################        
	0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, //            ###############################          
	0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, //              ###########################            
	0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, //              ###########################            
	0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, //            ##############################           
	0x00, 0x1F, 0x81, 0xFE, 0x1F, 0xC0, 0x00, //            ######      ########    #######          
	0x00, 0x1F, 0x00, 0x00, 0x07, 0x80, 0x00, //            #####                     ####           
	0x00, 0x0E, 0x00, 0x00, 0x03, 0x80, 0x00, //             ###                       ###           
	0x00, 0x0C, 0x00, 0x00, 0x03, 0x80, 0x00, //             ##                        ###           
	0x00, 0x0C, 0x00, 0x00, 0x01, 0x80, 0x00, //             ##                         ##           
	0x00, 0x0C, 0x00, 0x00, 0x01, 0x80, 0x00, //             ##                         ##           
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //                                                     
};


