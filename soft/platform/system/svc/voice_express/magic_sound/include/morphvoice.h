//////////////////////////////////////////////////////////////////////////////
///

//
////////////////////////////////////////////////////////////////////////////////
//
// License :
//

//
////////////////////////////////////////////////////////////////////////////////

#ifndef MorphVoice_H
#define MorphVoice_H

#include "STTypes.h"


#include "hal_debug.h"
/// @todo include the profile codes here
#include "sxs_io.h"
#include "vois_profile_codes.h"


//
/*
* change value
*/
#define RDA_CHANGE_NONE		        0		
#define RDA_CHANGE_WOMAN			1		/* Ů�Ի� */
#define RDA_CHANGE_MAN				2		/* ���Ի� */
#define RDA_CHANGE_CHILD			3		/* ��ͯ�� */
#define RDA_CHANGE_OLD				4		/* ���껯 */
#define RDA_CHANGE_CARTOON			5		/* ��ͨ�� */
#define RDA_CHANGE_YOUNG			6		/* ���ữ */


    void  MorphVoice_Init(uint numChannels);
    void  MorphVoice_setup( int sampleRate,uint nChange, bool bSpeech,bool bQuick );
    int    MorphVoice_run( SAMPLETYPE *samples, uint nSamples);
    void  MorphVoice_Close();
    void MorphVoice_Off();






#endif
