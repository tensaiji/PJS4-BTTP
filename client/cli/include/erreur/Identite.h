#ifndef H_BTTP_CLIENT_CLI_IDENTITE
#define H_BTTP_CLIENT_CLI_IDENTITE

#include "../Racine.h"

#define BTTP_CLIENT_CLI_IDENTITE_CODE -11000

namespace BTTP
{
    namespace Client
    {
        namespace CLI
        {
            namespace Erreur
            {
                class Identite : public Erreur
                {
                public:
                    Identite()
                        : Erreur(
                            "Client/CLI/Identite",
                            "Aucune identité n'a pu être chargé. Utiliser la commande 'bttp-cli id + <nom>' pour en générer une.",
                            BTTP_CLIENT_CLI_IDENTITE_CODE
                        )
                    {}
                };
            }
        }
    }
}
#endif