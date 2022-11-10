#include <fstream>
#include <map>

#include <spdlog/spdlog.h>
#include <dpp/nlohmann/json.hpp>
#include <dpp/dpp.h>

#include "../commands/builder.h"
#include "../commands/btnHandler.h"

using json = nlohmann::json;

int main()
{
	json reader;
	{
		std::ifstream reading("config.json");
		
		reading >> reader;
	}

	dpp::cluster client(reader["token"], dpp::i_all_intents);

	client.on_ready([&client](const dpp::ready_t& event) 
		{
			client.set_presence(
				dpp::presence(dpp::ps_dnd, dpp::at_game, "D++ 10.0.21")
			);
			
			SlashCommandCreate(client);
		});

	client.on_slashcommand([&client](const dpp::slashcommand_t& event)
		{
			dpp::command_interaction commandData = event.command.get_command_interaction();
			auto commandFilter                   = commands.find(commandData.name);

			if (commandFilter != commands.end())
			{
				commandFilter->second.function(client, event);
			}
		});

	client.on_button_click([](const dpp::button_click_t& event)
		{
			ButtonHandle(event);
		});
	
	client.start(dpp::st_wait);
	return 0;
}