#include "altimeter.h"


Adafruit_BMP3XX bmp; 

void bmpSetup() {

    if(!bmp.begin_SPI(BMP_CS, BMP_SCK, BMP_MISO, BMP_MOSI)) {
        Serial.println("Could not find a valid BMP3 sensor, check wiring!");
    }   
    bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
    bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
    bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
    bmp.setOutputDataRate(BMP3_ODR_50_HZ);


}

void loop() {

}



