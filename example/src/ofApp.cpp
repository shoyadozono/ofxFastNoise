#include "ofMain.h"
#include "ofxFastNoise.h"
#include "ofxImGui.h"

class ofApp : public ofBaseApp
{
public:
    ofImage image;
    int width { 512 };
    int height { 512 };
    
    ofxFastNoise noise;
    bool bAutoUpdate { true };
    
    ofxImGui::Gui gui;
    
    void setup()
    {
        image.allocate( width, height, OF_IMAGE_COLOR );
        
        gui.setup();
    }
    
    void generate()
    {
        auto & pixels = image.getPixels();
        
        for ( int x=0; x < width; x++ )
        {
            for ( int y=0; y < height; y++ )
            {
                const float val = noise.GetNoise( glm::vec2( x, y ) );
                
                ofColor col = ofColor( val * 255 );
                pixels.setColor( x, y, col );
            }
        }
        
        image.update();
    }
    
    void update()
    {
        if ( bAutoUpdate )
        {
            generate();
        }
        
        ofSetWindowTitle( "fps: " + ofToString( ofGetFrameRate(), 1 ) );
    }
    
    void draw()
    {
        // draw noise 2d
        ofPushMatrix();
        ofTranslate( ofGetWidth()/2, ofGetHeight()/2 );
        ofTranslate( -image.getWidth()/2, -image.getHeight()/2 );
        image.draw( 0, 0 );
        ofPopMatrix();
        
        // draw gui
        drawGui();
    }
    
