#ifndef SPOTLIGHT_H
#define SPOTLIGHT_H
#include "image.h"
class Spotlight : public Image
{
public:
    using Image::Image;
    Spotlight(string filename,int x,int y);
};

#endif // SPOTLIGHT_H
