/*
 * PlayingState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "PlayingState.h"
#include "MusicPlayer.h"

PlayingState::PlayingState(MusicPlayer * player)
: MusicPlayerState(std::string("Playing"), player) {
}

PlayingState::~PlayingState() {
}

void PlayingState::Pause()
{
	m_pPlayer->SetState(MusicPlayer::ST_PAUSED);
}

void PlayingState::Stop()
{
	m_pPlayer->SetState(MusicPlayer::ST_STOPPED);
}
