/* change settings in this file before building */
#ifndef CONFIG_H
#define CONFIG_H

/* MODKEY (Mod1 == alt) and master size */
#define MODKEY          Mod1Mask
#define MASTER_SIZE     0.5 /*master, where 1 is all the screen.*/
/* Colors */
#define FOCUS           "rgb:2C/1B/12"
#define UNFOCUS         "rgb:00/00/00"
/* Border Control */
static int gaps = 11;   /* set gaps between windows */
static int boarders = 4;/* set width of window boarders */

/* add custom programs here. */
const char* dmenucmd[] = {"dmenu_run",NULL};
const char* emacscmd[] = {"emacs", NULL};
/* Use the below to set your terminal of choice */
const char* termicmd[] = {"urxvt",NULL};

/* This should allow us to execvp our session into cwm */
const char* wmrestor[] = {"cwm", NULL};
/* Avoid multiple paste */
#define DESKTOPCHANGE(K,N) \
    {  MODKEY,             K,                          change_desktop, {.i = N}}, \
    {  MODKEY|ShiftMask,   K,                          client_to_desktop, {.i = N}},
/* declare stacking mode */
extern int swmode;
/* Define Keybinds for Programs Here */
static struct key keys[] = {
    /* MODKEY              KEY                         FUNCTION        ARGS*/
    {  MODKEY,             XK_h,                       decrease,       {NULL}},
    {  MODKEY,             XK_l,                       increase,       {NULL}},
    {  MODKEY|ControlMask, XK_x,                       kill_client,    {NULL}},
    {  MODKEY,             XK_j,                       next_win,       {NULL}},
    {  MODKEY,             XK_Tab,                     next_win,       {NULL}},
    {  MODKEY,             XK_k,                       prev_win,       {NULL}},
    {  MODKEY|ControlMask,   XK_j,                       move_up,        {NULL}},
    {  MODKEY|ControlMask,   XK_k,                       move_down,      {NULL}},
    {  MODKEY,             XK_Return,                  swap_master,    {NULL}},
    {  MODKEY,             XK_space,                   switch_mode,    {NULL}},
    {  MODKEY,             XK_p,                       spawn,          {.com = dmenucmd}},
    {  MODKEY|ControlMask,   XK_Return,                  spawn,          {.com = termicmd}},
    {  MODKEY|ControlMask,   XK_e,                       spawn,          {.com = emacscmd}},
    {  MODKEY|ControlMask,   XK_w,                       wmrestore,      {NULL}},
    {  MODKEY|ControlMask,   XK_s,                     stackmode,      {NULL}},
    {  MODKEY,             XK_Right,                   next_desktop,   {NULL}},
    {  MODKEY,             XK_Left,                    prev_desktop,   {NULL}},
       DESKTOPCHANGE(      XK_1,                                       0)
       DESKTOPCHANGE(      XK_2,                                       1)
       DESKTOPCHANGE(      XK_3,                                       2)
       DESKTOPCHANGE(      XK_4,                                       3)
    {  MODKEY|ControlMask,   XK_q,                       quit,           {NULL}}
};

#endif
