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

void make_box(int size, int divs, std::string filename){
    std::ofstream outfile(filename, std::ios::binary | std::ios::out);

    int intervalo = size/divs;
    Point p;
    //1 e 2
    for(int i=0; i<size;){
        //plano da frente
        for(int k = 0; k<size;){
            p.x = k;
            p.y = i;
            p.z = 0;
            write_point(p,outfile);

            p.x = k + intervalo;
            p.y = i;
            p.z = 0;
            write_point(p,outfile);

            p.x = k;
            p.y = i + intervalo;
            p.z = 0;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = q;
            p.y = i;
            p.z = 0;
            write_point(p,outfile);

            p.x = q;
            p.y = i + intervalo;
            p.z = 0;
            write_point(p,outfile);

            p.x = q - intervalo;
            p.y = i + intervalo;
            p.z = 0;
            write_point(p,outfile);

            q+=intervalo;
        }
        //plano de trás
        for(int k = 0; k<size;){
            p.x = k;
            p.y = i;
            p.z = size;
            write_point(p,outfile);

            p.x = k + intervalo;
            p.y = i;
            p.z = size;
            write_point(p,outfile);

            p.x = k;
            p.y = i + intervalo;
            p.z = size;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = q;
            p.y = i;
            p.z = size;
            write_point(p,outfile);

            p.x = q;
            p.y = i + intervalo;
            p.z = size;
            write_point(p,outfile);

            p.x = q - intervalo;
            p.y = i + intervalo;
            p.z = size;
            write_point(p,outfile);

            q+=intervalo;
        }
    }
    //3 e 4
    for(int i=0; i<size;){
        //plano de baixo
        for(int k = 0; k<size;){
            p.x = k;
            p.y = 0;
            p.z = i;
            write_point(p,outfile);

            p.x = k + intervalo;
            p.y = 0;
            p.z = i;
            write_point(p,outfile);

            p.x = k;
            p.y = 0;
            p.z = i + intervalo;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = q;
            p.y = 0;
            p.z = i;
            write_point(p,outfile);

            p.x = q;
            p.y = 0;
            p.z = i +intervalo;
            write_point(p,outfile);

            p.x = q - intervalo;
            p.y = 0;
            p.z = i + intervalo;
            write_point(p,outfile);

            q+=intervalo;
        }
        //plano de cima
        for(int k = 0; k<size;){
            p.x = k;
            p.y = size;
            p.z = i;
            write_point(p,outfile);

            p.x = k + intervalo;
            p.y = size;
            p.z = i;
            write_point(p,outfile);

            p.x = k;
            p.y = size;
            p.z = i + intervalo;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = q;
            p.y = size;
            p.z = i;
            write_point(p,outfile);

            p.x = q;
            p.y = size;
            p.z = i + intervalo;
            write_point(p,outfile);

            p.x = q - intervalo;
            p.y = size;
            p.z = i + intervalo;
            write_point(p,outfile);

            q+=intervalo;
        }
    }
    //5 e 6
    for(int i=0; i<size;){
        //plano do lado
        for(int k = 0; k<size;){
            p.x = 0;
            p.y = k;
            p.z = i;
            write_point(p,outfile);

            p.x = 0;
            p.y = k + intervalo;
            p.z = i;
            write_point(p,outfile);

            p.x = 0;
            p.y = k;
            p.z = i + intervalo;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = 0;
            p.y = q;
            p.z = i;
            write_point(p,outfile);

            p.x = 0;
            p.y = q;
            p.z = i +intervalo;
            write_point(p,outfile);

            p.x = 0;
            p.y = q - intervalo;
            p.z = i + intervalo;
            write_point(p,outfile);

            q+=intervalo;
        }
        //plano de lado
        for(int k = 0; k<size;){
            p.x = size;
            p.y = k;
            p.z = i;
            write_point(p,outfile);

            p.x = size;
            p.y = k + intervalo;
            p.z = i;
            write_point(p,outfile);

            p.x = size;
            p.y = k;
            p.z = i + intervalo;
            write_point(p,outfile);

            k+=intervalo;
        }
        for(int q=intervalo;q<=size;){
            p.x = size;
            p.y = q;
            p.z = i;
            write_point(p,outfile);

            p.x = size;
            p.y = q;
            p.z = i + intervalo;
            write_point(p,outfile);

            p.x = size;
            p.y = q - intervalo;
            p.z = i + intervalo;
            write_point(p,outfile);

            q+=intervalo;
        }
    }
}

void make_plane(int size, int divs, std::string filename){
    std::ofstream outfile(filename, std::ios::binary | std::ios::out);

    std::cout << size << std::endl;
    std::cout << divs << std::endl;

    int intervalo = size/divs;
    Point p;
    for(int i = 0; i<size;i+=intervalo){
        for(int j = 0; j<size; j +=intervalo){
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
        }

        for(int k = intervalo; k<=size ;k += intervalo){
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

        }
    }

}



int main(int argc, char** argv){
    if(argc<=2){
        std::cout << "Not enough arguments" << std::endl;
        return 1;
    }

    std::string figura = argv[1];

    if((figura.compare("sphere"))==0){
    }
    if((figura.compare("box"))==0){
    }
    if((figura.compare("cone"))==0) {
    }
    if((figura.compare("plane"))==0) {
        std::cout << "sheesh" << std::endl;
        if (argc<=3) {
            std::cout << "Not enough arguments." << std::endl;
        }
        float size = std::stof(argv[2]);
        float slices = std::stof(argv[3]);


        make_plane(size,slices,argv[4]);
    }

}