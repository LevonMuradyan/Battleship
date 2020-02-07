#ifndef UTILS_HPP
#define UTILS_HPP

enum Countries {
	ENGLAND,
	FRANCE,
	ARMENIA,
	RUSSIA
};

enum Color {
	RED,
	GREEN,
	BLUE,
	PURPLE
};

enum Direction {
	HORIZONTAL,
	VERTICAL
};
// Returns a random direction.
Direction get_random_direction();

#endif // UTILS_HPP
