//On DWORD CActorInstance::__SetMotion(const SSetMotionData& c_rkSetMotData, DWORD dwRandMotKey) search:

	if (IsDead())
	{
		if (uNextMot!=CRaceMotionData::NAME_DAMAGE_FLYING && uNextMot!=CRaceMotionData::NAME_DAMAGE_FLYING_BACK && uNextMot!=CRaceMotionData::NAME_DEAD && uNextMot!=CRaceMotionData::NAME_DEAD_BACK)
			return 0;
	}
	if (IsUsingSkill())
	{
		__OnStop();
	}
	
//Add under

#ifdef DISABLE_EARTHQUAKE_SYSTEM
	if (GetRace() == 6091) //Razador
	{
		if (uNextMot == CRaceMotionData::NAME_RUN)
		{
			SetScreenEffectWaving(50.00f, 800); // Waaaaaaaaaaave
		}
		else
		{
			SetScreenEffectWavingEnd();
		}
	}
	else if (GetRace() == 6051) //Ignator
	{
		if (uNextMot == CRaceMotionData::NAME_RUN)
		{
			SetScreenEffectWaving(50.00f, 400); // Meh Wave
		}
		else
		{
			SetScreenEffectWavingEnd();
		}
	}
	else if (GetRace() == 691) //Orc Boss
	{
		if (uNextMot == CRaceMotionData::NAME_RUN)
		{
			SetScreenEffectWaving(50.00f, 100); // Bruuuuh! Little Wave
		}
		else
		{
			SetScreenEffectWavingEnd();
		}
	}
#endif