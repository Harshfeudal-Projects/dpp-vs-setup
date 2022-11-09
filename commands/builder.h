#pragma once

#include <map>

#include "handler.h"
#include "commands/ping.h"

void SlashCommandCreate(dpp::cluster& client);

inline std::map<std::string, commandDef> commands
{
	{
		"ping", { "Check bot latecy", ping }
	}
};

inline void SlashCommandCreate(dpp::cluster& client)
{
	if (dpp::run_once<struct register_commands>())
	{
		std::vector<dpp::slashcommand> slashCmds;

		for (auto& def : commands)
		{
			dpp::slashcommand cmd;

			cmd.set_name(def.first)
				.set_description(def.second.description)
				.set_application_id(client.me.id);

			cmd.options = def.second.param;
			slashCmds.push_back(cmd);
		}

		client.global_bulk_command_create(slashCmds);
	}
}