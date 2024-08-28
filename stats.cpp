#include "stats.h"
#include <algorithm>
#include <numeric>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
	Statistics::Stats var;
	
	var.max = *std::max_element(vec.begin(), vec.end());
	var.min = *std::min_element(vec.begin(), vec.end());

	var.average = std::accumulate(vec.begin(), vec.end(), 0.0 / vec.size());
	
	return var;

}
