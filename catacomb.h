/* The Catacomb Source Code
 * Copyright (C) 1993-2014 Flat Rock Software
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __CATACOMB_H__
#define __CATACOMB_H__

#include "catdefs.h"
#include "pcrlib.h"

typedef struct {
    byte think;			/*some of these sizes are for the*/
    byte contact;			/*convenience of the assembly routines*/
    byte solid;
    word firstchar;
    byte size;
    byte stages;
    byte dirmask;
    word speed;
    byte hitpoints;
    byte damage;
    word points;
    byte filler[2];
  } objdeftype;

  typedef enum {quited,killed,reseted,victorious} exittype;
  extern exittype gamexit; /*determines what to do after playloop*/

  extern char altmeters[14][14];

  extern char meters[14][14];

  dirtype opposite[9];

  extern int oldtiles [NUMTILES];		/*tile displayed last refresh*/
  extern int background[87][86];		/*base map*/
  extern int view[87][86];			/*base map with objects drawn in*/
  extern int originx, originy;			/*current world location of ul corn*/
  extern byte priority [maxpics+1];		/*tile draw overlap priorities*/

  extern int items[6],saveitems[6];
  extern int shotpower;			/*0-13 characters in power meter*/
  extern int side;	                        /*which side shots come from*/
  extern int boltsleft;			/*number of shots left in a bolt*/

  extern activeobj o[maxobj+1],saveo[1];	/*everything that moves is here*/
  extern objtype obj , altobj;			/*total info about objecton and alt*/
  extern int altnum;				/*o[#] of altobj*/
  extern int numobj,objecton;			/*number of objects in o now*/

  extern objdeftype objdef [lastclass];

  extern boolean playdone, leveldone;

  extern boolean tempb;
  extern char *tempp;

  extern int chkx,chky,chkspot;		/*spot being checked by walk*/

  extern word frameon;
  extern char *grmem;
  extern classtype clvar;

  extern int VGAPAL;				// just to make pcrlib happy

  extern boolean exitdemo,resetgame;
  extern statetype gamestate;

  extern ControlStruct ctrl;

  extern char *pics, *picsexact;

  extern unsigned EGADATASTART;

  extern long savescore;

  //NOLAN ADDED
  extern boolean GODMODE;

#endif
