/*
 * PlayingState.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "PlayingState.h"
#include "MusicPlayer.h"

PlayingState::PlayingState()
: MusicPlayerState(std::string("Playing")) {
}

PlayingState::~PlayingState() {
}

void PlayingState::Pause(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PAUSED);
}

void PlayingState::Stop(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_STOPPED);
}
