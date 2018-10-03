#ifndef MOVE_H 
#define MOVE_h

/**
 * @brief 
 * 
 * @file move.h
 * @author your name
 * @date 2018-09-25
 */

/**
 * @def Diamètre de la roue en millimetres.
 * 
 */
#define MOVE_WHEEL_DIAMETER 77

/**
 * @def Nombre de "Pulse" que l'encodeur génère pour chaque tour de roue complet.
 * 
 */
#define MOVE_PULSE_PER_TURN 3200

/**
 * @def Différence permis en nombre de pulse avant de corriger la trajectoire.
 * 
 */
#define MOVE_WHEEL_THRESHOLD 10


#define ACTION_TYPE_ACCELERATION 0
#define ACTION_TYPE_ROTATION_1_ROUE 0

#define MOVE_NUMBER_OF_ENCODER 2
#define MOVE_MASTER 1
#define MOVE_SLAVE 0
#define MOVE_ADJUSTEMENT_FACTOR 0.01
#define MOVE_DELAY 50
    
//Prototypes de fonctions
float fGetSlaveSpeed(int iMotorID);
void vMoveStraight(float speed);
void vSetMotorSpeed(int iMotorID, float fSpeed);



#endif