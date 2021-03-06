#include "SMLocalPlayer.h"
#include "utils/SMUtil.h"

#include "minecraftpe/MinecraftClient.h"
#include "minecraftpe/LocalPlayer.h"
#include "minecraftpe/Gui.h"
#include "minecraftpe/I18n.h"

SMLocalPlayer::SMLocalPlayer(ServerManager *server, Player *player, RakNet::RakNetGUID const &guid)
	: SMPlayer(server, NULL, guid, "", 0)
{
	realPlayer = player;

	username = player->username;
	displayName = username;
	iusername = SMUtil::toLower(username);

	loggedIn = true;
	spawned = true;
}

bool SMLocalPlayer::dataPacket(Packet const &packet)
{
	return false;
}

void SMLocalPlayer::sendMessage(TextContainer const &message)
{
	if(message.isNeedTranslation())
	{
		sendTranslation(message.getText(), message.getParameters());
		return;
	}

	Gui *gui = ((LocalPlayer *)realPlayer)->mc->getGui();
	for(std::string m : SMUtil::split(I18n::get(message.getText()), '\n'))
	{
		if(m.empty())
			continue;

		gui->displayClientMessage(m);
	}
}

void SMLocalPlayer::sendTranslation(std::string const &message, std::vector<std::string> const &parameters)
{
	((LocalPlayer *)realPlayer)->mc->getGui()->displayLocalizableMessage(message, parameters);
}

void SMLocalPlayer::sendPopup(std::string const &message, std::string const &subtitle)
{
	((LocalPlayer *)realPlayer)->mc->getGui()->showPopupNotice(message, subtitle);
}

void SMLocalPlayer::sendTip(std::string const &message)
{
	((LocalPlayer *)realPlayer)->mc->getGui()->showTipMessage(message);
}

void SMLocalPlayer::kick(std::string const &reason, bool isAdmin) {}

void SMLocalPlayer::close(TextContainer const &message, std::string const &reason, bool notify) {}

bool SMLocalPlayer::isLocalPlayer() const
{
	return true;
}
