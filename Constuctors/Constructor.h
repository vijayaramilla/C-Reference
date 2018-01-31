using namespace std;
class BaseClass {
	private:
		int x;
	public:
		BaseClass(int);	
};
class DerivedClass : public BaseClass {
	private:
		int y;
	public:
		DerivedClass(int);	
};