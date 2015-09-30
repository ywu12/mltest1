#include <stdio>
#include <string>
#include "./utils/random.h"

namespace mltest1 {

class genData {

    /*
    classes: triangle, half circle, straight line
    */

    int dimension;
    int classNumber;
    int *sampleSize; //length = classNumber
    float range; // [0,range]
};

}//namespace mltest1

int main(int argc, char *argv[]) {
    mltest1::genData task;
    int retn = task.gen(argc, argv);
    return retn;
}
