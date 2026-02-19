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
	ActualTorqueText.setValue(RPMValue);
	ActualTorqueGauge.setValue(RPMValue);
	torqueCommandGauge.setValue(torque);
	CommandedTorqueText.setValue(torque);
	SOCText.setValue(soc);
	SOCBox.setValue(soc);
	DCBusVoltageProgess.setValue(voltage);

	ActualTorqueText.invalidate();
	ActualTorqueGauge.invalidate();
	torqueCommandGauge.invalidate();
	CommandedTorqueText.invalidate();
	SOCText.invalidate();
	SOCBox.invalidate();
	DCBusVoltageProgess.invalidate();
}
