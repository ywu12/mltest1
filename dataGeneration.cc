#include <stdio>
#include <string>
#include <cstring>
#include "./utils/random.h"

#ifndef PARAMETER_NUM
#define PARAMETER_NUM 5
#endif // PARAMETER_NUM

namespace mltest1 {

class GenData {

    /*
    classes: triangle, half circle, straight line
    */

    int dimension;
    int class_number;
    int sample_size; //number of samples for each class
    float range; // [0,range]

    //default constructor
    GenData() {
        dimention = 100;
        class_number = 2;
        sample_size = 1000;
        range = 1.0;
    }

    int Run(int argc, char* argv){
        /*
        argv 1: class number, 2: sample size, 3: dimension, 4: range
        */

        if (argc != PARAMETER_NUM) {
            printf("Parameter number does not match.");
            return 1;
        }

        class_number = argv[1];
    }
};

}//namespace mltest1

int main(int argc, char *argv[]) {
    mltest1::GenData task;
    int retn = task.Run(argc, argv);
    return retn;
}
