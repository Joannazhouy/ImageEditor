#include "gridColorPicker.h"

gridColorPicker::gridColorPicker(HSLAPixel gridColor, int gridSpacing)
{
    
color = gridColor;
spacing = gridSpacing;

}

HSLAPixel gridColorPicker::operator()(int x, int y)
{

if (x%spacing == 0 || y%spacing == 0){
    return color;
} else {
    HSLAPixel white;
    white.l = 1;
    white.h = 0;
    white.s = 0;
    
    return white;
}
}
