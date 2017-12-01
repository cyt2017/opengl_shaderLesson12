#ifndef MYSHADERMOSAIC_H
#define MYSHADERMOSAIC_H

#include "tool/programid.h"

class MyShaderMosaic : public ProgramId
{
public:
    typedef int attribute;
    typedef int uniform;
public:
    uniform     _MVP;
    uniform     _texture;
    uniform     _size;
    attribute   _position;
public:
    MyShaderMosaic();

    virtual bool    initialize();
    virtual void    begin();
    virtual void    end();
};

#endif // MYSHADERMOSAIC_H
