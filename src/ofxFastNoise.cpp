//
//  ofxFastNoise.cpp
//
//  Created by Shoya Dozono on 17/01/2020.
//
//

#include "ofxFastNoise.h"

FN_DECIMAL ofxFastNoise::GetValue( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetValue( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetValue( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetValue( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetValueFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetValueFractal( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetValueFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetValueFractal( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetPerlin( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetPerlin( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetPerlin( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetPerlin( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetPerlinFractal( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetPerlinFractal( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetSimplex( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetSimplex( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetSimplex( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetSimplex( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetSimplexFractal( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetSimplexFractal( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetCellular( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetCellular( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetCellular( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetCellular( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetWhiteNoise( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetWhiteNoise( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetCubic( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetCubic( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetCubic( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetCubic( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetCubicFractal( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetCubicFractal( getX( x ), getY( y ), getZ( z ) );
}

FN_DECIMAL ofxFastNoise::GetNoise( FN_DECIMAL x, FN_DECIMAL y ) const
{
    return FastNoise::GetNoise( getX( x ), getY( y ) );
}

FN_DECIMAL ofxFastNoise::GetNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const
{
    return FastNoise::GetNoise( getX( x ), getY( y ), getZ( z ) );
}


