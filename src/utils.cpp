#include "utils.hpp"
#include <cstdlib>

// Returns a random direction.
Direction get_random_direction() {
	int random = std::rand() % 2;
	// could return Direction(random);
	switch (random) {
	case 0:
		return Direction::HORIZONTAL;
	case 1:
		return Direction::VERTICAL;
	default:
		throw "Random number not in range [0..1].";
	}
}