/*
 * MusicPlayerState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "MusicPlayerState.h"

#include <iostream>

MusicPlayerState::MusicPlayerState(std::string name)
: m_name(name)
{

}

MusicPlayerState::~MusicPlayerState() {
}

void MusicPlayerState::Play(MusicPlayer * player)
{
	std::cout << "Illegal state transition from " << GetName() << " to Playing\n";
}

void MusicPlayerState::Pause(MusicPlayer * player)
{
	std::cout << "Illegal state transition from " << GetName() << " to Paused\n";
}

void MusicPlayerState::Stop(MusicPlayer * player)
{
	std::cout << "Illegal state transition from " << GetName() << " to Stopped\n";
}
