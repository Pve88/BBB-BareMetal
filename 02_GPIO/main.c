//#include "start.h"

#include "GPIO.h"


#define TIME 500000
void _main (void)
{
	volatile unsigned int ra;
   GPIO_initPort(GPIO1);
   GPIO_initPin(GPIO1,21);
   GPIO_initPin(GPIO1,22);
   GPIO_initPin(GPIO1,23);
   GPIO_initPin(GPIO1,24);
   GPIO_setDirection(GPIO1,21,OUTPUT);
   GPIO_setDirection(GPIO1,22,OUTPUT);
   GPIO_setDirection(GPIO1,23,OUTPUT);
   GPIO_setDirection(GPIO1,24,OUTPUT);



	for(;;)
	{
      GPIO_setPin(GPIO1,21);
      GPIO_setPin(GPIO1,22);
      GPIO_setPin(GPIO1,23);
      GPIO_setPin(GPIO1,24);
		for(ra = 0; ra < TIME; ra ++);
      GPIO_clrPin(GPIO1,21);
      GPIO_clrPin(GPIO1,22);
      GPIO_clrPin(GPIO1,23);
      GPIO_clrPin(GPIO1,24);
		for(ra = 0; ra < TIME; ra ++);
	}
   return;
}



/*
 The MIT License (MIT)
 
 Copyright (c)  Alexis Marquet
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */