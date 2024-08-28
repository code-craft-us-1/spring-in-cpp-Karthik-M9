#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
	Statistics::Stats var;
	
	var.average = 0;
	var.max = 0;
	var.min = 0;
	
	return var;

}
