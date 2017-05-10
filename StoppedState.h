/*
 * StoppedState.h
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#ifndef STOPPEDSTATE_H_
#define STOPPEDSTATE_H_

#include "MusicPlayerState.h"

class MusicPlayer;

class StoppedState : public MusicPlayerState {
public:
	StoppedState(MusicPlayer * player);
	virtual ~StoppedState();

	virtual void Play();
};

#endif /* STOPPEDSTATE_H_ */
