//
//  ofxFastNoise.cpp
//
//  Created by Shoya Dozono on 17/01/2020.
//
//

#include "ofxFastNoise.h"

FN_DECIMAL ofxFastNoise::GetValue( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetValue( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetValue( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetValue( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetValueFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetValueFractal( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetValueFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetValueFractal( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetPerlin( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetPerlin( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetPerlin( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetPerlin( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetPerlinFractal( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetPerlinFractal( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetSimplex( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetSimplex( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetSimplex( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetSimplex( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetSimplexFractal( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetSimplexFractal( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetCellular( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetCellular( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetCellular( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetCellular( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetWhiteNoise( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetWhiteNoise( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetCubic( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetCubic( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetCubic( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetCubic( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetCubicFractal( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetCubicFractal( xx, yy, zz );
}

FN_DECIMAL ofxFastNoise::GetNoise( FN_DECIMAL x, FN_DECIMAL y ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    return FastNoise::GetNoise( xx, yy );
}

FN_DECIMAL ofxFastNoise::GetNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    const FN_DECIMAL xx = (x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (z + offset.z) * frequency.z;
    return FastNoise::GetNoise( xx, yy, zz );
}


