/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

#include <uapi/linux/nl80211.h>

u32 rtw_ch2freq(u32 channel)
{
  if (channel <= 14) {
    return ieee80211_channel_to_frequency(channel, NL80211_BAND_2GHZ);
  } else {
    return ieee80211_channel_to_frequency(channel, NL80211_BAND_5GHZ);
  }
}

u32 rtw_freq2ch(u32 freq)
{
	return ieee80211_frequency_to_channel(freq);
}

