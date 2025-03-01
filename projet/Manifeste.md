# BTTP - _Manifeste_

__BTTP__ est un projet visant à faciliter l'_exécution de __tâches__ automatisées_ sur un __appareil distant__, depuis un __appareil client__. Les deux appareils sont liés à une __identité__ et effectue des __transactions__ au travers d'un __appareil de contrôle__ chargés d'assurer la sécurtité et la synchronisation des informations.

> Une version ultérieure pourra être pensée de manière décentralisée, afin de supprimer la dépendance à un tiers de confiance unique (_appareil de contrôle_).

## Lexique

- __tâche :__ un programme stocké sur un _appareil distant_, pouvant être exécuter et fournissant UN OU PLUSIEURS _résultats d'exécution_. 

    > __Exemples :__ script shell ou Python, programme compilé...

### _Appareils_

- __appareil distant :__ un système d'information capable d'annoncer son _état_ à un _appareil de contrôle_, de lui notifier l'ajout ou la modification de _tâches_, d'exécuter des _tâches_ en réponse à un _message d'exécution_, et de retourner les _résultats d'exécution_ à l'_appareil client_ ayant émis le message.

- __appareil client :__ un système d'information capable d'initier une _transaction_ avec un _appareil distant_ au travers d'un _appareil de contrôle_, d'émettre des _messages d'exécution_ et de traîter des _resultats d'exécutions_.

- __appareil de contrôle :__ // TODO Définition appareil de contrôle

### _Sécurité_

- __identité :__ représentation d'un appareil et de ses clés privée et publique. Elle est capable de chiffrer, signer, déchiffrer et vérifier des _messages_.

### _Echanges_

- __transaction :__ // TODO Définition transaction

- __message :__ // TODO Définition message

- __message d'exécution :__ // TODO Définition message d'execution

- __résultat d'exécution :__ // TODO Définition résultat d'exécution

- __état :__ une information binaire relative à un _appareil distant_, stockée sur un _appareil de contrôle_ et indiquant si l'appareil distant est ouvert à une _transaction_. Elle est partagée à tous les autres appareils de l'_identité_ propriétaire stockés sur l'appareil de contrôle.