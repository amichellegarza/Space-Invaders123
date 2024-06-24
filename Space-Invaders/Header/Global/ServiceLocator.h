#pragma once
#include "../../Header/Graphic/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../Header/UIService/UIService.h"
#include "../../Header/Player/PlayerService.h"
#include "../../Header//Time/TimeService.h"
#include "../../Header/Main/GameService.h"
#include "../../Header/Enemy/EnemyService.h"

//ServiceLocator Class Summary: This class manages access to various services in the application. 
//include relevant headers files as created/needed
namespace Global
{
	class ServiceLocator
	{
	private:
		// Private Attributes:
		Event::EventService* event_service;
		Graphics::GraphicService* graphic_service;
		UI::UIService* ui_service;
		Time::TimeService* time_service;
		Player::PlayerService* player_service;
		Enemy::EnemyService* enemy_service;
		
		// .... and so on


		// Private constructor and destructor:

		// Constructor for initializing the ServiceLocator.
		ServiceLocator();
		// Destructor for cleaning up resources upon object deletion.
		~ServiceLocator();

		// Private Methods:
		void createServices(); //Create instances of all services.
		void clearAllServices(); //Deletes and deallocates memory for all services.

	public:
		// Public Methods:
		static ServiceLocator* getInstance(); // Provides a method to access the unique ServiceLocator instance (object). This will be discussed later.
		void initialize(); // Initializes the ServiceLocator.
		void update(); // Updates all services.
		void render(); // Renders using the services.

		//Methods to get Specific Services:
		Event::EventService* getEventService(); // Retrieve the EventService instance
		Graphics::GraphicService* getGraphicService(); // Retrieve the GraphicService instance
		UI::UIService* getUIService();
		Time::TimeService* getTimeService();
		Player::PlayerService* getPlayerService();
		void deleteServiceLocator();
	};
}