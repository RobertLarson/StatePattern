/*
 * StoppedState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "StoppedState.h"
#include "MusicPlayer.h"

StoppedState::StoppedState(MusicPlayer * player)
: MusicPlayerState(std::string("Stopped"), player) {
}

StoppedState::~StoppedState() {
}

void StoppedState::Play()
{
	m_pPlayer->SetState(MusicPlayer::ST_PLAYING);
}


