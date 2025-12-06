#include <gui/mainscreen_screen/MainScreenView.hpp>

/*
extern CAN_HandleTypeDef hcan1;
extern uint8_t CANValues[8];
extern osSemaphoreId_t CANDataReadySemHandle;
extern void CANPollingRoutine();

*/

extern uint8_t temp;
extern uint16_t torque;
extern uint16_t speed;
extern uint8_t pack_soc;
extern uint8_t soc;

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
	RPMGauge.setValue(speed); //used to be RPMValue, changed to test speed
	RPMText.setValue(speed);  //used to be RPMValue
	torqueCommandGauge.setValue(torque);
	SOCText.setValue(soc);
	SOCBox.setValue(soc);
}
