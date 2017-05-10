/*
 * MusicPlayerState.h
 *
 *  Created on: May 7, 2017
 *      Author: rlarson
 */

#ifndef MUSICPLAYERSTATE_H_
#define MUSICPLAYERSTATE_H_

#include <string>

class MusicPlayer;

class MusicPlayerState {
public:
	MusicPlayerState(std::string name,
			MusicPlayer * player);
	virtual ~MusicPlayerState();

	virtual void Play();
	virtual void Pause();
	virtual void Stop();

	std::string GetName() { return m_name; }

protected:
	MusicPlayer * m_pPlayer;

private:
	std::string   m_name;
};

#endif /* MUSICPLAYERSTATE_H_ */
