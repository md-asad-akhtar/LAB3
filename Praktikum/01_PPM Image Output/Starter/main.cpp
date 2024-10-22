#include <iostream>
#include <fstream>

const unsigned int width = 100;
const unsigned int height = 100;

void printHeader(std::ofstream& ppmFile, const unsigned int width, const unsigned int height) {
    ppmFile << "P3" << std::endl; // Magic Number, we're doing a pixelmap here
    ppmFile << width << " " << height << std::endl;   // We need to specify width/height
    ppmFile << "255" << std::endl;    // Maximum value
}

struct pixel {
    double r,g,b;
};

// Sets the color of the pixel at x (horizontal) and y (vertical) in the screen
void setColor(pixel* screen, const unsigned int x, const unsigned int y, pixel color) {
    // TODO
}

void drawCircle(pixel* screen, const  int x_circle, const int y_circle, const unsigned int radius, pixel color) {
    // TODO
}

void printScreenToPPMFile(const pixel* screen, std::ofstream& ppmFile, const unsigned int width, const unsigned int height) {
    printHeader(ppmFile, width ,height);
    for( int y = 0; y < height; y++) {
        for( int x = 0; x < width; x++) {
            ppmFile << static_cast<int>(screen[y*width + x].r * 255.0) << " ";
            ppmFile << static_cast<int>(screen[y*width + x].g * 255.0) << " ";
            ppmFile << static_cast<int>(screen[y*width + x].b * 255.0) << " ";
        }
        ppmFile << "\n";
    }
}

int main() {

    pixel screen[width*height];

    std::ofstream ppmFile("output.ppm");


    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            setColor(screen, j, i, {1,1,0});
        }
    }
    drawCircle(screen, 20,80,5, {0,1,0});

    printScreenToPPMFile(screen, ppmFile, width, height);
    ppmFile.close();


    return 0;
}
