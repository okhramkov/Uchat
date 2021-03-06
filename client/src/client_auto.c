#include "../inc/client.h"

void fill_pokemon()
{
    t_pokefact.pokemon_fact_text = "client/data/pokemon-text/";
    t_pokefact.pokemon_fact_image = "client/data/pokemon/";
    t_pokefact.pokemon_fact_audio = "client/data/pokemon-audio/";
    pokemon_random();
}

void test_autofill()
{
    t_avatar.avatar_generated = "client/data/avatars/";
    avatar_random();

    t_msg.current = "here...";
    msg_data.content = NULL;

    t_application.app = "UchatSpace";
    t_application.user = getenv("USER");
    t_application.id = "uchat.space";
    t_application.application = g_application_new(t_application.id, G_APPLICATION_FLAGS_NONE);
    g_application_register(t_application.application, NULL, NULL);
}
