# Arduino Code
On this folder you get Arduino for 2 type of transmitter: one with only a module for 16 input valve value and another with 2 module for 32 input.

There is the code for the receiver: a single receiver can drive 4 bistable valve, in the code of the receiver you can set the number assigned at the unit.
So with the first transmitter you have to assign 4 receivers in total and with the second transmitter you have to assign 8 receiver.

The heart of transmission is demanded to module from Ebyte [E32-868T30D](https://www.ebyte.com/en/product-view-news.html?id=189) on transmitter and [E32-T868T20D](https://www.ebyte.com/en/product-view-news.html?id=132) on receiver, for setting transmission channel and power consumtion you must they software that I attach on relative folder. You need to connect the mosule to a PC throw an FDTI serial adapter and set parameter like the picture below:
