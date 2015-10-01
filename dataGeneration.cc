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
        to be done: rewrite the configuration in a more flexible way
        */

        if (argc != PARAMETER_NUM) {
            printf("Parameter number does not match.");
            return 1;
        }
        class_number = atoi(argv[1]);
        sample_size = atoi(argv[2]);
        dimension = atoi(argv[3]);
        range = atof(argv[4]);
        float *data = new float[sample_size*class_number][dimension];

        for (int class_idx = 0; class_idx < class_number; i++) {
            //
        }
    }
};

}//namespace mltest1

int main(int argc, char *argv[]) {
    mltest1::GenData task;
    int retn = task.Run(argc, argv);
    return retn;
}
