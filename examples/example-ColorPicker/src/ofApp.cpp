#include "ofApp.h"

/*
    Simple example to demonstrate the Color Picker Component.
    Select a color in the picker to change the color of the canvas.
    https://github.com/braitsch/ofxDatGui @braitsch
*/

void ofApp::setup()
{
// create and position the gui //
    gui = new ofxDatGui( ofxDatGuiAnchor::TOP_RIGHT );
    
// add a color picker (passing in a color is optional) //
    gui->addColorPicker("Color Picker", ofColor::fromHex(0xCECECE));
    
// and register a callback to listen for change events //
    gui->onColorPickerEvent(this, &ofApp::onColorPickerEvent);
}

void ofApp::onColorPickerEvent(ofxDatGuiColorPickerEvent e)
{
    ofSetBackgroundColor(e.color);
// seriously, could it possibly be any easier? ;-)
}

void ofApp::update()
{

}

void ofApp::draw()
{

}