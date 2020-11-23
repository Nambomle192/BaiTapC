struct Date{
	int day,month,year;
	};  
	void set_date(Date&date, int d, int m, int y){
		date.day=d;
		date.month= m;
		date.year= Y;
	}
	void add_day(Date& date, int n){
		date.day+= n;
	}
	void add_month(Date&date, int n){
		date.month+= m;
	}
	
class Date{
	int day;
	int month;
	int year;
public:
    void set_date(int d,int m,int y){
    	day=d;
    	month=m;
    	year=y;
	}	
	int get_day() {return day;
	}
	int get_month(){return month;
	}
	int get_year(){return year;
	}
	void add_year(int n){
		year+=n;
	}
}

void main(){
	Date d;
	d.set_date(1,1,2010);
	d.add_year(10);
	d.day=10;//??
	d.month = 10;//??
	d.year = 2009;//??
	int i = d.day;//??
	int day = d.get_day() 
}

class PS
{
	private;
	int a, b;
	public:
		friend ostream& operator<< (ostream& os, PS p);
		friend istream& operator<< (istream& is, PS& p);
		static int uscln(int x, int y);
		static PS rutgon(PS p);
}
