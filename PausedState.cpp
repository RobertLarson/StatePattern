/*
 * PausedState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "PausedState.h"
#include "MusicPlayer.h"

PausedState::PausedState(MusicPlayer * player)
: MusicPlayerState(std::string("Paused"), player) {
}

PausedState::~PausedState() {
}

void PausedState::Play()
{
	m_pPlayer->SetState(MusicPlayer::ST_PLAYING);
}

void PausedState::Stop()
{
	m_pPlayer->SetState(MusicPlayer::ST_STOPPED);
}
