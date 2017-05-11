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
	PlayingState();
	virtual ~PlayingState();

	virtual void Pause(MusicPlayer * player);
	virtual void Stop(MusicPlayer * player);
};

#endif /* PLAYINGSTATE_H_ */
