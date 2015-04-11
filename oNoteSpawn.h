#pragma once
#include "GameObject.h"
#include "oShot.h"
class oNoteSpawn : public GameObject
{
	Synth* s;
public:
	oNoteSpawn();
	~oNoteSpawn();
	virtual void onMidiEvent(MidiEvent e);
};

