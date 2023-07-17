#include "command.h"

#include <iostream>

using namespace MR;
using namespace App;


void run()
{
    std::cout << "Ciao! Come andiamo?" << std::endl;
}


void usage()
{
    AUTHOR = "Daljit";
    SYNOPSIS = "This is a test command";
    REFERENCES
        + "Test reference 1"
        + "Test reference 2";
    ARGUMENTS
        + Argument("input", "input image").type_image_in()
        + Argument("output", "output image").type_image_out();
}