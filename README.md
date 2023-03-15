# GET_NEXT_LINE

Getnextline est un projet de programmation informatique développé dans le cadre de l'école 42. Il s'agit d'une fonction permettant de lire ligne par ligne un fichier ou l'entrée standard.

### Installation

Pour installer la fonction Getnextline, vous devez d'abord cloner le dépôt GitHub sur votre machine locale :

````bash
git clone https://github.com/vamoussa00225/get_next_line.git
````

Ensuite, vous devez vous rendre dans le répertoire get_next_line et exécuter la commande make pour compiler la fonction :

````go
cd get_next_line
make
````

La fonction sera alors compilée et prête à être utilisée.

### Utilisation

Pour utiliser la fonction Getnextline, vous devez inclure le fichier d'en-tête get_next_line.h dans votre programme C, et appeler la fonction get_next_line pour lire chaque ligne du fichier ou de l'entrée standard.

La fonction get_next_line prend en premier argument un descripteur de fichier, et retourne une ligne lue depuis ce fichier ou l'entrée standard. Si la fin du fichier est atteinte, la fonction retourne 0. Si une erreur survient, la fonction retourne -1.

Voici un exemple d'utilisation de la fonction Getnextline pour lire un fichier :

````c
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int fd;
    char *line;
    
    fd = open("file.txt", O_RDONLY);
    while (get_next_line(fd, &line))
    {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    
    return (0);
}
````

La sortie de ce programme sera chaque ligne du fichier file.txt.

### Auteurs

Ce programme a été développé par "Vkanate" dans le cadre du projet Getnextline de l'école 42.
