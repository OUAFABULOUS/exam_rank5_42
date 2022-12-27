#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget *>::iterator it_end = targets_arr.end();
    for (std::map<std::string, ATarget *>::iterator it_begin = targets_arr.begin(); it_begin != it_end; ++it_begin)
    {
        delete (it_begin->second);
    }
    targets_arr.clear();
}

    void    TargetGenerator::learnTargetType(ATarget *target){
        	if (target) {
		targets_arr.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
	}
    }
    void    TargetGenerator::forgetTargetType(std::string const &target_name) {
		std::map<std::string, ATarget *>::iterator it = targets_arr.find(target_name);
		if (it != targets_arr.end()){
			delete (it->second);
			targets_arr.erase(target_name);
		}
    }
    ATarget  *TargetGenerator::createTarget(std::string const &target_name) {
        std::map<std::string, ATarget *>::iterator it = targets_arr.find(target_name);
        if (it != targets_arr.end()) {
            return(targets_arr[target_name]);
        }
        return (NULL);
    }