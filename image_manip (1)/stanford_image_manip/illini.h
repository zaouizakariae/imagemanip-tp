#ifndef ILLINI_H
#define ILLINI_H
#include "image.h"
class Illini : public Image
{
public:
    using Image::Image;

    Illini(string filename,int color1=11,int color2=216);

};

#endif // ILLINI_H
