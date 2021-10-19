#include "spotlight.h"
#include <math.h>

Spotlight::Spotlight(string filename,int x,int y):Image()
{
    int a;
    readFromFile(filename);
    for(unsigned i=0;i<width();i++)
        for(unsigned j=0;j<height();j++)
        {
            HSLAPixel &P=getPixel(i,j);
            a=sqrt((x-i)*(x-i)+(y-j)*(y-j));
            if(a>160){
                P.l=0.2*P.l;
            }else{
                P.l=(1-((a*0.5)/100))*P.l;
            }
        }
}
