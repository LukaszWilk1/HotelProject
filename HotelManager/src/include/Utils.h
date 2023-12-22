#pragma once
#include <string>
#include <vector>
#define DATA_FOLDER(A) "data/" A


namespace hotel_klasowy {
	namespace Utils {
		std::vector<std::string> split(std::string s, std::string del);
	}
}