//
//  ofxFastNoise.h
//
//  Created by Shoya Dozono on 16/01/2020.
//

#pragma once

#include "FastNoise.h"
#include "ofVectorMath.h"

class ofxFastNoise : public FastNoise
{
public:
    ofxFastNoise()
    {
        ofxFastNoise::SetFrequency( 0.1 );
        FastNoise::SetFrequency( 1 );
        SetOffset( 0 );
    }
    
    FN_DECIMAL GetValue( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetValue( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetValue( T v ) const
    {
        return ofxFastNoise::GetValue( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetValueFractal( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetValueFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetValueFractal( T v ) const
    {
        return ofxFastNoise::GetValueFractal( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetPerlin( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetPerlin( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetPerlin( T v ) const
    {
        return ofxFastNoise::GetPerlin( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetPerlinFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetPerlinFractal( T v ) const
    {
        return ofxFastNoise::GetPerlinFractal( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetSimplex( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetSimplex( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetSimplex( T v ) const
    {
        return ofxFastNoise::GetSimplex( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetSimplexFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetSimplexFractal( T v ) const
    {
        return ofxFastNoise::GetSimplexFractal( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetCellular( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetCellular( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetCellular( T v ) const
    {
        return ofxFastNoise::GetCellular( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetWhiteNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetWhiteNoise( T v ) const
    {
        return ofxFastNoise::GetWhiteNoise( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetCubic( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetCubic( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetCubic( T v ) const
    {
        return ofxFastNoise::GetCubic( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetCubicFractal( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetCubicFractal( T v ) const
    {
        return ofxFastNoise::GetCubicFractal( v.x, v.y, v.z );
    }
    
    FN_DECIMAL GetNoise( FN_DECIMAL x, FN_DECIMAL y ) const;
    FN_DECIMAL GetNoise( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z ) const;
    
    template < typename T >
    FN_DECIMAL GetNoise( T v ) const
    {
        return ofxFastNoise::GetNoise( v.x, v.y, v.z );
    }
    
    template < typename T >
    T GetGradientPerturb()
    {
        T v;
        FastNoise::SetFrequency( frequency.x );
        FastNoise::GradientPerturb( v.x, v.y, v.z );
        FastNoise::SetFrequency( 1 );
        return v;
    }
    
    void SetOffset( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z, FN_DECIMAL w )
    {
        offset = ofVec4f( x, y, z, w );
    }
    void SetOffset( ofVec4f v ) { ofxFastNoise:SetOffset( v.x, v.y, v.z, v.w ); }
    void SetOffset( FN_DECIMAL amount )
    {
        ofxFastNoise:SetOffset( amount, amount, amount, amount );
    }
    ofVec4f & GetOffset() { return offset; }
    
    void SetFrequency( FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z, FN_DECIMAL w = 0 )
    {
        frequency = ofVec4f( x, y, z, w );
    }
    void SetFrequency( ofVec4f v ) { ofxFastNoise::SetFrequency( v.x, v.y, v.z, v.w ); }
    void SetFrequency( FN_DECIMAL amount )
    {
        ofxFastNoise::SetFrequency( amount, amount, amount, amount );
    }
    
    ofVec4f & GetFrequency() { return frequency; }
    
private:
    ofVec4f offset;
    ofVec4f frequency;
    
};

// ofDefaultVec2
template<> FN_DECIMAL ofxFastNoise::GetValue< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetValue( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetValueFractal< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetValueFractal( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetPerlin< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetPerlin( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetPerlinFractal< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetPerlinFractal( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetSimplex< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetSimplex( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetSimplexFractal< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetSimplexFractal( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetCellular< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetCellular( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetWhiteNoise< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetWhiteNoise( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetCubic< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetCubic( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetCubicFractal< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return FastNoise::GetCubicFractal( xx, yy );
}

template<> FN_DECIMAL ofxFastNoise::GetNoise< ofDefaultVec2 >( ofDefaultVec2 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    return ofxFastNoise::GetNoise( xx, yy );
}

template<> ofDefaultVec2 ofxFastNoise::GetGradientPerturb< ofDefaultVec2 >()
{
    ofDefaultVec2 v;
    FastNoise::SetFrequency( frequency.x );
    FastNoise::GradientPerturb( v.x, v.y );
    FastNoise::SetFrequency( 1 );
    return v;
}

// ofDefaultVec4
template<> FN_DECIMAL ofxFastNoise::GetSimplex< ofDefaultVec4 >( ofDefaultVec4 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (v.z + offset.z) * frequency.z;
    const FN_DECIMAL ww = (v.w + offset.w) * frequency.w;
    return FastNoise::GetSimplex( xx, yy, zz, ww );
}

template<> FN_DECIMAL ofxFastNoise::GetWhiteNoise< ofDefaultVec4 >( ofDefaultVec4 v ) const
{
    const FN_DECIMAL xx = (v.x + offset.x) * frequency.x;
    const FN_DECIMAL yy = (v.y + offset.y) * frequency.y;
    const FN_DECIMAL zz = (v.z + offset.z) * frequency.z;
    const FN_DECIMAL ww = (v.w + offset.w) * frequency.w;
    return FastNoise::GetWhiteNoise( xx, yy, zz, ww );
}

