#include "led.h"
#include "keyboard.h"

void Delay(unsigned int uiMsWait){
	
	unsigned int uiCount;
	unsigned int uiCount1;
	
	for (uiCount=0;uiCount<uiMsWait;uiCount++){
		for (uiCount1=0;uiCount1<1499;uiCount1++){}
		}
}

int main(){
	
	LedInit();
	KeyboardInit();
	
	while(1){
		
		Delay(100);
		
		switch(eKeyboardRead()){
			case BUTTON_1:
				LedStepRight();
				break;
			case BUTTON_2:
				LedStepLeft();
			case BUTTON_0:
				break;
			case BUTTON_3:
				break;
			default:{}
		}
}
}
