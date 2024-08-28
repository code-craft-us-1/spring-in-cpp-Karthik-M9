#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    
    struct Stats{
        float average = 0;
        float max = 0;
        float min = 0;

    };

    Stats ComputeStatistics(const std::vector<float>& );
}
