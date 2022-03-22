#ifndef H_BTTP_MESSAGE_PRET
#define H_BTTP_MESSAGE_PRET

#include "Message.h"

namespace BTTP
{
    namespace Protocole
    {
        namespace Messages
        {
            class Pret : public Message
            {
            private:
                /**
                 * @brief Retourne le contenu du message.
                 * @return const std::string Message associé.
                 */
                inline const std::string contenu() const override {}

                /**
                 * @brief Enregistrement du contenu d'un message similaire.
                 * @param contenu Message asocié.
                 */
                inline void deconstruction(const std::string contenu) override {}

            public:
                /**
                 * @brief Construction d'un nouveau message.
                 */
                Pret() : Message(Type::PRET) {}
                /**
                 * @brief Construction d'un message et déconstruction d'un paquet.
                 * @param paquet Paquet à déconstruire.
                 */
                Pret(const std::string paquet) : Message(Type::PRET, paquet) {}
            };
        }
    }
}

#endif