<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="19008000">
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
	<Property Name="NI.Project.Description" Type="Str"></Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="drivers" Type="Folder">
			<Item Name="ANC350_v1.4.42" Type="Folder">
				<Item Name="ANC350_Amplitude.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Amplitude.vi"/>
				<Item Name="ANC350_AmplitudeControl.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_AmplitudeControl.vi"/>
				<Item Name="ANC350_BandwidthLimitEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_BandwidthLimitEnable.vi"/>
				<Item Name="ANC350_CapMeasure.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_CapMeasure.vi"/>
				<Item Name="ANC350_Check.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Check.vi"/>
				<Item Name="ANC350_ClearStopDetection.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ClearStopDetection.vi"/>
				<Item Name="ANC350_Close.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Close.vi"/>
				<Item Name="ANC350_Connect.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Connect.vi"/>
				<Item Name="ANC350_DCLevel.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_DCLevel.vi"/>
				<Item Name="ANC350_ErrorHandler.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ErrorHandler.vi"/>
				<Item Name="ANC350_ExternalStepBkwInput.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ExternalStepBkwInput.vi"/>
				<Item Name="ANC350_ExternalStepFwdInput.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ExternalStepFwdInput.vi"/>
				<Item Name="ANC350_ExternalStepInputEdge.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ExternalStepInputEdge.vi"/>
				<Item Name="ANC350_Frequency.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Frequency.vi"/>
				<Item Name="ANC350_GetAcInEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetAcInEnable.vi"/>
				<Item Name="ANC350_GetAmplitude.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetAmplitude.vi"/>
				<Item Name="ANC350_GetBandwidthLimitEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetBandwidthLimitEnable.vi"/>
				<Item Name="ANC350_GetDcInEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetDcInEnable.vi"/>
				<Item Name="ANC350_GetDCLevel.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetDCLevel.vi"/>
				<Item Name="ANC350_GetFrequency.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetFrequency.vi"/>
				<Item Name="ANC350_GetIntEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetIntEnable.vi"/>
				<Item Name="ANC350_GetPosition.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetPosition.vi"/>
				<Item Name="ANC350_GetReference.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetReference.vi"/>
				<Item Name="ANC350_GetReferenceRotCount.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetReferenceRotCount.vi"/>
				<Item Name="ANC350_GetRotCount.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetRotCount.vi"/>
				<Item Name="ANC350_GetSpeed.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetSpeed.vi"/>
				<Item Name="ANC350_GetStatus.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetStatus.vi"/>
				<Item Name="ANC350_GetStepWidth.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_GetStepWidth.vi"/>
				<Item Name="ANC350_Load.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Load.vi"/>
				<Item Name="ANC350_MoveAbsolute.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveAbsolute.vi"/>
				<Item Name="ANC350_MoveAbsoluteSync.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveAbsoluteSync.vi"/>
				<Item Name="ANC350_MoveContinous.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveContinous.vi"/>
				<Item Name="ANC350_MoveContinuous.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveContinuous.vi"/>
				<Item Name="ANC350_MoveReference.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveReference.vi"/>
				<Item Name="ANC350_MoveRelative.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveRelative.vi"/>
				<Item Name="ANC350_MoveSingleStep.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_MoveSingleStep.vi"/>
				<Item Name="ANC350_QuadratureAxis.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_QuadratureAxis.vi"/>
				<Item Name="ANC350_QuadratureInputPeriod.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_QuadratureInputPeriod.vi"/>
				<Item Name="ANC350_QuadratureOutputPeriod.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_QuadratureOutputPeriod.vi"/>
				<Item Name="ANC350_ResetPosition.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_ResetPosition.vi"/>
				<Item Name="ANC350_SensorPowerGroupA.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SensorPowerGroupA.vi"/>
				<Item Name="ANC350_SensorPowerGroupB.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SensorPowerGroupB.vi"/>
				<Item Name="ANC350_SetAcInEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetAcInEnable.vi"/>
				<Item Name="ANC350_SetDcInEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetDcInEnable.vi"/>
				<Item Name="ANC350_SetHardwareID.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetHardwareID.vi"/>
				<Item Name="ANC350_SetIntEnable.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetIntEnable.vi"/>
				<Item Name="ANC350_SetOutput.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetOutput.vi"/>
				<Item Name="ANC350_SetStopDetectionSticky.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetStopDetectionSticky.vi"/>
				<Item Name="ANC350_SetTargetGround.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetTargetGround.vi"/>
				<Item Name="ANC350_SetTargetPos.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SetTargetPos.vi"/>
				<Item Name="ANC350_SingleCircleMode.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_SingleCircleMode.vi"/>
				<Item Name="ANC350_StaticAmplitude.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_StaticAmplitude.vi"/>
				<Item Name="ANC350_StepCount.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_StepCount.vi"/>
				<Item Name="ANC350_StopApproach.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_StopApproach.vi"/>
				<Item Name="ANC350_StopDetection.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_StopDetection.vi"/>
				<Item Name="ANC350_StopMoving.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_StopMoving.vi"/>
				<Item Name="ANC350_Trigger.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_Trigger.vi"/>
				<Item Name="ANC350_TriggerAxis.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_TriggerAxis.vi"/>
				<Item Name="ANC350_TriggerEpsilon.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_TriggerEpsilon.vi"/>
				<Item Name="ANC350_TriggerModeIN.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_TriggerModeIN.vi"/>
				<Item Name="ANC350_TriggerModeOUT.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_TriggerModeOUT.vi"/>
				<Item Name="ANC350_TriggerPolarity.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_TriggerPolarity.vi"/>
				<Item Name="ANC350_UpdateAbsolute.vi" Type="VI" URL="../drivers/ANC350_v1.4.42.llb/ANC350_UpdateAbsolute.vi"/>
			</Item>
			<Item Name="lib" Type="Folder">
				<Item Name="win32" Type="Folder">
					<Item Name="hvpositionerv2.dll" Type="Document" URL="../drivers/lib/win32/hvpositionerv2.dll"/>
					<Item Name="msvcp71d.dll" Type="Document" URL="../drivers/lib/win32/msvcp71d.dll"/>
					<Item Name="msvcr71d.dll" Type="Document" URL="../drivers/lib/win32/msvcr71d.dll"/>
					<Item Name="nhconnect.dll" Type="Document" URL="../drivers/lib/win32/nhconnect.dll"/>
				</Item>
				<Item Name="win64" Type="Folder">
					<Item Name="hvpositionerv2.dll" Type="Document" URL="../drivers/lib/win64/hvpositionerv2.dll"/>
				</Item>
			</Item>
		</Item>
		<Item Name="expt vi" Type="Folder">
			<Item Name="rotate with temp control.vi" Type="VI" URL="../expt vi/rotate with temp control.vi"/>
			<Item Name="setpoint and rotate in steps.vi" Type="VI" URL="../expt vi/setpoint and rotate in steps.vi"/>
			<Item Name="setpoint and rotate.vi" Type="VI" URL="../expt vi/setpoint and rotate.vi"/>
		</Item>
		<Item Name="FGV" Type="Folder">
			<Item Name="FGV - Attocube Actions.vi" Type="VI" URL="../FGV/FGV - Attocube Actions.vi"/>
			<Item Name="FGV - Attocube Remote.vi" Type="VI" URL="../FGV/FGV - Attocube Remote.vi"/>
			<Item Name="FGV - Attocube Status.vi" Type="VI" URL="../FGV/FGV - Attocube Status.vi"/>
			<Item Name="FGV - Attocube Targets.vi" Type="VI" URL="../FGV/FGV - Attocube Targets.vi"/>
		</Item>
		<Item Name="SubVIs" Type="Folder">
			<Item Name="Attocube_to_DSC.vi" Type="VI" URL="../SubVIs/Attocube_to_DSC.vi"/>
			<Item Name="check actions absolute.vi" Type="VI" URL="../SubVIs/check actions absolute.vi"/>
			<Item Name="check actions output.vi" Type="VI" URL="../SubVIs/check actions output.vi"/>
			<Item Name="check targets.vi" Type="VI" URL="../SubVIs/check targets.vi"/>
			<Item Name="Choose Axis.vi" Type="VI" URL="../SubVIs/Choose Axis.vi"/>
			<Item Name="NetVarWrite_bool.vi" Type="VI" URL="../SubVIs/NetVarWrite_bool.vi"/>
			<Item Name="NetVarWrite_dbl.vi" Type="VI" URL="../SubVIs/NetVarWrite_dbl.vi"/>
			<Item Name="NetVarWrite_str.vi" Type="VI" URL="../SubVIs/NetVarWrite_str.vi"/>
		</Item>
		<Item Name="Attocube Main.vi" Type="VI" URL="../Attocube Main.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="user.lib" Type="Folder">
				<Item Name="MGI Approximately Equal.vi" Type="VI" URL="/&lt;userlib&gt;/_MGI/Numeric/Comparison/MGI Approximately Equal.vi"/>
				<Item Name="Wait (ms)__ogtk.vi" Type="VI" URL="/&lt;userlib&gt;/_OpenG.lib/time/time.llb/Wait (ms)__ogtk.vi"/>
			</Item>
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Add State(s) to Queue__JKI_lib_State_Machine.vi" Type="VI" URL="/&lt;vilib&gt;/addons/_JKI Toolkits/State Machine/_JKI_lib_State_Machine.llb/Add State(s) to Queue__JKI_lib_State_Machine.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_3D Picture Control.lvlib" Type="Library" URL="/&lt;vilib&gt;/picture/3D Picture Control/NI_3D Picture Control.lvlib"/>
				<Item Name="NI_AALBase.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALBase.lvlib"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Parse State Queue__JKI_lib_State_Machine.vi" Type="VI" URL="/&lt;vilib&gt;/addons/_JKI Toolkits/State Machine/_JKI_lib_State_Machine.llb/Parse State Queue__JKI_lib_State_Machine.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set Busy.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Busy.vi"/>
				<Item Name="Set Cursor (Cursor ID).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor (Cursor ID).vi"/>
				<Item Name="Set Cursor (Icon Pict).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor (Icon Pict).vi"/>
				<Item Name="Set Cursor.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Set Cursor.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="Unset Busy.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/cursorutil.llb/Unset Busy.vi"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
			<Item Name="visualize.vi" Type="VI" URL="../visualize.vi"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