    void drawGui()
    {
        gui.begin();
        {
            ImGui::Begin( "Main Control" );
            {
                if ( ImGui::Button( "GENERATE" ) )
                {
                    generate();
                }
                
                ImGui::Checkbox( "Auto Update", &bAutoUpdate );
                
                ImGui::NewLine();
                
                // Noise Type
                {
                    vector < string > types = {
                        "Value",
                        "ValueFractal",
                        "Perlin",
                        "PerlinFractal",
                        "Simplex",
                        "SimplexFractal",
                        "Cellular",
                        "WhiteNoise",
                        "Cubic",
                        "CubicFractal"
                    };
                    static int current = noise.GetNoiseType();
                    if ( ofxImGui::VectorListBox( "Noise Type", &current, types ) )
                    {
                        if ( current == 0 ) noise.SetNoiseType( ofxFastNoise::NoiseType::Value );
                        if ( current == 1 ) noise.SetNoiseType( ofxFastNoise::NoiseType::ValueFractal );
                        if ( current == 2 ) noise.SetNoiseType( ofxFastNoise::NoiseType::Perlin );
                        if ( current == 3 ) noise.SetNoiseType( ofxFastNoise::NoiseType::PerlinFractal );
                        if ( current == 4 ) noise.SetNoiseType( ofxFastNoise::NoiseType::Simplex );
                        if ( current == 5 ) noise.SetNoiseType( ofxFastNoise::NoiseType::SimplexFractal );
                        if ( current == 6 ) noise.SetNoiseType( ofxFastNoise::NoiseType::Cellular );
                        if ( current == 7 ) noise.SetNoiseType( ofxFastNoise::NoiseType::WhiteNoise );
                        if ( current == 8 ) noise.SetNoiseType( ofxFastNoise::NoiseType::Cubic );
                        if ( current == 9 ) noise.SetNoiseType( ofxFastNoise::NoiseType::CubicFractal );
                    }
                }
                
                // Interp
                {
                    vector < string > types = {
                        "Linear",
                        "Hermite",
                        "Quintic"
                    };
                    static int current = noise.GetInterp();
                    if ( ofxImGui::VectorListBox( "Interp", &current, types ) )
                    {
                        if ( current == 0 ) noise.SetInterp( ofxFastNoise::Interp::Linear );
                        if ( current == 1 ) noise.SetInterp( ofxFastNoise::Interp::Hermite );
                        if ( current == 2 ) noise.SetInterp( ofxFastNoise::Interp::Quintic );
                    }
                }
                
                ImGui::NewLine();
                
                static int seed = noise.GetSeed();
                if ( ImGui::SliderInt( "Seed", &seed, 0, 10000 ) )
                {
                    noise.SetSeed( seed );
                }
                
                ImGui::SliderFloat3( "Frequency", noise.GetFrequency().getPtr(), 0, 1 );
                ImGui::SliderFloat3( "Offset", noise.GetOffset().getPtr(), -1000, 1000 );
                
                ImGui::NewLine();
                
                // Fractal Type
                {
                    vector < string > types = {
                        "FBM",
                        "Billow",
                        "RigidMulti"
                    };
                    static int current = noise.GetFractalType();
                    if ( ofxImGui::VectorListBox( "Fractal Type", &current, types ) )
                    {
                        if ( current == 0 ) noise.SetFractalType( ofxFastNoise::FractalType::FBM );
                        if ( current == 1 ) noise.SetFractalType( ofxFastNoise::FractalType::Billow );
                        if ( current == 2 ) noise.SetFractalType( ofxFastNoise::FractalType::RigidMulti );
                    }
                }
                
                static int fractalOctaves = noise.GetFractalOctaves();
                if ( ImGui::SliderInt( "Fractal Octaves", &fractalOctaves, 0, 10 ) )
                {
                    noise.SetFractalOctaves( fractalOctaves );
                }
                
                static float fractalGain = noise.GetFractalGain();
                if ( ImGui::SliderFloat( "Fractal Gain", &fractalGain, 0, 1 ) )
                {
                    noise.SetFractalGain( fractalGain );
                }
                
                static float fractalLacunarity = noise.GetFractalLacunarity();
                if ( ImGui::SliderFloat( "Fractal Lacunarity", &fractalLacunarity, 0, 5 ) )
                {
                    noise.SetFractalLacunarity( fractalLacunarity );
                }
                
                ImGui::NewLine();
                
                // Cellular Distance Function
                {
                    vector < string > types = {
                        "Euclidean",
                        "Manhattan",
                        "Natural"
                    };
                    static int current = noise.GetCellularDistanceFunction();
                    if ( ofxImGui::VectorListBox( "Cellular Distance Function", &current, types ) )
                    {
                        if ( current == 0 ) noise.SetCellularDistanceFunction( ofxFastNoise::CellularDistanceFunction::Euclidean );
                        if ( current == 1 ) noise.SetCellularDistanceFunction( ofxFastNoise::CellularDistanceFunction::Manhattan );
                        if ( current == 2 ) noise.SetCellularDistanceFunction( ofxFastNoise::CellularDistanceFunction::Natural );
                    }
                }
                
                // Cellular Return Type
                {
                    vector < string > types = {
                        "CellValue",
                        "NoiseLookup",
                        "Distance",
                        "Distance2",
                        "Distance2Add",
                        "Distance2Sub",
                        "Distance2Mul",
                        "Distance2Div"
                    };
                    static int current = noise.GetCellularReturnType();
                    if ( ofxImGui::VectorListBox( "Cellular Return Type", &current, types ) )
                    {
                        if ( current == 0 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::CellValue );
                        if ( current == 1 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::NoiseLookup );
                        if ( current == 2 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance );
                        if ( current == 3 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance2 );
                        if ( current == 4 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance2Add );
                        if ( current == 5 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance2Sub );
                        if ( current == 6 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance2Mul );
                        if ( current == 7 ) noise.SetCellularReturnType( ofxFastNoise::CellularReturnType::Distance2Div );
                    }
                }
                
                static float cellularJitter = noise.GetCellularJitter();
                if ( ImGui::SliderFloat( "Cellular Jitter", &cellularJitter, 0, 1 ) )
                {
                    noise.SetCellularJitter( cellularJitter );
                }
            }
            ImGui::End();
        }
        gui.end();
    }
    
    void keyPressed(int key)
    {
        
    }
    
};


int main(int argc, const char** argv)
{
    ofSetupOpenGL( 1280, 720, OF_WINDOW );
    ofRunApp( new ofApp );
    return 0;
}
