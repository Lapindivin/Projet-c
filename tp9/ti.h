#ifndef TI_H
#define TI_H

#include <stdio.h>
#include <stdlib.h>
#include "image.h"

extern tImage Rotation(tImage Im);

extern tImage AppliquerTable(unsigned char Table[256], tImage Im);

extern void RemplirTableInversion(unsigned char Table[256]);

extern void RemplirTableGamma(double Gamma, unsigned char Table[256]);

#endif /*MODULE_H*/
