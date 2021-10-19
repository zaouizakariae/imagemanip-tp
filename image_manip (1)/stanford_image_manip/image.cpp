#include "image.h"

Image::Image(string filename):PNG()
{
    readFromFile(filename);

}

void Image::lighten(double amount)
{
    for(unsigned i=0;i<width();i++)
        for(unsigned j=0;j<height();j++)
        {
            HSLAPixel &P=getPixel(i,j);
            P.l +=amount;
            P.l = (P.l>0) ? P.l :0;
            P.l = (P.l<=1) ? P.l:1;
        }
}
void Image::saturate(double amount)
{
    for(unsigned i=0;i<width();i++)
        for(unsigned j=0;j<height();j++)
        {
            HSLAPixel &P=getPixel(i,j);
            P.s +=amount;
            P.s = (P.s>0) ? P.s :0;
            P.s = (P.s<=1) ? P.s:1;

        }

}
void Image::rotateColor(double angle)
{
    for(unsigned i=0;i<width();i++)
        for(unsigned j=0;j<height();j++)
        {
            HSLAPixel &P=getPixel(i,j);
            P.h +=angle;
            while(P.h<0){
                P.h +=360;
            }
            while (P.h>360) {
                P.h -=360;
        }
        }

}
