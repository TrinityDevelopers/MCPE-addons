#pragma once

#include "minecraftpe/client/gui/GuiElementContainer.h"
#include "minecraftpe/client/settings/Options.h"

class OptionsGroup : public GuiElementContainer
{
public:
	OptionsGroup(string, bool);
	virtual ~OptionsGroup();
	virtual void render(MinecraftClient *, int, int);
	virtual void setupPositions();
	virtual void addOptionItem(Options::Option const &, MinecraftClient &);
	virtual void addLimitedTextBoxOptionItem(Options::Option const &, MinecraftClient &, string const &);
	virtual void optionalAddOptionItem(bool, Options::Option const &, MinecraftClient &);
	virtual void createToggle(Options::Option const &, MinecraftClient &);
	virtual void createProgressSlider(Options::Option const &, MinecraftClient &);
	virtual void createStepSlider(Options::Option const &, MinecraftClient &);
	void createTextBox(Options::Option const &, MinecraftClient &, string const &);
};
