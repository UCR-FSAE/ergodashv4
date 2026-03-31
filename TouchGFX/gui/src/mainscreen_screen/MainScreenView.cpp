#include <gui/mainscreen_screen/MainScreenView.hpp>

/*
extern CAN_HandleTypeDef hcan1;
extern uint8_t CANValues[8];
extern osSemaphoreId_t CANDataReadySemHandle;
extern void CANPollingRoutine();

*/
extern CAN_HandleTypeDef hcan1;
extern volatile uint8_t temp;
extern volatile uint16_t torque;
extern volatile uint16_t measuredTorque;
extern volatile uint16_t speed;
extern volatile uint8_t pack_soc;
extern volatile uint8_t soc;
extern volatile float voltage;
extern volatile uint16_t seconds;
uint8_t minutes = 0;
uint8_t hours = 0;

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::handleTickEvent() {
	if (seconds >= 60){
		seconds = 0;
		minutes++;
		if (minutes >= 60){
			minutes = 0;
			hours++;
			}
	}
	Runtime.setTime24Hour(hours,minutes,seconds);
	Runtime.invalidate();

}
