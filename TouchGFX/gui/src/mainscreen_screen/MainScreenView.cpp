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
	torqueCommandGauge.setValue(torque);
	//CommandedTorqueLabel.setValue(torque);
	//SOCText.setValue(soc);
	//SOCBox.setValue(soc);
	DCBusVoltageProgess.setValue(voltage);

	torqueCommandGauge.invalidate();
    //CommandedTorqueLabel.invalidate();
	//SOCText.invalidate();
	//SOCBox.invalidate();
	DCBusVoltageProgess.invalidate();
	RuntimeText.setValue(seconds);
	RuntimeText.invalidate();
}
