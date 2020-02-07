#include "player.hpp"

Player::Player() 
{
	
}

Player::Player(
	const std::string& player_id,
	uint32_t rating,
	const std::string& name,
	Countries country,
	Color color) : 
		m_player_id(player_id),
		m_rating(rating),
	 	m_name(m_player_id),
	 	m_country(country),
	 	m_color(color)
{
	
}

Player::~Player()
{
}
