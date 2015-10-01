#include <cstdio>
#include <string>
#include <cstring>
#include "./utils/random.h"

#ifndef PARAMETER_NUM
#define PARAMETER_NUM 5
#endif // PARAMETER_NUM

namespace mltest1 {

class GenData {

    /*
    classes: triangle, half circle, straight line, pulse ...
    */

    int dimension;
    int class_number;
    int sample_size; //number of samples for each class
    double range; // [0,range]
    std::string filename;

    //default constructor
    GenData() {
        dimention = 100;
        class_number = 2;
        sample_size = 1000;
        range = 1.0;
        filename = "samples.csv";
    }

    int Run(int argc, char* argv){
        /*
        argv 1: class number, 2: sample size, 3: dimension, 4: range, 5: filename
        to be done: rewrite the configuration in a more flexible way
        */

        if (argc != PARAMETER_NUM) {
            printf("Parameter number does not match.\n");
            return 1;
        }
        class_number = atoi(argv[1]);
        sample_size = atoi(argv[2]);
        dimension = atoi(argv[3]);
        range = atof(argv[4]);
        filename = std::string(argv[5]);
        double *data = new double[sample_size*class_number*dimension];

        //generate
        int sample_idx = 0;
        for (int class_idx = 0; class_idx < class_number; i++) {
            //
            for (int i = 0; i < sample_size; i++){
                GenSample(data, sample_idx, dimension, class_idx, range);
                sample_idx += 1;
            }
        }
        //write

        delete [] data;
        return 0;
    }

    void GenSample(double *data, int sample_idx, int dimension, int class_idx, double range){
        //generate one sample and save it from data[sample_idx*dimension]
    }
};

}//namespace mltest1

int main(int argc, char *argv[]) {
    mltest1::GenData task;
    int retn = task.Run(argc, argv);
    return retn;
}
