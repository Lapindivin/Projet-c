#include "ti.h"

int main(){
    // unsigned char tab[256];
    // unsigned char tab2[256];
    // unsigned char tab3[256];
    // tImage im = ImLire("chien.pgm");
    // tImage im2;
    // tImage im3;
    // tImage im1;
    // tImage im4;
    // im1=Rotation(im);
    // RemplirTableInversion(tab);
    // RemplirTableGamma(0.4, tab2);
    // RemplirTableGamma(2.5, tab3);
    // im2=AppliquerTable(tab, im);
    // im3=AppliquerTable(tab2,im);
    // im4=AppliquerTable(tab3,im);
    // ImEcrire(im1,"chienr.pgm");
    // ImEcrire(im2,"chienn.pgm");
    // ImEcrire(im4,"chiens.pgm");
    // ImEcrire(im3,"chienc.pgm");
    // ImLiberer(&im);
    unsigned char tab[256];
    tImage im4;
    tImage im = ImLire("ch.pgm");
    RemplirTableInversion(tab);
    im4=AppliquerTable(tab,im);
    ImEcrire(im4,"vg.pgm");


    return 0;
}