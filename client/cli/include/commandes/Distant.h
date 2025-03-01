#ifndef H_BTTP_CLIENT_CLI_COMMANDE_DISTANT
#define H_BTTP_CLIENT_CLI_COMMANDE_DISTANT

#include "erreur/Syntaxe.h"

#define BTTP_COMMANDE_DISTANT "distant"

namespace BTTP
{
    namespace Client
    {
        namespace CLI
        {
            namespace Commandes
            {
                class Distant : public Commande
                {
                public:
                    Distant() : Commande(BTTP_COMMANDE_DISTANT) {}

                    void executer(const int argc, const char** argv, asio::io_context& contexte) const override;
                    const std::string aide() const override;
                };
            }
        }
    }
}

#endif