#ifndef _h264_vui_h_
#define _h264_vui_h_

#include "h264-hrd.h"

struct h264_vui_t
{
	unsigned int aspect_ratio_info_present_flag : 1;
	unsigned int overscan_info_present_flag : 1;
	unsigned int video_signal_type_present_flag : 1;
	unsigned int chroma_loc_info_present_flag : 1;
	unsigned int timing_info_present_flag : 1;
	unsigned int nal_hrd_parameters_present_flag : 1;
	unsigned int vcl_hrd_parameters_present_flag : 1;
	unsigned int pic_struct_present_flag : 1;
	unsigned int bitstream_restriction_flag : 1;

	struct h264_hrd_t nal_hrd;
	struct h264_hrd_t vcl_hrd;
};

#endif /* !1_h264_vui_h_ */
