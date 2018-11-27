#include<iostream>
using std::cout;
using std::endl;
class Vector {
private:
	int x1, y1, x2, y2;
public:
	Vector() {}
	Vector(int x1, int y1, int x2, int y2) {
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}
	Vector operator+(Vector &obj) {
		Vector sum;
		sum.x1 = this->x1;
		sum.y1 = this->y1;
		sum.x2 = obj.x2;
		sum.y2 = obj.y2;
		return sum;
		
	}

	void getCoordinates() {
		cout <<" vector's coordinates - "<< x1 << ", " << y1 << " ;" << x2 << ", " << y2 << endl;
	}
};
