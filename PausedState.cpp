/*
 * PausedState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "PausedState.h"
#include "MusicPlayer.h"

PausedState::PausedState()
: MusicPlayerState(std::string("Paused")) {
}

PausedState::~PausedState() {
}

void PausedState::Play(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PLAYING);
}

void PausedState::Stop(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_STOPPED);
}
