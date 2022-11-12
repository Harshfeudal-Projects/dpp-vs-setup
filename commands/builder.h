#pragma once

#include <map>

#include "handler.h"

#include "ping.h"
#include "kick.h"
#include "userinfo.h"
#include "prune.h"

void SlashCommandCreate(dpp::cluster& client);

inline std::map<std::string, commandDef> commands
{
	{
		"ping", { "Check bot latecy", ping }
	},
	{
		"kick",
			{
				"Kick a member you mentioned", kick,
				{
					dpp::command_option(
						dpp::co_user,
						"member",
						"Mention a member to kick",
						true
					),
					dpp::command_option(
						dpp::co_string,
						"reason",
						"Reason why they got kick",
						false
					)
				}
			}
	},
	{
		"prune",
			{
				"Prune messages", prune,
				{
					dpp::command_option(
						dpp::co_integer,
						"amount",
						"Amount of messages to prune, from 2 up to 99",
						true
					),
					dpp::command_option(
						dpp::co_string,
						"reason",
						"Pruning reason",
						false
					)
				}
			}
	},
	{
		"userinfo",
			{
				"Show mentioned user info", userinfo,
				{
					dpp::command_option(
						dpp::co_user,
						"user",
						"User you would like to know",
						false
					)
				}
			}
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