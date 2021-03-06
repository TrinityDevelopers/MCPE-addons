#pragma once

enum PacketId
{
	LOGIN_PACKET = 0x8f,
	PLAY_STATUS_PACKET,
	DISCONNECT_PACKET,
	BATCH_PACKET,
	TEXT_PACKET,
	SET_TIME_PACKET,
	START_GAME_PACKET,
	ADD_PLAYER_PACKET,
	REMOVE_PLAYER_PACKET,
	ADD_ENTITY_PACKET,
	REMOVE_ENTITY_PACKET,
	ADD_ITEM_ENTITY_PACKET,
	TAKE_ITEM_ENTITY_PACKET,
	MOVE_ENTITY_PACKET,
	MOVE_PLAYER_PACKET,
	REMOVE_BLOCK_PACKET,
	UPDATE_BLOCK_PACKET,
	ADD_PAINTING_PACKET,
	EXPLODE_PACKET,
	LEVEL_EVENT_PACKET,
	BLOCK_EVENT_PACKET,
	ENTITY_EVENT_PACKET,
	MOB_EFFECT_PACKET,
	UPDATE_ATTRIBUTES_PACKET,
	MOB_EQUIPMENT_PACKET,
	MOB_ARMOR_EQUIPMENT_PACKET,
	INTERACT_PACKET,
	USE_ITEM_PACKET,
	PLAYER_ACTION_PACKET,
	HURT_ARMOR_PACKET,
	SET_ENTITY_DATA_PACKET,
	SET_ENTITY_MOTION_PACKET,
	SET_ENTITY_LINK_PACKET,
	SET_HEALTH_PACKET,
	SET_SPAWN_POSITION_PACKET,
	ANIMATE_PACKET,
	RESPAWN_PACKET,
	DROP_ITEM_PACKET,
	CONTAINER_OPEN_PACKET,
	CONTAINER_CLOSE_PACKET,
	CONTAINER_SET_SLOT_PACKET,
	CONTAINER_SET_DATA_PACKET,
	CONTAINER_SET_CONTENT_PACKET,
	CRAFTING_DATA_PACKET,
	CRAFTING_EVENT_PACKET,
	ADVENTURE_SETTINGS_PACKET,
	BLOCK_ENTITY_DATA_PACKET,
	PLAYER_INPUT_PACKET,
	FULL_CHUNK_DATA_PACKET,
	SET_DIFFICULTY_PACKET,
	CHANGE_DIMENSION_PACKET,
	SET_PLAYER_GAMETYPE_PACKET,
	PLAYER_LIST_PACKET,
	TELEMETRY_EVENT_PACKET,
	SPAWN_EXPERIENCE_ORB_PACKET
};
