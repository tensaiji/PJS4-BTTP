#ifndef H_BTTP_IDENTITE_DECHIFFREMENT
#define H_BTTP_IDENTITE_DECHIFFREMENT

#include "../../erreur/Erreur.h"

#define BTTP_IDENTITE_DECHIFFREMENT_CODE -202

namespace BTTP
{
    namespace Protocole
    {
        namespace Erreur
        {
            namespace Identite
            {
                /**
                 * @brief Erreur de déchiffrement ou de vérification d'un message chiffré et signé.
                 */
                class Dechiffrement : public Erreur
                {
                private:
                    /**
                     * @brief Message dont le chiffrement ou la signature a échoué.
                     */
                    const std::string& _message_echec;

                public:
                    /**
                     * @param details Details de l'erreur.
                     * @param message_echec Message dont le chiffrement ou la signature a échoué.
                     */
                    Dechiffrement(const std::string details, const std::string& message_echec)
                        : Erreur(
                            "Identite/Dechiffrement", "Le déchiffrement du message a donné un résultat invalide.\n\tDétails : " + details,
                            BTTP_IDENTITE_DECHIFFREMENT_CODE
                        ), _message_echec{ message_echec }
                    {}

                    inline const std::string& message_echec() const { return this->_message_echec; }
                };
            }
        }
    }
}
#endif