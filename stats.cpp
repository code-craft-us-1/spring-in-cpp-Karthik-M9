#include "stats.h"
#include <algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
	Statistics::Stats var;
	
	var.max = *std::max_element(vec.begin(), vec.end());
	var.min = *std::min_element(vec.begin(), vec.end());

	float sum;
	count = 0;
	for (auto itr:vec)
	{
		sum += itr;
		count++;
	}


	var.average = sum/count;
	
	return var;

}
