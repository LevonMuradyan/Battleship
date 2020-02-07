#include "location.hpp"
#include <cmath>

Location::Location() {
	m_x = 0;
	m_y = 0;
}
Location::Location(const Location& other) {
	m_x = other.m_x;
	m_y = other.m_y;
}

Location::~Location() {
	// destructor
}

Location::Location(int x, int y) {
	m_x = x;
	m_y = y;
}

int Location::get_x() const {
	return m_x;
}

int Location::get_y() const {
	return m_y;
}

void Location::set_x(int x) {
	m_x = x;
}

void Location::set_y(int y) {
	m_y = y;
}

double Location::distance(const Location& other) const {
	return std::sqrt(
		(m_x - other.get_x()) * (m_x - other.get_x()) +
		(m_y - other.get_y()) * (m_y - other.get_y()));

}
