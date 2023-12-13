
#ifndef __Date_h__
#define __Date_h__

namespace hotel_klasowy
{
	class Date;
}

namespace hotel_klasowy
{
	class Date
	{
		private: int dzien;
		private: int miesiac;
		private: int rok;

		public: void setDzien(int dzien);

		public: int getDzien();

		public: void setMiesiac(int miesiac);

		public: int getMiesiac();

		public: void setRok(int rok);

		public: int getRok();
	};
}

#endif
