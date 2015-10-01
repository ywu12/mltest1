#ifndef MLTEST1_UTILS_RANDOM_H_
#define MLTEST1_UTILS_RANDOM_H_

#include <cmath>
#include <cstdlib>

namespace mltest1 {
namespace random {

    void seed(unsigned s){
        srand(s);
    }


}//namespace random
}//namespace mltest1

#endif //MLTEST1_UTILS_RANDOM_H_
