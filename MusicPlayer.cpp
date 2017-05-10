/*
 * MusicPlayer.cpp
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#include "MusicPlayer.h"

#include "StoppedState.h"
#include "PlayingState.h"
#include "PausedState.h"

#include <iostream>

MusicPlayer::MusicPlayer()
: m_pState(new StoppedState(this)){

}

MusicPlayer::~MusicPlayer() {
	delete m_pState;
}

void MusicPlayer::Play() {
	m_pState->Play();
}

void MusicPlayer::Pause() {
	m_pState->Pause();
}

void MusicPlayer::Stop() {
	m_pState->Stop();
}

void MusicPlayer::SetState(State state)
{
	std::cout << "changing from " << m_pState->GetName() << " to ";
	delete m_pState;

	if(state == ST_STOPPED)
	{
		m_pState = new StoppedState(this);
	}
	else if(state == ST_PLAYING)
	{
		m_pState = new PlayingState(this);
	}
	else
	{
		m_pState = new PausedState(this);
	}

	std::cout << m_pState->GetName() << " state\n";
}
