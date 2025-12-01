#include <gui/mainscreen_screen/MainScreenView.hpp>

/*
extern CAN_HandleTypeDef hcan1;
extern uint8_t CANValues[8];
extern osSemaphoreId_t CANDataReadySemHandle;
extern void CANPollingRoutine();

*/


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
	RPMGauge.setValue(RPMValue);
	RPMText.setValue(RPMValue);
	torqueCommandGauge.setValue(TorqueValue);
	SOCText.setValue(SOCValue);
	SOCBox.setValue(SOCValue);
}
