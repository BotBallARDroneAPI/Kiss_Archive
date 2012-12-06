// ARDroneAPI.h
#ifndef ARDRONEAPI_H
#define ARDRONEAPI_H

#ifdef __cplusplus
extern "C" {
#endif

	#define STUB printf("You cannot use this function in the simulator\n");

	/**
	 @brief This function will establish a connection between the drone and the CBC for transmitting information.
	 **/
	void drone_connect() { STUB }
	
	/**
	 @brief This function will be used to disconnect the drone from the CBC.
	 **/
	void drone_disconnect() { STUB }
	
	/**
	 @brief This function will be used to make the drone takeoff and stabilize itself.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @post The drone should reach its normal operating height
	 **/
	void drone_takeoff() { STUB }
	
	/**
	 @brief This function will be used to land the drone at its current position.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @post The drone should slowly descend to the ground from its current height.
	 **/
	void drone_land() { STUB }
	
	/**
	 @brief This function will be used to immediately turn off the drone rotors or reset the emergency toggle
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @post The drone will stop moving and fall to the ground.
	 **/
	void drone_emergency() { STUB }
	
	/**
	@brief retrieves the cached battery value
	@pre drone_connect must have been previously called to establish a connection to the drone.
	@return An integer representing the current battery level 
	@TODO Specify the range in the above comment 
	**/
	int drone_get_battery() { STUB return -1; }
	
	/**
	 @brief Retrieves the x value relative to the drones starting position.  Negative values indicate
			the drone has moved to the left of it's starting position.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return x value away from the drones starting position in milimeters
	 @TODO verify it is in fact milimeters
	 **/
	float drone_get_x() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the y value relative to the drones starting position.  Negative values indicate
			the drone has moved backwards from it's starting position.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return y value away from the drones starting position in milimeters
	 @TODO verify it is in fact milimeters
	 **/
	float drone_get_y() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the y value relative to the drones starting position.  Negative values indicate
			the drone has moved down from it's starting position.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return z value away from the drones starting position in milimeters
	 @TODO verify it is in fact milimeters also verify that the z can be negative is it negative from the ground or its air starting position
	 **/
	float drone_get_z() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the current velocity in the right or left direction.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return A float indicating the millimeters per second 
	 **/
	float drone_get_x_velocity() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the current velocity in the forward or backwards direction.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return A float indicating the velocity in millimeters per second 
	 **/
	float drone_get_y_velocity() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the current velocity in the upward or downwards direction.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return A float indicating the velocity in millimeters per second 
	 **/
	float drone_get_z_velocity() { STUB return 0.0;}
	
	/**
	 @brief Retrieves the current rotation in the clockwise (positive) or counterclockwise (negative) direction.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @return A float indicating the degrees rotated from the original orientation
	 **/
	float drone_get_yaw() { STUB return 0.0;}
	
	/**
	 @brief Switches the drone vision feed to the front facing camera
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_front_camera() { STUB }
	
	/**
	 @brief Switches the drone vision feed to the downward facing camera
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_down_camera() { STUB }
	
	/**
	 @brief Starts sending video data to the cbc for vision tracking.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void enable_drone_vision() { STUB }
	/**
	 @brief Stops the drone from sending data to the cbc for vision tracking.
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void disable_drone_vision() { STUB }

	/**
	 @brief Sets the Drone's Mac Address Pair to be the given string
	 @param macAddress A string representing the Mac Address of your CBC
	 **/
	void set_drone_Mac_Address(char * macAddress) { STUB }
    
	/**
	 @brief Tells the drone to move with the given parameters
	 @param enable A value indicating if movement is enabled. 0 - True 1 - False
	 @param x_tilt A value from zero to one indicating the percentage of maximum tilt in the left or right direction
			negative values are left and positive values are right. Ex: -.5 means Half of the total tilt left
	 @param y_tilt A value from zero to one indicating the percentage of maximum tilt in the forward or backward direction
			negative values are left and positive values are right. Ex: -.5 means Half of the total tilt backwards.
	 @param z_vel A value indicating the change in altitude in milimeters per second
	 @param yaw_vel A value indicating the rotational velocity of the dronein milieters per second
	 **/
	void drone_move(float x_tilt, float y_tilt, float z_vel, float yaw_vel) { STUB }
	
	/**
	 @brief Tells the drone that it should stop moving and hover at its current location
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	**/
	void drone_hover() { STUB }
	
	/**
	 @brief Tells the drone to hover over the Roundel that it has detected
	 @param shouldHover A integer representing if the drone should hover or not 
						1 == True meaning the drone will attempt to hover on a roundel
						0 == False meaning the drone will resume normal flight
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 @pre A roundel must have been detected in the drones vision tags
	 **/
	void drone_hover_on_roundel(int shouldHover) { STUB }

	/**
	 @brief Switches the channel the drone's altitude meter operates on so that interferance does not occur between two drones
	 @param channel A integer representing which channel to operate on 
						1 == True turns the drone to channel A
						0 == False turns the drone to channel B
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_set_ultrasound_channel(int channel) { STUB }

	/**
	 @brief Initializes the drone's onboard video detection
	 @param detectType specifies the drone's detection mode 
						0 == Turns the drones detection off
						1 == Detects green enemies via the front camera
						2 == Detects yellow enemies via the front camera
						3 == Detects blue enemies via the front camera
						4 == Detects orange/green ground stripes via the bottom camera
						5 == Detects yellow/blue ground stripes via the bottom camera
						6 == Detects roundels via the bottom camera
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_set_detection(int detectType) { STUB }

	/**
	 @brief Commands the drone to perform predetermined animations, ignoring movement commands
	 @param animationType specifies the animation to be performed
						ARDRONE_ANIM_PHI_M30_DEG= 0,
						ARDRONE_ANIM_PHI_30_DEG = 1,
						ARDRONE_ANIM_THETA_M30_DEG = 2,
						ARDRONE_ANIM_THETA_30_DEG = 3,
						ARDRONE_ANIM_THETA_20DEG_YAW_200DEG = 4,
						ARDRONE_ANIM_THETA_20DEG_YAW_M200DEG = 5,
						ARDRONE_ANIM_TURNAROUND = 6,
						ARDRONE_ANIM_TURNAROUND_GODOWN = 7,
						ARDRONE_ANIM_YAW_SHAKE = 8,
						ARDRONE_ANIM_YAW_DANCE = 9,
						ARDRONE_ANIM_PHI_DANCE = 10,
						ARDRONE_ANIM_THETA_DANCE = 11,
						ARDRONE_ANIM_VZ_DANCE = 12,
						ARDRONE_ANIM_WAVE = 13,
						ARDRONE_ANIM_PHI_THETA_MIXED = 14,
						ARDRONE_ANIM_DOUBLE_PHI_THETA_MIXED = 15
	 @param tInterval specifies the duration of the animation in seconds
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_animation(int animationType, int tInterval) { STUB }

	/**
	 @brief Commands the drone to perform LED animations
	 @param animationType specifies the animation to be performed
						ARDRONE_LED_ANIMATION_BLINK_GREEN_RED = 0
						ARDRONE_LED_ANIMATION_BLINK_GREEN = 1
						ARDRONE_LED_ANIMATION_BLINK_RED = 2
						ARDRONE_LED_ANIMATION_BLINK_ORANGE = 3
						ARDRONE_LED_ANIMATION_SNAKE_GREEN_RED = 4
						ARDRONE_LED_ANIMATION_FIRE = 5
						ARDRONE_LED_ANIMATION_STANDARD = 6
						ARDRONE_LED_ANIMATION_RED = 7
						ARDRONE_LED_ANIMATION_GREEN = 8
						ARDRONE_LED_ANIMATION_RED_SNAKE = 9
						ARDRONE_LED_ANIMATION_BLANK = 10
						ARDRONE_LED_ANIMATION_RIGHT_MISSILE = 11
						ARDRONE_LED_ANIMATION_LEFT_MISSILE = 12
						ARDRONE_LED_ANIMATION_DOUBLE_MISSILE = 13
						ARDRONE_LED_ANIMATION_FRONT_LEFT_GREEN_OTHERS_RED = 14
						ARDRONE_LED_ANIMATION_FRONT_RIGHT_GREEN_OTHERS_RED = 15
						ARDRONE_LED_ANIMATION_REAR_RIGHT_GREEN_OTHERS_RED = 16
						ARDRONE_LED_ANIMATION_REAR_LEFT_GREEN_OTHERS_RED = 17
						ARDRONE_LED_ANIMATION_LEFT_GREEN_RIGHT_RED = 18
						ARDRONE_LED_ANIMATION_LEFT_RED_RIGHT_GREEN = 19
						ARDRONE_LED_ANIMATION_BLINK_STANDARD = 20
	 @param frequency specifies the frequency (Hz) for the animations to play at.
	 @param tInterval specifies the duration of the animation in seconds
	 @pre drone_connect must have been previously called to establish a connection to the drone.
	 **/
	void drone_LED_animation(int LED_animation, float frequency, int tInterval) { STUB }

#undef STUB	
	
#ifdef __cplusplus
}
#endif

#endif
