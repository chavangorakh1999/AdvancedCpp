//
//  main.cpp
//  RGBA
//
//  Created by Gorakh Chavan on 29/05/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

//#include <fstream>
//using namespace std;
//
//const int width =255,height=255;
//int main()
//{ofstream img("picture.ppm");
//    img<<"P3"<<endl;
//    img<<width<<" "<<height<<endl;
//    img<<"255"<<endl;
//
//    for(int y =0;y<height;y++)
//    {
//        for(int x=0;x<width;x++)
//        {
//            int r=x%255;
//            int g=y%255;
//            int b=y*x%255;
//            img<<r<<" "<<g<<" "<<b<<endl;
//        }
//    }
//    system("open picture.ppm");
//    return 0;
//}
#include <iostream>
#include <pngwriter.h>
#include <string>
  
// Function to generate PNG image
void generate_PNG(int const width,
                  int const height,
                  std::string filepath)
{
  
    // Print the filepath
    cout << endl
         << "Filepath: "
         << filepath.c_str();
  
    // Generate the flag
    pngwriter flag{ width, height, 0,
                    filepath.data() };
  
    // Calculate sizes
    int const size = width / 3;
  
    // Fill the squares
    flag.filledsquare(0, 0, size,
                      2 * size, 0,
                      0, 65535);
  
    flag.filledsquare(size, 0, 2 * size,
                      2 * size, 0,
                      65535, 65535);
  
    flag.filledsquare(2 * size, 0,
                      3 * size, 2 * size,
                      65535, 0, 65535);
  
    // Close the flag
    flag.close();
}
  
// Driver code
int main()
{
    // Given width and height
    int width = 300, height = 200;
  
    // Filepath
    std::string filepath;
  
    // Function call to generate PNG image
    generate_PNG(width, height, filepath);
  
    return 0;
} 
