#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <stdint.h>
#include "utils.hpp"


class Player
{
public:
	Player();
	Player(
		const std::string& player_id,
		uint32_t rating,
		const std::string& name,
		Countries country,
		Color color);

	~Player();
private:
	// ID of the player current playing.
	// To be used in DB as a Primary Key.
	std::string m_player_id;
	
	// Player's rating, a growing number.
	uint32_t m_rating;

	// Name and surname of the player.
	std::string m_name;

	// The country which player has selected to
	// play the current game.
	Countries m_country;

	// Ships color which player select to play
	Color m_color;

};

#endif  // PLAYER_HPP
