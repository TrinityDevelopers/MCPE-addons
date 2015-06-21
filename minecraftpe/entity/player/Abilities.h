#pragma once

// Size : 5
class Abilities
{
public:
	bool disableDamage;	// 0
	bool isFlying;		// 1
	bool allowFlying;	// 2
	bool isCreativeMode;// 3
	bool allowEdit;		// 4

public:
	Abilities();
	void addSaveData(void *);
	bool isFlying() const;
	void loadSaveData(void *);
};
