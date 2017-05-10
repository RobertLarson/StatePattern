/*
 * MusicPlayerState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "MusicPlayerState.h"

#include <iostream>

MusicPlayerState::MusicPlayerState(std::string name,
		MusicPlayer * player)
: m_name(name),
  m_pPlayer(player) {

}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::Play()
{
	std::cout << "Illegal state transition from " << GetName() << " to Playing\n";
}

void MusicPlayerState::Pause()
{
	std::cout << "Illegal state transition from " << GetName() << " to Paused\n";
}

void MusicPlayerState::Stop()
{
	std::cout << "Illegal state transition from " << GetName() << " to Stopped\n";
}
