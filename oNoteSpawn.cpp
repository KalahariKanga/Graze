#include "oNoteSpawn.h"


oNoteSpawn::oNoteSpawn()
{
	Environment* en = getEnvironment();
	en->loadMidiFile("res\\laura.mid");
	s = en->addSynth("res\\sine.patch");
	en->assignMidiTrack(1, s);
	en->assignMidiTrack(2, s);
	en->assignMidiTrack(3, s);
	en->playMidiFile();
}


oNoteSpawn::~oNoteSpawn()
{
}

void oNoteSpawn::onMidiEvent(MidiEvent e)
{
	if (e.isNoteOn())
	{
		GameObject* s = new oNote();
		s->position.x = WINDOW_WIDTH;
		s->position.y = WINDOW_HEIGHT*(1 - ((float)e.getKeyNumber() / 100));
		createInstance(s);
	}
}
