#ifndef LOCATION_HPP
#define LOCATION_HPP

class Location {
public:
	Location();
	Location(int x_, int y_);
	Location(const Location& other);
	~Location();

	double distance(const Location& other) const;

	int get_x() const;
	int get_y() const;
	void set_x(int x);
	void set_y(int y);

private: 
	int m_x;
	int m_y;
};

#endif // LOCATION_HPP
