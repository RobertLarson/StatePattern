/*
 * PlayingState.h
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#ifndef PLAYINGSTATE_H_
#define PLAYINGSTATE_H_

#include "MusicPlayerState.h"

class MusicPlayer;

class PlayingState : public MusicPlayerState {
public:
	PlayingState(MusicPlayer * player);
	virtual ~PlayingState();

	virtual void Pause();
	virtual void Stop();
};

#endif /* PLAYINGSTATE_H_ */
