/*****************************************************************************/
/*                                                                           */
/*				   xmalloc.h				     */
/*                                                                           */
/*			 Memory allocation subroutines			     */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2000	Ullrich von Bassewitz                                        */
/*              Wacholderweg 14                                              */
/*              D-70597 Stuttgart                                            */
/* EMail:       uz@musoftware.de                                             */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef XMALLOC_H
#define XMALLOC_H



#include <stddef.h>



/*****************************************************************************/
/*     	       	    		     Code				     */
/*****************************************************************************/



void* xmalloc (size_t Size);
/* Allocate memory, check for out of memory condition. Do some debugging */

void* xrealloc (void* P, size_t Size);
/* Reallocate a memory block, check for out of memory */

void xfree (const void* Block);
/* Free the block, do some debugging */

char* xstrdup (const char* S);
/* Duplicate a string on the heap. The function checks for out of memory */



/* End of xmalloc.h */

#endif



