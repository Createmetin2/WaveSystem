//Search

void CGraphicBase::SetScreenEffectWaving(float fDuringTime, int iPower)
{
	ms_dwWavingEndTime = CTimer::Instance().GetCurrentMillisecond() + long(fDuringTime * 1000.0f);
	ms_iWavingPower = iPower;
}

//Add under

#ifdef ENABLE_EARTHQUAKE_SYSTEM
void CGraphicBase::SetScreenEffectWavingEnd()
{
	ms_dwWavingEndTime = 0;
	ms_iWavingPower = 0;
}
#endif