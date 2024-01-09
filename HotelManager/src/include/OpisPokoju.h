#pragma once
#include <string>
#include <yaml-cpp/yaml.h>

using namespace std;

namespace hotel_klasowy {
	class OpisPokoju {
	public:
		OpisPokoju() : _id(-1),  _nazwa(""), _opis(""), _maxOsob(0), _cenaZaDobe(0.0) {}
		OpisPokoju(int id, string n, string o, int m, float c) : _id(id), _nazwa(n), _opis(o), _maxOsob(m), _cenaZaDobe(c) {}
        int getId() const {
            return _id;
        }
        string getNazwa() const {
            return _nazwa;
        }
        string getOpis() const {
            return _opis;
        }
        int getMaxOsob() const {
            return _maxOsob;
        }
        float getCenaZaDobe() const {
            return _cenaZaDobe;
        }

        inline bool operator==(const OpisPokoju& rhs) {
            return _id == rhs._id && _nazwa == rhs._nazwa && _opis == rhs._opis && _maxOsob == rhs._maxOsob && _cenaZaDobe == rhs._cenaZaDobe;
        }

    private:
		int _id;
		string _nazwa;
		string _opis;
		int _maxOsob;
		float _cenaZaDobe;
	};
}

namespace YAML {
    template<>
    struct convert<hotel_klasowy::OpisPokoju> {
        static Node encode(const hotel_klasowy::OpisPokoju& rhs) {
            //to implement when needed
            Node node;
            return node;
        }

        static bool decode(const Node& node, hotel_klasowy::OpisPokoju& rhs) {
            if (!node["id"] || !node["nazwa"] || !node["opis"] || !node["maxOsob"] || !node["cena"]) {
                return false;
            }
            rhs = hotel_klasowy::OpisPokoju(node["id"].as<int>(), node["nazwa"].as<std::string>(), node["opis"].as<std::string>(), node["maxOsob"].as<int>(), node["cena"].as<float>());
            return true;
        }
    };
}