#include "myshadermosaic.h"

MyShaderMosaic::MyShaderMosaic()
{
    _MVP        =   -1;
    _texture    =   -1;
    _size       =   -1;
    _position   =   -1;
}
bool MyShaderMosaic::initialize()
{
    const char* vs  =
    {
        "uniform    mat4    _mvp;"
        "attribute  vec3    _position;"
        "void main()"
        "{"
            "gl_Position    =	_mvp * vec4(_position,1.0);"
        "}"
    };
    const char* ps  =
    {
        "precision  lowp        float; "
        "uniform    sampler2D	_texture;"
        "uniform    vec2	    _size;"
        "void main()"
        "{"
            "vec2  fc = vec2(gl_FragCoord.s,_size.y - gl_FragCoord.t);"
            "vec2  tFlag = vec2(1.0/_size.s,1.0/_size.t);"
            "float nCoord = 1.0/64.0;"
            "float sCoord = mod(fc.s,8.0);"
            "float tCoord = mod(fc.t,8.0);"
            "vec4    destColor = vec4(0.0);"
            "for(float i=0;i<=7.0;i+=1.0)"
            "{"
                "for(float j=0;j<=7.0;j+=1.0)"
                "{"
                    "destColor = texture2D(_texture,(fc+vec2(x-sCoord,y-tCoord))*tFlag);"
                "}"
            "}"
            "gl_FragColor = destColor* nCoord;"
        "}"
    };
    bool    res =   createProgram(vs,ps);
    if(res)
    {
        _position   =   glGetAttribLocation(_programId,"_position");
        _MVP        =   glGetUniformLocation(_programId,"_MVP");
        _texture    =   glGetUniformLocation(_programId,"_texture");
        _size       =   glGetUniformLocation(_programId,"_size");
    }
    return  res;
}

void MyShaderMosaic::begin()
{
    glUseProgram(_programId);
    //!在显卡里面使用的局部变量，在使用时是需要进行使能和关闭的
    glEnableVertexAttribArray(_position );
}

void MyShaderMosaic::end()
{
    glDisableVertexAttribArray(_position );
    glUseProgram(0);
}
