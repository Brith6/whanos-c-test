#include <stdio.h>
#include <unistd.h> // Pour la fonction sleep()

int main() {
    // Boucle infinie pour garder le conteneur en vie
    while(1) {
        printf("Hello, Whanos C !!\n");
        // Important pour que la sortie apparaisse dans les logs K8s
        fflush(stdout); 
        // Fait une pause de 5 secondes
        sleep(5);
    }
    return 0; // Cette ligne ne sera jamais atteinte
}