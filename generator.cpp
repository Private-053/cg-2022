#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string.h>
#include <string>

struct Point{
    float x;
    float y;
    float z;
};

void write_point(Point p, std::ofstream &filename){
    filename << std::to_string(p.x) + "," +
                std::to_string(p.y) + "," +
                std::to_string(p.z) + ";";
}

void make_plane(int size, int divs, std::string filename){
    std::ofstream outfile(filename, std::ios::binary | std::ios::out);

    int num_points = divs*divs;
    int intervalo = size/divs;
    Point p;
    for(int i = 0; i<size;){
        for(int j = 0; j<size;){
            p.x = i;
            p.y = 0;
            p.z = j;
            write_point(p,outfile);

            p.x = i;
            p.y = 0;
            p.z = j + intervalo;
            write_point(p,outfile);

            p.x = i + intervalo;
            p.y = 0;
            p.z = j;
            write_point(p,outfile);

            j +=intervalo;
        }

        for(int k = intervalo; k<=size;){
            p.x = i;
            p.y = 0;
            p.z = k;
            write_point(p,outfile);

            p.x = i + intervalo;
            p.y = 0;
            p.z = k - intervalo;
            write_point(p,outfile);

            p.x = i + intervalo;
            p.y = 0;
            p.z = k;
            write_point(p,outfile);

            k += intervalo;

        }
        i+=intervalo;
    }

}



int main(int argc, char** argv){
    if(argc<=2){
        std::cout << "Not enough arguments" << std::endl;
        return 1;
    }

    std::string figura = argv[1];

    if(figura.compare("sphere")){

    }
    if(figura.compare("box")){

    }
    if(figura.compare("cone")) {
    }

    if(figura.compare("plane")) {
        make_plane(*argv[2],*argv[3],argv[4]);
    }

}