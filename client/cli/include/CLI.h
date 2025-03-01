#ifndef H_BTTP_CLIENT_CLI
#define H_BTTP_CLIENT_CLI

#include "commandes/Commandes.h"
#include "erreur/Identite.h"

#include <stdlib.h>

#define BTTP_CLIENT_CLI_INTRO "bttp-cli v" BTTP_CLIENT_CLI_VERSION " (client: " BTTP_CLIENT_VERSION " / protocole: " BTTP_VERSION ")"

namespace BTTP
{
    namespace Client
    {
        namespace CLI
        {
            const Protocole::Identite definir_identite();

            const int executer(const int& argc, const char** argv);
        }
    }
}

#endif