#include <stdio>
#include <string>
#include "./utils/random.h"

namespace mltest1 {

class GenData {

    /*
    classes: triangle, half circle, straight line
    */

    int dimension;
    int classNumber;
    int *sampleSize; //length = classNumber
    float range; // [0,range]

    //default constructor
    GenData () {
        dimention = 100;
        classNumber = 2;
        sampleSize = new int[2];
        range = 1.0;
    }
};

}//namespace mltest1

int main(int argc, char *argv[]) {
    mltest1::GenData task;
    int retn = task.gen(argc, argv);
    return retn;
}
