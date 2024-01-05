
#include <iostream>
#ifndef __Data_h__
#define __Data_h__

namespace hotel_klasowy
{
	class Data;
}

namespace hotel_klasowy
{
	class Data
	{
	private: 
		int dzien;
		int miesiac;
		int rok;

	public:
		Data();
		Data(int dni);
		Data(int d, int m, int y);
		void setDzien(int dzien);
		const int getDzien() const;
		void setMiesiac(int miesiac);
		const int getMiesiac() const;
		void setRok(int rok);
		const int getRok() const;
		const int naDni() const;
		int operator-(const Data& rhs);
		Data operator-(const int& rhs);
		Data operator+(const int& rhs);
		friend std::ostream& operator<<(std::ostream& stream, const Data& matrix);
	};
}

#endif
