#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamController_SteamController006_Init(void *);
extern bool cppISteamController_SteamController006_Shutdown(void *);
extern void cppISteamController_SteamController006_RunFrame(void *);
extern int cppISteamController_SteamController006_GetConnectedControllers(void *, ControllerHandle_t *);
extern bool cppISteamController_SteamController006_ShowBindingPanel(void *, ControllerHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController006_GetActionSetHandle(void *, const char *);
extern void cppISteamController_SteamController006_ActivateActionSet(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern ControllerActionSetHandle_t cppISteamController_SteamController006_GetCurrentActionSet(void *, ControllerHandle_t);
extern void cppISteamController_SteamController006_ActivateActionSetLayer(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern void cppISteamController_SteamController006_DeactivateActionSetLayer(void *, ControllerHandle_t, ControllerActionSetHandle_t);
extern void cppISteamController_SteamController006_DeactivateAllActionSetLayers(void *, ControllerHandle_t);
extern int cppISteamController_SteamController006_GetActiveActionSetLayers(void *, ControllerHandle_t, ControllerActionSetHandle_t *);
extern ControllerDigitalActionHandle_t cppISteamController_SteamController006_GetDigitalActionHandle(void *, const char *);
extern ControllerDigitalActionData_t cppISteamController_SteamController006_GetDigitalActionData(void *, ControllerHandle_t, ControllerDigitalActionHandle_t);
extern int cppISteamController_SteamController006_GetDigitalActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerDigitalActionHandle_t, EControllerActionOrigin *);
extern ControllerAnalogActionHandle_t cppISteamController_SteamController006_GetAnalogActionHandle(void *, const char *);
extern ControllerAnalogActionData_t cppISteamController_SteamController006_GetAnalogActionData(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern int cppISteamController_SteamController006_GetAnalogActionOrigins(void *, ControllerHandle_t, ControllerActionSetHandle_t, ControllerAnalogActionHandle_t, EControllerActionOrigin *);
extern void cppISteamController_SteamController006_StopAnalogActionMomentum(void *, ControllerHandle_t, ControllerAnalogActionHandle_t);
extern void cppISteamController_SteamController006_TriggerHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamController_SteamController006_TriggerRepeatedHapticPulse(void *, ControllerHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern void cppISteamController_SteamController006_TriggerVibration(void *, ControllerHandle_t, unsigned short, unsigned short);
extern void cppISteamController_SteamController006_SetLEDColor(void *, ControllerHandle_t, uint8, uint8, uint8, unsigned int);
extern int cppISteamController_SteamController006_GetGamepadIndexForController(void *, ControllerHandle_t);
extern ControllerHandle_t cppISteamController_SteamController006_GetControllerForGamepadIndex(void *, int);
extern ControllerMotionData_t cppISteamController_SteamController006_GetMotionData(void *, ControllerHandle_t);
extern bool cppISteamController_SteamController006_ShowDigitalActionOrigins(void *, ControllerHandle_t, ControllerDigitalActionHandle_t, float, float, float);
extern bool cppISteamController_SteamController006_ShowAnalogActionOrigins(void *, ControllerHandle_t, ControllerAnalogActionHandle_t, float, float, float);
extern const char * cppISteamController_SteamController006_GetStringForActionOrigin(void *, EControllerActionOrigin);
extern const char * cppISteamController_SteamController006_GetGlyphForActionOrigin(void *, EControllerActionOrigin);
extern ESteamInputType cppISteamController_SteamController006_GetInputTypeForHandle(void *, ControllerHandle_t);
#ifdef __cplusplus
}
#endif
